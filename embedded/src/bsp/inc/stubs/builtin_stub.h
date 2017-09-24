#ifndef _BUILTIN_STUB_H_
#define _BUILTIN_STUB_H_

#ifdef __cplusplus
extern "C" {
#endif

static inline unsigned __builtin_disable_interrupts() {
    return 0;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
static inline void __builtin_set_isr_state(unsigned isr_state) {
    return;
}
#pragma GCC diagnostic pop

#ifdef __cplusplus
}
#endif

#endif /* ifndef _BUILTIN_STUB_H_ */
