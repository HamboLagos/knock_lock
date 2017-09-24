#include "bsp/xc.h"

int main() {
    for (;;) {
        TRISDbits.TRISD3 = 0;
        LATDbits.LATD3 = 1;

        TRISCbits.TRISC13 = 0;
        LATCbits.LATC13 = 1;
    }
}
