/** \file */
#ifndef _OSCILLATOR_H_
#define _OSCILLATOR_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    OSCILLATOR_CONFIG_USB
} Oscillator_Config;

void Oscillator_config(Oscillator_Config config);

#ifdef __cplusplus
}
#endif

#endif /* ifndef _OSCILLATOR_H_ */
