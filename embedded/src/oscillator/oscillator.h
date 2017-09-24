/** \file */
#ifndef _OSCILLATOR_H_
#define _OSCILLATOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "inc/definitions.h"

typedef enum {
    OSCILLATOR_CONFIG_LOW_POWER,
    OSCILLATOR_CONFIG_USB,
    OSCILLATOR_CONFIG_COUNT
} Oscillator_Config;

void Oscillator_init();
void Oscillator_configure(Oscillator_Config config);
Hz Oscillator_getClockFrequency();

#ifdef __cplusplus
}
#endif

#endif /* ifndef _OSCILLATOR_H_ */
