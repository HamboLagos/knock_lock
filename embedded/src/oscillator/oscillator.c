/** \file
 * \brief  */
#include "oscillator/oscillator.h"

#include "oscillator/hal/"

void Oscillator_configure(Oscillator_Config config) {
    Oscillator_HAL_init();

    switch (config) {
    default:
    case OSCILLATOR_CONFIG_USB:

    break;
    }
}
