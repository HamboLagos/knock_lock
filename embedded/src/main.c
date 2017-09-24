#include "oscillator/oscillator.h"
#include "oscillator/hal/oscillator_hal.h"

#include "bsp/inc/xc.h"

#include <stdbool.h>

int main() {
    Oscillator_configure(OSCILLATOR_CONFIG_USB);

    TRISDbits.TRISD3 = 0;

    for (;;) {
        static bool on = true;

        unsigned counter = 100000;
        while(counter--) {
            LATDbits.LATD3 = on ? 1 : 0;
        }
        on = !on;
    }
}
