/** \file */
#ifndef _INTERRUPTS_H_
#define _INTERRUPTS_H_

#ifdef __cplusplus
extern "C" {
#endif

#ifdef UNIT_TEST
#include "bsp/inc/stubs/builtin_stub.h"
#endif

static inline unsigned Interrupts_disable() {
    return __builtin_disable_interrupts();
}

static inline void Interrupts_restore(unsigned isr_state) {
    __builtin_set_isr_state(isr_state);
}

#ifdef __cplusplus
}
#endif

#endif /* ifndef _INTERRUPTS_H_ */
