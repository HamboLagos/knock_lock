#ifndef _DEVICE_CONFIGURATION_H_
#define _DEVICE_CONFIGURATION_H_

#ifdef __cplusplus
extern "C" {
#endif

// FDEVOPT
#pragma config SOSCHP = OFF // SOSC in normal power mode
#pragma config ALTI2C = OFF // Primary I2C pins are used
#pragma config FUSBIDIO = OFF // USBID pin is controled by the usb module
#pragma config FVBUSIO = OFF // VBUS pin is controlled by the usb module
#pragma config USERID = 0xFFFF // user ID bits

// FICD
#pragma config JTAGEN = OFF // JTAG is disabled
#pragma config ICS = PGx2 // Debug on PGEC2/PGED2

// FPOR
#pragma config BOREN = BOR3 // Brown out reset enabled in HW, SBOREN bit disabled
#pragma config RETVR = OFF // Retention regulator disabled
#pragma config LPBOREN = ON // Low power BOR is enabled when main BOR is disabled

// FWDT
#pragma config SWDTPS = PS1048576 // Sleep mode WDT PS selection 1:1048576
#pragma config FWDTWINSZ = PS25_0 // WDT window size is 25%
#pragma config WINDIS = OFF // WDT is not running in windowed mode
#pragma config RWDTPS = PS1048576 // Run mode WDT PS selection 1:1048576
#pragma config RCLKSEL = LPRC // Run MOde WDT Clock selection is LPRC (same as sleep)
#pragma config FWDTEN = OFF // WDT disabled

// FOSCSEL
#pragma config FNOSC = FRCDIV // Oscillator is FRC with Divide-by-N
#pragma config PLLSRC = FRC // PLL source oscillator is FRC
#pragma config SOSCEN = ON // Secondary oscillator enabled
#pragma config IESO = OFF // Two speed startup disabled
#pragma config POSCMOD = OFF // Primary oscillator disabled
#pragma config OSCIOFNC = OFF // Oscillator output on CLKO pin disabled
#pragma config SOSCSEL = OFF // Crystal used on secondary oscillator pins
#pragma config FCKSM = CSECME // Clock switching and FSCM enabled

// FSEC
#pragma config CP = OFF // code protection off

#ifdef __cplusplus
}
#endif

#endif /* ifndef _DEVICE_CONFIGURATION_H_ */
