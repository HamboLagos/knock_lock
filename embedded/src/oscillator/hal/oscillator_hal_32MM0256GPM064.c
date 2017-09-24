/** \file
 * \brief HAL for configuring the Oscillators.
 *
 * Clock Sources:
 * * Primary (POSC): None
 * * Fast RC (FRC): Internal RC, 8MHz
 * ** Output Stage: 1x-256x Divisor
 * * Secondary (SOSC): Xtal, 32.768KHz
 * * Low Power RC (LPRC): Internal RC, 31.25KHz
 * * PLL
 * ** Input Clock Source: POSC, FRC
 * ** Input Stage: 2x-24x Multiplier
 * ** Output Stage: 1x-256x Divisor */
#include "oscillator/hal/oscillator_hal_32MM0256GPM064.h"

#include "bsp/inc/syskey.h"
#include "bsp/inc/xc.h"

/** \brief Sets the clock source for SYSCLK/PBCLK.
 *
 * This will block until the selected clock source becomes stable. On return,
 * the selected clock source will be the new clock source for SYSCLK/PBCLK.
 * Clients should take care that modules which depend on a given clock source
 * are (re)configured for the new clock source (fe UARTS).
 *
 * \note When using FRC, clients should also set the FRC divisor via
 * #Oscillator_HAL_setFRCDivisor().
 * *
 * \note When using SPLL, clients should also set the PLL clock source, input
 * multiplier, and output divisor via #Oscillator_HAL_pllConfigure(). */
void Oscillator_HAL_setClockSource(Oscillator_HAL_ClockSource clock_source) {
    Syskey_unlock();
    OSCCONbits.NOSC = clock_source;
    OSCCONbits.OSWEN = 1; // start clock switch
    Syskey_lock();

    while (OSCCONbits.OSWEN) { Nop(); } // wait for clock switch to finish
}

/** \brief Sets the divisor for the internal Fast RC oscillator (8MHz nominal).
 *
 * \note This is safe to call even when the FRC is the active clock source. */
void Oscillator_HAL_setFRCDivisor(Oscillator_HAL_FRCDivisor frc_divisor) {
    Syskey_unlock();
    OSCCONbits.FRCDIV = frc_divisor;
    Syskey_lock();
}

/** \brief Configures the clock source, and input and output stages of the PLL.
 *
 * \note This is not safe to call while the PLL is the active clock source. To
 * configure the PLL, clients should switch to another clock source (such as
 * FRC), then configure the PLL, then switch to the PLL as the clock source. */
void Oscillator_HAL_PLLConfigure(Oscillator_HAL_PLLClockSource clock_source,
                             Oscillator_HAL_PLLInputMultiplier input_multiplier,
                             Oscillator_HAL_PLLOutputDivisor output_divisor) {
    Syskey_unlock();
    SPLLCONbits.PLLICLK = clock_source;
    SPLLCONbits.PLLMULT = input_multiplier;
    SPLLCONbits.PLLODIV = output_divisor;
    Syskey_lock();
}

void Oscillator_HAL_setActiveTuneSource(Oscillator_HAL_ActiveTuneSource tune_source) {
    Syskey_unlock();
    OSCTUNbits.ON = 0;

    if (tune_source != OSCILLATOR_HAL_ACTIVE_TUNE_SOURCE_OFF) {
        OSCTUNbits.SRC = tune_source;
        OSCTUNbits.ON = 1;
    }
    Syskey_lock();
}
