/** \file */
#ifndef _OSCILLATOR_HAL_H_
#define _OSCILLATOR_HAL_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    OSCILLATOR_HAL_CLOCK_SOURCE_FRC  = 0b000,
    OSCILLATOR_HAL_CLOCK_SOURCE_SPLL = 0b001,
    OSCILLATOR_HAL_CLOCK_SOURCE_POSC = 0b010,
    OSCILLATOR_HAL_CLOCK_SOURCE_SOSC = 0b100,
    OSCILLATOR_HAL_CLOCK_SOURCE_LPRC = 0b101,
} Oscillator_HAL_ClockSource;

typedef enum {
    OSCILLATOR_PLL_INPUT_MULTIPLIER_2X  = 0b0000000,
    OSCILLATOR_PLL_INPUT_MULTIPLIER_3X  = 0b0000001,
    OSCILLATOR_PLL_INPUT_MULTIPLIER_4X  = 0b0000010,
    OSCILLATOR_PLL_INPUT_MULTIPLIER_6X  = 0b0000011,
    OSCILLATOR_PLL_INPUT_MULTIPLIER_8X  = 0b0000100,
    OSCILLATOR_PLL_INPUT_MULTIPLIER_12X = 0b0000101,
    OSCILLATOR_PLL_INPUT_MULTIPLIER_24X = 0b0000110,
} Oscillator_HAL_PLLInputMultiplier;

typedef enum {
    oscillator_pll_output_divisor_1x   = 0b000,
    oscillator_pll_output_divisor_2x   = 0b001,
    oscillator_pll_output_divisor_4x   = 0b010,
    oscillator_pll_output_divisor_8x   = 0b011,
    oscillator_pll_output_divisor_16x  = 0b100,
    oscillator_pll_output_divisor_32x  = 0b101,
    oscillator_pll_output_divisor_64x  = 0b110,
    oscillator_pll_output_divisor_256x = 0b111,
} Oscillator_HAL_PLLOutputDivisor;

void Oscillator_HAL_init();

void Oscillator_HAL_setClockSource(Oscillator_HAL_ClockSource clock_source);
void Oscillator_HAL_switchClocks();

void Oscillator_pllConfigure(Oscillator_PLLInputMultiplier input_multiplier,
                             Oscillator_PLLOutputDivisor output_divisor);
void Oscillator_PLLEnable();
void Oscillator_PLLDisable();

#ifdef __cplusplus
}
#endif

#endif /* ifndef _OSCILLATOR_HAL_H_ */
