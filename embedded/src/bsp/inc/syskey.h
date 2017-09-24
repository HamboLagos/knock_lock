/** \file */
#ifndef _SYSKEY_H_
#define _SYSKEY_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "bsp/inc/xc.h"
#include "bsp/inc/interrupts.h"

#define LOCK_KEY    (0x00000000)
#define UNLOCK_KEY0 (0xAA996655)
#define UNLOCK_KEY1 (0x556699AA)

static inline void Syskey_lock() {
    unsigned isr_state = Interrupts_disable();

    SYSKEY = LOCK_KEY;

    Interrupts_restore(isr_state);
}

static inline void Syskey_unlock() {
    unsigned isr_state = Interrupts_disable();

    Syskey_lock();
    SYSKEY = UNLOCK_KEY0;
    SYSKEY = UNLOCK_KEY1;

    Interrupts_restore(isr_state);
}

#ifdef __cplusplus
}
#endif

#endif /* ifndef _SYSKEY_H_ */
