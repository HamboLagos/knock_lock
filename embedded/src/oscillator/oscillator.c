/** \file
 * \brief Interface for configure the clock sources onboard for different
 * operating modes of the board.
 *
 * Clients should initialize this interface before it is used via
 * #Oscillator_init().
 *
 * Clients can set the operating mode via #Oscillator_configure(). This will
 * change the clock source and PLL settings for the given mode.
 *
 * Clients can retrieve the clock frequency at runtime via
 * #Oscillator_getClockFrequency(). */
#include "oscillator/oscillator.h"
#include "oscillator/hal/oscillator_hal.h"

#include "bsp/inc/syskey.h"

#include <stdbool.h>

typedef struct {
    Oscillator_HAL_ClockSource clock_source;
    Oscillator_HAL_PLLClockSource pll_clock_source;
    Oscillator_HAL_PLLInputMultiplier pll_input_multiplier;
    Oscillator_HAL_PLLOutputDivisor pll_output_divisor;
    Oscillator_HAL_ActiveTuneSource tune_source;
    Hz frequency;
} ConfigSettings;

/** \brief Settings for each Oscillator Configuration.
 *
 * \note For proper USB operation, the mid-stage of the PLL
 * (post-input-multiplier) must be 96MHz. */
static const ConfigSettings _configurations[OSCILLATOR_CONFIG_COUNT] = {
    {
        // OSCILLATOR_CONFIG_LOW_POWER
        OSCILLATOR_HAL_CLOCK_SOURCE_FRC,
        0,
        0,
        0,
        OSCILLATOR_HAL_ACTIVE_TUNE_SOURCE_OFF,
        FRC_FREQUENCY
    }, {
        // OSCILLATOR_CONFIG_USB
        OSCILLATOR_HAL_CLOCK_SOURCE_SPLL,
        OSCILLATOR_HAL_PLL_CLOCK_SOURCE_FRC,
        OSCILLATOR_HAL_PLL_INPUT_MULTIPLIER_12X,
        OSCILLATOR_HAL_PLL_OUTPUT_DIVISOR_4X,
        OSCILLATOR_HAL_ACTIVE_TUNE_SOURCE_USB,
        FRC_FREQUENCY * 12 / 4
    }
};

static Oscillator_Config _current_config = OSCILLATOR_CONFIG_LOW_POWER;

/** \brief Initializes the HW and SW dependencies of this interface.
 *
 * This should be called once during application initialization before this
 * interface is used. Sets the default oscillator configuration, which is low
 * power. */
void Oscillator_init() {
    Oscillator_HAL_setFRCDivisor(OSCILLATOR_HAL_FRC_DIVISOR_1X);
    Oscillator_configure(OSCILLATOR_CONFIG_LOW_POWER);
}

/** \brief Configures the oscillator for the given operating mode.
 *
 * \sa #FRC_FREQUENCY and #_configurations to determine SYSCLK/PBCLK
 * frequencies. */
void Oscillator_configure(Oscillator_Config config) {
    _current_config = config;

    // change to a safe clock source before making changes
    Oscillator_HAL_setClockSource(OSCILLATOR_HAL_CLOCK_SOURCE_FRC);

    const ConfigSettings* settings = &_configurations[config];
    if (settings->clock_source == OSCILLATOR_HAL_CLOCK_SOURCE_SPLL) {
        Oscillator_HAL_PLLConfigure(settings->pll_clock_source,
                                    settings->pll_input_multiplier,
                                    settings->pll_output_divisor);
    }
    Oscillator_HAL_setClockSource(settings->clock_source);
    Oscillator_HAL_setActiveTuneSource(settings->tune_source);
}

/** \brief Returns the SYSCLK/PBCLK frequency. */
Hz Oscillator_getClockFrequency() {
    return _configurations[_current_config].frequency;
}
