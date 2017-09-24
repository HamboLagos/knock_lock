/** \file
 * \brief HAL for configuring the Oscillators.
 *
 * To (re)set to the default configuration, clients can use
 * #Oscillator_HAL_init(). */
#include "oscillator/hal/oscillator_hal.h"

#include "bsp/inc/syskey.h"
#include "bsp/inc/xc.h"

/** \brief (Re)sets to the default oscillator configuration:
 *
 * The default settings configure the SYSCLK/PBCLK to run from the FRC with no
 * divisor and and PLL disabled (8MHz).
 *
 * The secondary oscillator is always enabled (32.768KHz). */
void Oscillator_HAL_init() {
    unsigned isr_state = Interrupts_disable();
    Syskey_unlock();

    Oscillator_HAL_setClockSource(OSCILLATOR_HAL_CLOCK_SOURCE_FRC);
    Oscillator_HAL_switchClocks();

    Syskey_lock();
    Interrupts_restore(isr_state);
}

void Oscillator_HAL_setSystemClockSource(Oscillator_HAL_ClockSource clock_source) {
    OSCCONbits.NOSC = clock_source;
}

void Oscillator_HAL_switchClocks() {
    OSCCONbits.OSWEN = 1; // start clock switch
    while (OSCCONbits.OSWEN) { Nop(); } // wait for clock switch to finish
}

void Oscillator_HAL_
