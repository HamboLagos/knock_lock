#ifndef _SFR_STUB_H_
#define _SFR_STUB_H_

#ifdef __cplusplus
extern "C" {
#endif

#define RTCCON1 RTCCON1
extern volatile unsigned int   RTCCON1;
typedef struct {
  unsigned :4;
  unsigned OUTSEL:3;
  unsigned RTCOE:1;
  unsigned :3;
  unsigned WRLOCK:1;
  unsigned :3;
  unsigned ON:1;
  unsigned ALMRPT:8;
  unsigned AMASK:4;
  unsigned :2;
  unsigned CHIME:1;
  unsigned ALRMEN:1;
} __RTCCON1bits_t;
extern volatile __RTCCON1bits_t RTCCON1bits;
extern volatile unsigned int        RTCCON1CLR;
extern volatile unsigned int        RTCCON1SET;
extern volatile unsigned int        RTCCON1INV;
#define RTCCON2 RTCCON2
extern volatile unsigned int   RTCCON2;
typedef struct {
  unsigned CLKSEL:2;
  unsigned :9;
  unsigned FDIV:5;
  unsigned DIV:16;
} __RTCCON2bits_t;
extern volatile __RTCCON2bits_t RTCCON2bits;
extern volatile unsigned int        RTCCON2CLR;
extern volatile unsigned int        RTCCON2SET;
extern volatile unsigned int        RTCCON2INV;
#define RTCSTAT RTCSTAT
extern volatile unsigned int   RTCSTAT;
typedef struct {
  unsigned HALFSEC:1;
  unsigned ALMSYNC:1;
  unsigned SYNC:1;
  unsigned :2;
  unsigned ALMEVT:1;
} __RTCSTATbits_t;
extern volatile __RTCSTATbits_t RTCSTATbits;
extern volatile unsigned int        RTCSTATCLR;
extern volatile unsigned int        RTCSTATSET;
extern volatile unsigned int        RTCSTATINV;
#define RTCTIME RTCTIME
extern volatile unsigned int   RTCTIME;
typedef struct {
  unsigned :8;
  unsigned SECONE:4;
  unsigned SECTEN:3;
  unsigned :1;
  unsigned MINONE:4;
  unsigned MINTEN:3;
  unsigned :1;
  unsigned HRONE:4;
  unsigned HRTEN:3;
} __RTCTIMEbits_t;
extern volatile __RTCTIMEbits_t RTCTIMEbits;
extern volatile unsigned int        RTCTIMECLR;
extern volatile unsigned int        RTCTIMESET;
extern volatile unsigned int        RTCTIMEINV;
#define RTCDATE RTCDATE
extern volatile unsigned int   RTCDATE;
typedef struct {
  unsigned WDAY:3;
  unsigned :5;
  unsigned DAYONE:4;
  unsigned DAYTEN:2;
  unsigned :2;
  unsigned MTHONE:4;
  unsigned MTHTEN:1;
  unsigned :3;
  unsigned YRONE:4;
  unsigned YRTEN:4;
} __RTCDATEbits_t;
extern volatile __RTCDATEbits_t RTCDATEbits;
extern volatile unsigned int        RTCDATECLR;
extern volatile unsigned int        RTCDATESET;
extern volatile unsigned int        RTCDATEINV;
#define ALMTIME ALMTIME
extern volatile unsigned int   ALMTIME;
typedef struct {
  unsigned :8;
  unsigned SECONE:4;
  unsigned SECTEN:3;
  unsigned :1;
  unsigned MINONE:4;
  unsigned MINTEN:3;
  unsigned :1;
  unsigned HRONE:4;
  unsigned HRTEN:3;
} __ALMTIMEbits_t;
extern volatile __ALMTIMEbits_t ALMTIMEbits;
extern volatile unsigned int        ALMTIMECLR;
extern volatile unsigned int        ALMTIMESET;
extern volatile unsigned int        ALMTIMEINV;
#define ALMDATE ALMDATE
extern volatile unsigned int   ALMDATE;
typedef struct {
  unsigned WDAY:3;
  unsigned :5;
  unsigned DAYONE:4;
  unsigned DAYTEN:2;
  unsigned :2;
  unsigned MTHONE:4;
  unsigned MTHTEN:1;
} __ALMDATEbits_t;
extern volatile __ALMDATEbits_t ALMDATEbits;
extern volatile unsigned int        ALMDATECLR;
extern volatile unsigned int        ALMDATESET;
extern volatile unsigned int        ALMDATEINV;
#define CCP1CON1 CCP1CON1
extern volatile unsigned int   CCP1CON1;
typedef struct {
  unsigned MOD:4;
  unsigned CCSEL:1;
  unsigned T32:1;
  unsigned TMRPS:2;
  unsigned CLKSEL:3;
  unsigned TMRSYNC:1;
  unsigned CCPSLP:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned SYNC:5;
  unsigned ALTSYNC:1;
  unsigned ONESHOT:1;
  unsigned TRIGEN:1;
  unsigned OPS:4;
  unsigned :2;
  unsigned RTRGEN:1;
  unsigned OPSSRC:1;
} __CCP1CON1bits_t;
extern volatile __CCP1CON1bits_t CCP1CON1bits;
extern volatile unsigned int        CCP1CON1CLR;
extern volatile unsigned int        CCP1CON1SET;
extern volatile unsigned int        CCP1CON1INV;
#define CCP1CON2 CCP1CON2
extern volatile unsigned int   CCP1CON2;
typedef struct {
  unsigned ASDG:8;
  unsigned :4;
  unsigned SSDG:1;
  unsigned :1;
  unsigned ASDGM:1;
  unsigned PWMRSEN:1;
  unsigned ICS:3;
  unsigned AUXOUT:2;
  unsigned :1;
  unsigned ICGSM:2;
  unsigned OCAEN:1;
  unsigned OCBEN:1;
  unsigned OCCEN:1;
  unsigned OCDEN:1;
  unsigned OCEEN:1;
  unsigned OCFEN:1;
  unsigned :1;
  unsigned OENSYNC:1;
} __CCP1CON2bits_t;
extern volatile __CCP1CON2bits_t CCP1CON2bits;
extern volatile unsigned int        CCP1CON2CLR;
extern volatile unsigned int        CCP1CON2SET;
extern volatile unsigned int        CCP1CON2INV;
#define CCP1CON3 CCP1CON3
extern volatile unsigned int   CCP1CON3;
typedef struct {
  unsigned DT:6;
  unsigned :10;
  unsigned PSSBDF:2;
  unsigned PSSACE:2;
  unsigned POLBDF:1;
  unsigned POLACE:1;
  unsigned :2;
  unsigned OUTM:3;
  unsigned :1;
  unsigned OSCNT:3;
  unsigned OETRIG:1;
} __CCP1CON3bits_t;
extern volatile __CCP1CON3bits_t CCP1CON3bits;
extern volatile unsigned int        CCP1CON3CLR;
extern volatile unsigned int        CCP1CON3SET;
extern volatile unsigned int        CCP1CON3INV;
#define CCP1STAT CCP1STAT
extern volatile unsigned int   CCP1STAT;
typedef struct {
  unsigned ICBNE:1;
  unsigned ICOV:1;
  unsigned ICDIS:1;
  unsigned SCEVT:1;
  unsigned ASEVT:1;
  unsigned TRCLR:1;
  unsigned TRSET:1;
  unsigned CCPTRIG:1;
  unsigned :2;
  unsigned ICGARM:1;
  unsigned :5;
  unsigned RAWIP:1;
  unsigned RBWIP:1;
  unsigned TMRLWIP:1;
  unsigned TMRHWIP:1;
  unsigned PRLWIP:1;
} __CCP1STATbits_t;
extern volatile __CCP1STATbits_t CCP1STATbits;
extern volatile unsigned int        CCP1STATCLR;
extern volatile unsigned int        CCP1STATSET;
extern volatile unsigned int        CCP1STATINV;
#define CCP1TMR CCP1TMR
extern volatile unsigned int   CCP1TMR;
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP1TMRbits_t;
extern volatile __CCP1TMRbits_t CCP1TMRbits;
extern volatile unsigned int        CCP1TMRCLR;
extern volatile unsigned int        CCP1TMRSET;
extern volatile unsigned int        CCP1TMRINV;
#define CCP1PR CCP1PR
extern volatile unsigned int   CCP1PR;
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP1PRbits_t;
extern volatile __CCP1PRbits_t CCP1PRbits;
extern volatile unsigned int        CCP1PRCLR;
extern volatile unsigned int        CCP1PRSET;
extern volatile unsigned int        CCP1PRINV;
#define CCP1RA CCP1RA
extern volatile unsigned int   CCP1RA;
typedef struct {
  unsigned CMPA:16;
} __CCP1RAbits_t;
extern volatile __CCP1RAbits_t CCP1RAbits;
extern volatile unsigned int        CCP1RACLR;
extern volatile unsigned int        CCP1RASET;
extern volatile unsigned int        CCP1RAINV;
#define CCP1RB CCP1RB
extern volatile unsigned int   CCP1RB;
typedef struct {
  unsigned CMPB:16;
} __CCP1RBbits_t;
extern volatile __CCP1RBbits_t CCP1RBbits;
extern volatile unsigned int        CCP1RBCLR;
extern volatile unsigned int        CCP1RBSET;
extern volatile unsigned int        CCP1RBINV;
#define CCP1BUF CCP1BUF
extern volatile unsigned int   CCP1BUF;
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP1BUFbits_t;
extern volatile __CCP1BUFbits_t CCP1BUFbits;
extern volatile unsigned int        CCP1BUFCLR;
extern volatile unsigned int        CCP1BUFSET;
extern volatile unsigned int        CCP1BUFINV;
#define CCP2CON1 CCP2CON1
extern volatile unsigned int   CCP2CON1;
typedef struct {
  unsigned MOD:4;
  unsigned CCSEL:1;
  unsigned T32:1;
  unsigned TMRPS:2;
  unsigned CLKSEL:3;
  unsigned TMRSYNC:1;
  unsigned CCPSLP:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned SYNC:5;
  unsigned ALTSYNC:1;
  unsigned ONESHOT:1;
  unsigned TRIGEN:1;
  unsigned OPS:4;
  unsigned :2;
  unsigned RTRGEN:1;
  unsigned OPSSRC:1;
} __CCP2CON1bits_t;
extern volatile __CCP2CON1bits_t CCP2CON1bits;
extern volatile unsigned int        CCP2CON1CLR;
extern volatile unsigned int        CCP2CON1SET;
extern volatile unsigned int        CCP2CON1INV;
#define CCP2CON2 CCP2CON2
extern volatile unsigned int   CCP2CON2;
typedef struct {
  unsigned ASDG:8;
  unsigned :4;
  unsigned SSDG:1;
  unsigned :1;
  unsigned ASDGM:1;
  unsigned PWMRSEN:1;
  unsigned ICS:3;
  unsigned AUXOUT:2;
  unsigned :1;
  unsigned ICGSM:2;
  unsigned OCAEN:1;
  unsigned OCBEN:1;
  unsigned OCCEN:1;
  unsigned OCDEN:1;
  unsigned OCEEN:1;
  unsigned OCFEN:1;
  unsigned :1;
  unsigned OENSYNC:1;
} __CCP2CON2bits_t;
extern volatile __CCP2CON2bits_t CCP2CON2bits;
extern volatile unsigned int        CCP2CON2CLR;
extern volatile unsigned int        CCP2CON2SET;
extern volatile unsigned int        CCP2CON2INV;
#define CCP2CON3 CCP2CON3
extern volatile unsigned int   CCP2CON3;
typedef struct {
  unsigned DT:6;
  unsigned :10;
  unsigned PSSBDF:2;
  unsigned PSSACE:2;
  unsigned POLBDF:1;
  unsigned POLACE:1;
  unsigned :2;
  unsigned OUTM:3;
  unsigned :1;
  unsigned OSCNT:3;
  unsigned OETRIG:1;
} __CCP2CON3bits_t;
extern volatile __CCP2CON3bits_t CCP2CON3bits;
extern volatile unsigned int        CCP2CON3CLR;
extern volatile unsigned int        CCP2CON3SET;
extern volatile unsigned int        CCP2CON3INV;
#define CCP2STAT CCP2STAT
extern volatile unsigned int   CCP2STAT;
typedef struct {
  unsigned ICBNE:1;
  unsigned ICOV:1;
  unsigned ICDIS:1;
  unsigned SCEVT:1;
  unsigned ASEVT:1;
  unsigned TRCLR:1;
  unsigned TRSET:1;
  unsigned CCPTRIG:1;
  unsigned :2;
  unsigned ICGARM:1;
  unsigned :5;
  unsigned RAWIP:1;
  unsigned RBWIP:1;
  unsigned TMRLWIP:1;
  unsigned TMRHWIP:1;
  unsigned PRLWIP:1;
} __CCP2STATbits_t;
extern volatile __CCP2STATbits_t CCP2STATbits;
extern volatile unsigned int        CCP2STATCLR;
extern volatile unsigned int        CCP2STATSET;
extern volatile unsigned int        CCP2STATINV;
#define CCP2TMR CCP2TMR
extern volatile unsigned int   CCP2TMR;
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP2TMRbits_t;
extern volatile __CCP2TMRbits_t CCP2TMRbits;
extern volatile unsigned int        CCP2TMRCLR;
extern volatile unsigned int        CCP2TMRSET;
extern volatile unsigned int        CCP2TMRINV;
#define CCP2PR CCP2PR
extern volatile unsigned int   CCP2PR;
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP2PRbits_t;
extern volatile __CCP2PRbits_t CCP2PRbits;
extern volatile unsigned int        CCP2PRCLR;
extern volatile unsigned int        CCP2PRSET;
extern volatile unsigned int        CCP2PRINV;
#define CCP2RA CCP2RA
extern volatile unsigned int   CCP2RA;
typedef struct {
  unsigned CMPA:16;
} __CCP2RAbits_t;
extern volatile __CCP2RAbits_t CCP2RAbits;
extern volatile unsigned int        CCP2RACLR;
extern volatile unsigned int        CCP2RASET;
extern volatile unsigned int        CCP2RAINV;
#define CCP2RB CCP2RB
extern volatile unsigned int   CCP2RB;
typedef struct {
  unsigned CMPB:16;
} __CCP2RBbits_t;
extern volatile __CCP2RBbits_t CCP2RBbits;
extern volatile unsigned int        CCP2RBCLR;
extern volatile unsigned int        CCP2RBSET;
extern volatile unsigned int        CCP2RBINV;
#define CCP2BUF CCP2BUF
extern volatile unsigned int   CCP2BUF;
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP2BUFbits_t;
extern volatile __CCP2BUFbits_t CCP2BUFbits;
extern volatile unsigned int        CCP2BUFCLR;
extern volatile unsigned int        CCP2BUFSET;
extern volatile unsigned int        CCP2BUFINV;
#define CCP3CON1 CCP3CON1
extern volatile unsigned int   CCP3CON1;
typedef struct {
  unsigned MOD:4;
  unsigned CCSEL:1;
  unsigned T32:1;
  unsigned TMRPS:2;
  unsigned CLKSEL:3;
  unsigned TMRSYNC:1;
  unsigned CCPSLP:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned SYNC:5;
  unsigned ALTSYNC:1;
  unsigned ONESHOT:1;
  unsigned TRIGEN:1;
  unsigned OPS:4;
  unsigned :2;
  unsigned RTRGEN:1;
  unsigned OPSSRC:1;
} __CCP3CON1bits_t;
extern volatile __CCP3CON1bits_t CCP3CON1bits;
extern volatile unsigned int        CCP3CON1CLR;
extern volatile unsigned int        CCP3CON1SET;
extern volatile unsigned int        CCP3CON1INV;
#define CCP3CON2 CCP3CON2
extern volatile unsigned int   CCP3CON2;
typedef struct {
  unsigned ASDG:8;
  unsigned :4;
  unsigned SSDG:1;
  unsigned :1;
  unsigned ASDGM:1;
  unsigned PWMRSEN:1;
  unsigned ICS:3;
  unsigned AUXOUT:2;
  unsigned :1;
  unsigned ICGSM:2;
  unsigned OCAEN:1;
  unsigned OCBEN:1;
  unsigned OCCEN:1;
  unsigned OCDEN:1;
  unsigned OCEEN:1;
  unsigned OCFEN:1;
  unsigned :1;
  unsigned OENSYNC:1;
} __CCP3CON2bits_t;
extern volatile __CCP3CON2bits_t CCP3CON2bits;
extern volatile unsigned int        CCP3CON2CLR;
extern volatile unsigned int        CCP3CON2SET;
extern volatile unsigned int        CCP3CON2INV;
#define CCP3CON3 CCP3CON3
extern volatile unsigned int   CCP3CON3;
typedef struct {
  unsigned DT:6;
  unsigned :10;
  unsigned PSSBDF:2;
  unsigned PSSACE:2;
  unsigned POLBDF:1;
  unsigned POLACE:1;
  unsigned :2;
  unsigned OUTM:3;
  unsigned :1;
  unsigned OSCNT:3;
  unsigned OETRIG:1;
} __CCP3CON3bits_t;
extern volatile __CCP3CON3bits_t CCP3CON3bits;
extern volatile unsigned int        CCP3CON3CLR;
extern volatile unsigned int        CCP3CON3SET;
extern volatile unsigned int        CCP3CON3INV;
#define CCP3STAT CCP3STAT
extern volatile unsigned int   CCP3STAT;
typedef struct {
  unsigned ICBNE:1;
  unsigned ICOV:1;
  unsigned ICDIS:1;
  unsigned SCEVT:1;
  unsigned ASEVT:1;
  unsigned TRCLR:1;
  unsigned TRSET:1;
  unsigned CCPTRIG:1;
  unsigned :2;
  unsigned ICGARM:1;
  unsigned :5;
  unsigned RAWIP:1;
  unsigned RBWIP:1;
  unsigned TMRLWIP:1;
  unsigned TMRHWIP:1;
  unsigned PRLWIP:1;
} __CCP3STATbits_t;
extern volatile __CCP3STATbits_t CCP3STATbits;
extern volatile unsigned int        CCP3STATCLR;
extern volatile unsigned int        CCP3STATSET;
extern volatile unsigned int        CCP3STATINV;
#define CCP3TMR CCP3TMR
extern volatile unsigned int   CCP3TMR;
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP3TMRbits_t;
extern volatile __CCP3TMRbits_t CCP3TMRbits;
extern volatile unsigned int        CCP3TMRCLR;
extern volatile unsigned int        CCP3TMRSET;
extern volatile unsigned int        CCP3TMRINV;
#define CCP3PR CCP3PR
extern volatile unsigned int   CCP3PR;
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP3PRbits_t;
extern volatile __CCP3PRbits_t CCP3PRbits;
extern volatile unsigned int        CCP3PRCLR;
extern volatile unsigned int        CCP3PRSET;
extern volatile unsigned int        CCP3PRINV;
#define CCP3RA CCP3RA
extern volatile unsigned int   CCP3RA;
typedef struct {
  unsigned CMPA:16;
} __CCP3RAbits_t;
extern volatile __CCP3RAbits_t CCP3RAbits;
extern volatile unsigned int        CCP3RACLR;
extern volatile unsigned int        CCP3RASET;
extern volatile unsigned int        CCP3RAINV;
#define CCP3RB CCP3RB
extern volatile unsigned int   CCP3RB;
typedef struct {
  unsigned CMPB:16;
} __CCP3RBbits_t;
extern volatile __CCP3RBbits_t CCP3RBbits;
extern volatile unsigned int        CCP3RBCLR;
extern volatile unsigned int        CCP3RBSET;
extern volatile unsigned int        CCP3RBINV;
#define CCP3BUF CCP3BUF
extern volatile unsigned int   CCP3BUF;
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP3BUFbits_t;
extern volatile __CCP3BUFbits_t CCP3BUFbits;
extern volatile unsigned int        CCP3BUFCLR;
extern volatile unsigned int        CCP3BUFSET;
extern volatile unsigned int        CCP3BUFINV;
#define CCP4CON1 CCP4CON1
extern volatile unsigned int   CCP4CON1;
typedef struct {
  unsigned MOD:4;
  unsigned CCSEL:1;
  unsigned T32:1;
  unsigned TMRPS:2;
  unsigned CLKSEL:3;
  unsigned TMRSYNC:1;
  unsigned CCPSLP:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned SYNC:5;
  unsigned ALTSYNC:1;
  unsigned ONESHOT:1;
  unsigned TRIGEN:1;
  unsigned OPS:4;
  unsigned :2;
  unsigned RTRGEN:1;
  unsigned OPSSRC:1;
} __CCP4CON1bits_t;
extern volatile __CCP4CON1bits_t CCP4CON1bits;
extern volatile unsigned int        CCP4CON1CLR;
extern volatile unsigned int        CCP4CON1SET;
extern volatile unsigned int        CCP4CON1INV;
#define CCP4CON2 CCP4CON2
extern volatile unsigned int   CCP4CON2;
typedef struct {
  unsigned ASDG:8;
  unsigned :4;
  unsigned SSDG:1;
  unsigned :1;
  unsigned ASDGM:1;
  unsigned PWMRSEN:1;
  unsigned ICS:3;
  unsigned AUXOUT:2;
  unsigned :1;
  unsigned ICGSM:2;
  unsigned OCAEN:1;
  unsigned :6;
  unsigned OENSYNC:1;
} __CCP4CON2bits_t;
extern volatile __CCP4CON2bits_t CCP4CON2bits;
extern volatile unsigned int        CCP4CON2CLR;
extern volatile unsigned int        CCP4CON2SET;
extern volatile unsigned int        CCP4CON2INV;
#define CCP4CON3 CCP4CON3
extern volatile unsigned int   CCP4CON3;
typedef struct {
  unsigned :18;
  unsigned PSSACE:2;
  unsigned :1;
  unsigned POLACE:1;
  unsigned :6;
  unsigned OSCNT:3;
  unsigned OETRIG:1;
} __CCP4CON3bits_t;
extern volatile __CCP4CON3bits_t CCP4CON3bits;
extern volatile unsigned int        CCP4CON3CLR;
extern volatile unsigned int        CCP4CON3SET;
extern volatile unsigned int        CCP4CON3INV;
#define CCP4STAT CCP4STAT
extern volatile unsigned int   CCP4STAT;
typedef struct {
  unsigned ICBNE:1;
  unsigned ICOV:1;
  unsigned ICDIS:1;
  unsigned SCEVT:1;
  unsigned ASEVT:1;
  unsigned TRCLR:1;
  unsigned TRSET:1;
  unsigned CCPTRIG:1;
  unsigned :2;
  unsigned ICGARM:1;
  unsigned :5;
  unsigned RAWIP:1;
  unsigned RBWIP:1;
  unsigned TMRLWIP:1;
  unsigned TMRHWIP:1;
  unsigned PRLWIP:1;
} __CCP4STATbits_t;
extern volatile __CCP4STATbits_t CCP4STATbits;
extern volatile unsigned int        CCP4STATCLR;
extern volatile unsigned int        CCP4STATSET;
extern volatile unsigned int        CCP4STATINV;
#define CCP4TMR CCP4TMR
extern volatile unsigned int   CCP4TMR;
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP4TMRbits_t;
extern volatile __CCP4TMRbits_t CCP4TMRbits;
extern volatile unsigned int        CCP4TMRCLR;
extern volatile unsigned int        CCP4TMRSET;
extern volatile unsigned int        CCP4TMRINV;
#define CCP4PR CCP4PR
extern volatile unsigned int   CCP4PR;
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP4PRbits_t;
extern volatile __CCP4PRbits_t CCP4PRbits;
extern volatile unsigned int        CCP4PRCLR;
extern volatile unsigned int        CCP4PRSET;
extern volatile unsigned int        CCP4PRINV;
#define CCP4RA CCP4RA
extern volatile unsigned int   CCP4RA;
typedef struct {
  unsigned CMPA:16;
} __CCP4RAbits_t;
extern volatile __CCP4RAbits_t CCP4RAbits;
extern volatile unsigned int        CCP4RACLR;
extern volatile unsigned int        CCP4RASET;
extern volatile unsigned int        CCP4RAINV;
#define CCP4RB CCP4RB
extern volatile unsigned int   CCP4RB;
typedef struct {
  unsigned CMPB:16;
} __CCP4RBbits_t;
extern volatile __CCP4RBbits_t CCP4RBbits;
extern volatile unsigned int        CCP4RBCLR;
extern volatile unsigned int        CCP4RBSET;
extern volatile unsigned int        CCP4RBINV;
#define CCP4BUF CCP4BUF
extern volatile unsigned int   CCP4BUF;
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP4BUFbits_t;
extern volatile __CCP4BUFbits_t CCP4BUFbits;
extern volatile unsigned int        CCP4BUFCLR;
extern volatile unsigned int        CCP4BUFSET;
extern volatile unsigned int        CCP4BUFINV;
#define CCP5CON1 CCP5CON1
extern volatile unsigned int   CCP5CON1;
typedef struct {
  unsigned MOD:4;
  unsigned CCSEL:1;
  unsigned T32:1;
  unsigned TMRPS:2;
  unsigned CLKSEL:3;
  unsigned TMRSYNC:1;
  unsigned CCPSLP:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned SYNC:5;
  unsigned ALTSYNC:1;
  unsigned ONESHOT:1;
  unsigned TRIGEN:1;
  unsigned OPS:4;
  unsigned :2;
  unsigned RTRGEN:1;
  unsigned OPSSRC:1;
} __CCP5CON1bits_t;
extern volatile __CCP5CON1bits_t CCP5CON1bits;
extern volatile unsigned int        CCP5CON1CLR;
extern volatile unsigned int        CCP5CON1SET;
extern volatile unsigned int        CCP5CON1INV;
#define CCP5CON2 CCP5CON2
extern volatile unsigned int   CCP5CON2;
typedef struct {
  unsigned ASDG:8;
  unsigned :4;
  unsigned SSDG:1;
  unsigned :1;
  unsigned ASDGM:1;
  unsigned PWMRSEN:1;
  unsigned ICS:3;
  unsigned AUXOUT:2;
  unsigned :1;
  unsigned ICGSM:2;
  unsigned OCAEN:1;
  unsigned :6;
  unsigned OENSYNC:1;
} __CCP5CON2bits_t;
extern volatile __CCP5CON2bits_t CCP5CON2bits;
extern volatile unsigned int        CCP5CON2CLR;
extern volatile unsigned int        CCP5CON2SET;
extern volatile unsigned int        CCP5CON2INV;
#define CCP5CON3 CCP5CON3
extern volatile unsigned int   CCP5CON3;
typedef struct {
  unsigned :18;
  unsigned PSSACE:2;
  unsigned :1;
  unsigned POLACE:1;
  unsigned :6;
  unsigned OSCNT:3;
  unsigned OETRIG:1;
} __CCP5CON3bits_t;
extern volatile __CCP5CON3bits_t CCP5CON3bits;
extern volatile unsigned int        CCP5CON3CLR;
extern volatile unsigned int        CCP5CON3SET;
extern volatile unsigned int        CCP5CON3INV;
#define CCP5STAT CCP5STAT
extern volatile unsigned int   CCP5STAT;
typedef struct {
  unsigned ICBNE:1;
  unsigned ICOV:1;
  unsigned ICDIS:1;
  unsigned SCEVT:1;
  unsigned ASEVT:1;
  unsigned TRCLR:1;
  unsigned TRSET:1;
  unsigned CCPTRIG:1;
  unsigned :2;
  unsigned ICGARM:1;
  unsigned :5;
  unsigned RAWIP:1;
  unsigned RBWIP:1;
  unsigned TMRLWIP:1;
  unsigned TMRHWIP:1;
  unsigned PRLWIP:1;
} __CCP5STATbits_t;
extern volatile __CCP5STATbits_t CCP5STATbits;
extern volatile unsigned int        CCP5STATCLR;
extern volatile unsigned int        CCP5STATSET;
extern volatile unsigned int        CCP5STATINV;
#define CCP5TMR CCP5TMR
extern volatile unsigned int   CCP5TMR;
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP5TMRbits_t;
extern volatile __CCP5TMRbits_t CCP5TMRbits;
extern volatile unsigned int        CCP5TMRCLR;
extern volatile unsigned int        CCP5TMRSET;
extern volatile unsigned int        CCP5TMRINV;
#define CCP5PR CCP5PR
extern volatile unsigned int   CCP5PR;
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP5PRbits_t;
extern volatile __CCP5PRbits_t CCP5PRbits;
extern volatile unsigned int        CCP5PRCLR;
extern volatile unsigned int        CCP5PRSET;
extern volatile unsigned int        CCP5PRINV;
#define CCP5RA CCP5RA
extern volatile unsigned int   CCP5RA;
typedef struct {
  unsigned CMPA:16;
} __CCP5RAbits_t;
extern volatile __CCP5RAbits_t CCP5RAbits;
extern volatile unsigned int        CCP5RACLR;
extern volatile unsigned int        CCP5RASET;
extern volatile unsigned int        CCP5RAINV;
#define CCP5RB CCP5RB
extern volatile unsigned int   CCP5RB;
typedef struct {
  unsigned CMPB:16;
} __CCP5RBbits_t;
extern volatile __CCP5RBbits_t CCP5RBbits;
extern volatile unsigned int        CCP5RBCLR;
extern volatile unsigned int        CCP5RBSET;
extern volatile unsigned int        CCP5RBINV;
#define CCP5BUF CCP5BUF
extern volatile unsigned int   CCP5BUF;
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP5BUFbits_t;
extern volatile __CCP5BUFbits_t CCP5BUFbits;
extern volatile unsigned int        CCP5BUFCLR;
extern volatile unsigned int        CCP5BUFSET;
extern volatile unsigned int        CCP5BUFINV;
#define CCP6CON1 CCP6CON1
extern volatile unsigned int   CCP6CON1;
typedef struct {
  unsigned MOD:4;
  unsigned CCSEL:1;
  unsigned T32:1;
  unsigned TMRPS:2;
  unsigned CLKSEL:3;
  unsigned TMRSYNC:1;
  unsigned CCPSLP:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned SYNC:5;
  unsigned ALTSYNC:1;
  unsigned ONESHOT:1;
  unsigned TRIGEN:1;
  unsigned OPS:4;
  unsigned :2;
  unsigned RTRGEN:1;
  unsigned OPSSRC:1;
} __CCP6CON1bits_t;
extern volatile __CCP6CON1bits_t CCP6CON1bits;
extern volatile unsigned int        CCP6CON1CLR;
extern volatile unsigned int        CCP6CON1SET;
extern volatile unsigned int        CCP6CON1INV;
#define CCP6CON2 CCP6CON2
extern volatile unsigned int   CCP6CON2;
typedef struct {
  unsigned ASDG:8;
  unsigned :4;
  unsigned SSDG:1;
  unsigned :1;
  unsigned ASDGM:1;
  unsigned PWMRSEN:1;
  unsigned ICS:3;
  unsigned AUXOUT:2;
  unsigned :1;
  unsigned ICGSM:2;
  unsigned OCAEN:1;
  unsigned :6;
  unsigned OENSYNC:1;
} __CCP6CON2bits_t;
extern volatile __CCP6CON2bits_t CCP6CON2bits;
extern volatile unsigned int        CCP6CON2CLR;
extern volatile unsigned int        CCP6CON2SET;
extern volatile unsigned int        CCP6CON2INV;
#define CCP6CON3 CCP6CON3
extern volatile unsigned int   CCP6CON3;
typedef struct {
  unsigned :18;
  unsigned PSSACE:2;
  unsigned :1;
  unsigned POLACE:1;
  unsigned :6;
  unsigned OSCNT:3;
  unsigned OETRIG:1;
} __CCP6CON3bits_t;
extern volatile __CCP6CON3bits_t CCP6CON3bits;
extern volatile unsigned int        CCP6CON3CLR;
extern volatile unsigned int        CCP6CON3SET;
extern volatile unsigned int        CCP6CON3INV;
#define CCP6STAT CCP6STAT
extern volatile unsigned int   CCP6STAT;
typedef struct {
  unsigned ICBNE:1;
  unsigned ICOV:1;
  unsigned ICDIS:1;
  unsigned SCEVT:1;
  unsigned ASEVT:1;
  unsigned TRCLR:1;
  unsigned TRSET:1;
  unsigned CCPTRIG:1;
  unsigned :2;
  unsigned ICGARM:1;
  unsigned :5;
  unsigned RAWIP:1;
  unsigned RBWIP:1;
  unsigned TMRLWIP:1;
  unsigned TMRHWIP:1;
  unsigned PRLWIP:1;
} __CCP6STATbits_t;
extern volatile __CCP6STATbits_t CCP6STATbits;
extern volatile unsigned int        CCP6STATCLR;
extern volatile unsigned int        CCP6STATSET;
extern volatile unsigned int        CCP6STATINV;
#define CCP6TMR CCP6TMR
extern volatile unsigned int   CCP6TMR;
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP6TMRbits_t;
extern volatile __CCP6TMRbits_t CCP6TMRbits;
extern volatile unsigned int        CCP6TMRCLR;
extern volatile unsigned int        CCP6TMRSET;
extern volatile unsigned int        CCP6TMRINV;
#define CCP6PR CCP6PR
extern volatile unsigned int   CCP6PR;
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP6PRbits_t;
extern volatile __CCP6PRbits_t CCP6PRbits;
extern volatile unsigned int        CCP6PRCLR;
extern volatile unsigned int        CCP6PRSET;
extern volatile unsigned int        CCP6PRINV;
#define CCP6RA CCP6RA
extern volatile unsigned int   CCP6RA;
typedef struct {
  unsigned CMPA:16;
} __CCP6RAbits_t;
extern volatile __CCP6RAbits_t CCP6RAbits;
extern volatile unsigned int        CCP6RACLR;
extern volatile unsigned int        CCP6RASET;
extern volatile unsigned int        CCP6RAINV;
#define CCP6RB CCP6RB
extern volatile unsigned int   CCP6RB;
typedef struct {
  unsigned CMPB:16;
} __CCP6RBbits_t;
extern volatile __CCP6RBbits_t CCP6RBbits;
extern volatile unsigned int        CCP6RBCLR;
extern volatile unsigned int        CCP6RBSET;
extern volatile unsigned int        CCP6RBINV;
#define CCP6BUF CCP6BUF
extern volatile unsigned int   CCP6BUF;
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP6BUFbits_t;
extern volatile __CCP6BUFbits_t CCP6BUFbits;
extern volatile unsigned int        CCP6BUFCLR;
extern volatile unsigned int        CCP6BUFSET;
extern volatile unsigned int        CCP6BUFINV;
#define CCP7CON1 CCP7CON1
extern volatile unsigned int   CCP7CON1;
typedef struct {
  unsigned MOD:4;
  unsigned CCSEL:1;
  unsigned T32:1;
  unsigned TMRPS:2;
  unsigned CLKSEL:3;
  unsigned TMRSYNC:1;
  unsigned CCPSLP:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned SYNC:5;
  unsigned ALTSYNC:1;
  unsigned ONESHOT:1;
  unsigned TRIGEN:1;
  unsigned OPS:4;
  unsigned :2;
  unsigned RTRGEN:1;
  unsigned OPSSRC:1;
} __CCP7CON1bits_t;
extern volatile __CCP7CON1bits_t CCP7CON1bits;
extern volatile unsigned int        CCP7CON1CLR;
extern volatile unsigned int        CCP7CON1SET;
extern volatile unsigned int        CCP7CON1INV;
#define CCP7CON2 CCP7CON2
extern volatile unsigned int   CCP7CON2;
typedef struct {
  unsigned ASDG:8;
  unsigned :4;
  unsigned SSDG:1;
  unsigned :1;
  unsigned ASDGM:1;
  unsigned PWMRSEN:1;
  unsigned ICS:3;
  unsigned AUXOUT:2;
  unsigned :1;
  unsigned ICGSM:2;
  unsigned OCAEN:1;
  unsigned :6;
  unsigned OENSYNC:1;
} __CCP7CON2bits_t;
extern volatile __CCP7CON2bits_t CCP7CON2bits;
extern volatile unsigned int        CCP7CON2CLR;
extern volatile unsigned int        CCP7CON2SET;
extern volatile unsigned int        CCP7CON2INV;
#define CCP7CON3 CCP7CON3
extern volatile unsigned int   CCP7CON3;
typedef struct {
  unsigned :18;
  unsigned PSSACE:2;
  unsigned :1;
  unsigned POLACE:1;
  unsigned :6;
  unsigned OSCNT:3;
  unsigned OETRIG:1;
} __CCP7CON3bits_t;
extern volatile __CCP7CON3bits_t CCP7CON3bits;
extern volatile unsigned int        CCP7CON3CLR;
extern volatile unsigned int        CCP7CON3SET;
extern volatile unsigned int        CCP7CON3INV;
#define CCP7STAT CCP7STAT
extern volatile unsigned int   CCP7STAT;
typedef struct {
  unsigned ICBNE:1;
  unsigned ICOV:1;
  unsigned ICDIS:1;
  unsigned SCEVT:1;
  unsigned ASEVT:1;
  unsigned TRCLR:1;
  unsigned TRSET:1;
  unsigned CCPTRIG:1;
  unsigned :2;
  unsigned ICGARM:1;
  unsigned :5;
  unsigned RAWIP:1;
  unsigned RBWIP:1;
  unsigned TMRLWIP:1;
  unsigned TMRHWIP:1;
  unsigned PRLWIP:1;
} __CCP7STATbits_t;
extern volatile __CCP7STATbits_t CCP7STATbits;
extern volatile unsigned int        CCP7STATCLR;
extern volatile unsigned int        CCP7STATSET;
extern volatile unsigned int        CCP7STATINV;
#define CCP7TMR CCP7TMR
extern volatile unsigned int   CCP7TMR;
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP7TMRbits_t;
extern volatile __CCP7TMRbits_t CCP7TMRbits;
extern volatile unsigned int        CCP7TMRCLR;
extern volatile unsigned int        CCP7TMRSET;
extern volatile unsigned int        CCP7TMRINV;
#define CCP7PR CCP7PR
extern volatile unsigned int   CCP7PR;
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP7PRbits_t;
extern volatile __CCP7PRbits_t CCP7PRbits;
extern volatile unsigned int        CCP7PRCLR;
extern volatile unsigned int        CCP7PRSET;
extern volatile unsigned int        CCP7PRINV;
#define CCP7RA CCP7RA
extern volatile unsigned int   CCP7RA;
typedef struct {
  unsigned CMPA:16;
} __CCP7RAbits_t;
extern volatile __CCP7RAbits_t CCP7RAbits;
extern volatile unsigned int        CCP7RACLR;
extern volatile unsigned int        CCP7RASET;
extern volatile unsigned int        CCP7RAINV;
#define CCP7RB CCP7RB
extern volatile unsigned int   CCP7RB;
typedef struct {
  unsigned CMPB:16;
} __CCP7RBbits_t;
extern volatile __CCP7RBbits_t CCP7RBbits;
extern volatile unsigned int        CCP7RBCLR;
extern volatile unsigned int        CCP7RBSET;
extern volatile unsigned int        CCP7RBINV;
#define CCP7BUF CCP7BUF
extern volatile unsigned int   CCP7BUF;
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP7BUFbits_t;
extern volatile __CCP7BUFbits_t CCP7BUFbits;
extern volatile unsigned int        CCP7BUFCLR;
extern volatile unsigned int        CCP7BUFSET;
extern volatile unsigned int        CCP7BUFINV;
#define CCP8CON1 CCP8CON1
extern volatile unsigned int   CCP8CON1;
typedef struct {
  unsigned MOD:4;
  unsigned CCSEL:1;
  unsigned T32:1;
  unsigned TMRPS:2;
  unsigned CLKSEL:3;
  unsigned TMRSYNC:1;
  unsigned CCPSLP:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned SYNC:5;
  unsigned ALTSYNC:1;
  unsigned ONESHOT:1;
  unsigned TRIGEN:1;
  unsigned OPS:4;
  unsigned :2;
  unsigned RTRGEN:1;
  unsigned OPSSRC:1;
} __CCP8CON1bits_t;
extern volatile __CCP8CON1bits_t CCP8CON1bits;
extern volatile unsigned int        CCP8CON1CLR;
extern volatile unsigned int        CCP8CON1SET;
extern volatile unsigned int        CCP8CON1INV;
#define CCP8CON2 CCP8CON2
extern volatile unsigned int   CCP8CON2;
typedef struct {
  unsigned ASDG:8;
  unsigned :4;
  unsigned SSDG:1;
  unsigned :1;
  unsigned ASDGM:1;
  unsigned PWMRSEN:1;
  unsigned ICS:3;
  unsigned AUXOUT:2;
  unsigned :1;
  unsigned ICGSM:2;
  unsigned OCAEN:1;
  unsigned :6;
  unsigned OENSYNC:1;
} __CCP8CON2bits_t;
extern volatile __CCP8CON2bits_t CCP8CON2bits;
extern volatile unsigned int        CCP8CON2CLR;
extern volatile unsigned int        CCP8CON2SET;
extern volatile unsigned int        CCP8CON2INV;
#define CCP8CON3 CCP8CON3
extern volatile unsigned int   CCP8CON3;
typedef struct {
  unsigned :18;
  unsigned PSSACE:2;
  unsigned :1;
  unsigned POLACE:1;
  unsigned :6;
  unsigned OSCNT:3;
  unsigned OETRIG:1;
} __CCP8CON3bits_t;
extern volatile __CCP8CON3bits_t CCP8CON3bits;
extern volatile unsigned int        CCP8CON3CLR;
extern volatile unsigned int        CCP8CON3SET;
extern volatile unsigned int        CCP8CON3INV;
#define CCP8STAT CCP8STAT
extern volatile unsigned int   CCP8STAT;
typedef struct {
  unsigned ICBNE:1;
  unsigned ICOV:1;
  unsigned ICDIS:1;
  unsigned SCEVT:1;
  unsigned ASEVT:1;
  unsigned TRCLR:1;
  unsigned TRSET:1;
  unsigned CCPTRIG:1;
  unsigned :2;
  unsigned ICGARM:1;
  unsigned :5;
  unsigned RAWIP:1;
  unsigned RBWIP:1;
  unsigned TMRLWIP:1;
  unsigned TMRHWIP:1;
  unsigned PRLWIP:1;
} __CCP8STATbits_t;
extern volatile __CCP8STATbits_t CCP8STATbits;
extern volatile unsigned int        CCP8STATCLR;
extern volatile unsigned int        CCP8STATSET;
extern volatile unsigned int        CCP8STATINV;
#define CCP8TMR CCP8TMR
extern volatile unsigned int   CCP8TMR;
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP8TMRbits_t;
extern volatile __CCP8TMRbits_t CCP8TMRbits;
extern volatile unsigned int        CCP8TMRCLR;
extern volatile unsigned int        CCP8TMRSET;
extern volatile unsigned int        CCP8TMRINV;
#define CCP8PR CCP8PR
extern volatile unsigned int   CCP8PR;
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP8PRbits_t;
extern volatile __CCP8PRbits_t CCP8PRbits;
extern volatile unsigned int        CCP8PRCLR;
extern volatile unsigned int        CCP8PRSET;
extern volatile unsigned int        CCP8PRINV;
#define CCP8RA CCP8RA
extern volatile unsigned int   CCP8RA;
typedef struct {
  unsigned CMPA:16;
} __CCP8RAbits_t;
extern volatile __CCP8RAbits_t CCP8RAbits;
extern volatile unsigned int        CCP8RACLR;
extern volatile unsigned int        CCP8RASET;
extern volatile unsigned int        CCP8RAINV;
#define CCP8RB CCP8RB
extern volatile unsigned int   CCP8RB;
typedef struct {
  unsigned CMPB:16;
} __CCP8RBbits_t;
extern volatile __CCP8RBbits_t CCP8RBbits;
extern volatile unsigned int        CCP8RBCLR;
extern volatile unsigned int        CCP8RBSET;
extern volatile unsigned int        CCP8RBINV;
#define CCP8BUF CCP8BUF
extern volatile unsigned int   CCP8BUF;
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP8BUFbits_t;
extern volatile __CCP8BUFbits_t CCP8BUFbits;
extern volatile unsigned int        CCP8BUFCLR;
extern volatile unsigned int        CCP8BUFSET;
extern volatile unsigned int        CCP8BUFINV;
#define CCP9CON1 CCP9CON1
extern volatile unsigned int   CCP9CON1;
typedef struct {
  unsigned MOD:4;
  unsigned CCSEL:1;
  unsigned T32:1;
  unsigned TMRPS:2;
  unsigned CLKSEL:3;
  unsigned TMRSYNC:1;
  unsigned CCPSLP:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned SYNC:5;
  unsigned ALTSYNC:1;
  unsigned ONESHOT:1;
  unsigned TRIGEN:1;
  unsigned OPS:4;
  unsigned :2;
  unsigned RTRGEN:1;
  unsigned OPSSRC:1;
} __CCP9CON1bits_t;
extern volatile __CCP9CON1bits_t CCP9CON1bits;
extern volatile unsigned int        CCP9CON1CLR;
extern volatile unsigned int        CCP9CON1SET;
extern volatile unsigned int        CCP9CON1INV;
#define CCP9CON2 CCP9CON2
extern volatile unsigned int   CCP9CON2;
typedef struct {
  unsigned ASDG:8;
  unsigned :4;
  unsigned SSDG:1;
  unsigned :1;
  unsigned ASDGM:1;
  unsigned PWMRSEN:1;
  unsigned ICS:3;
  unsigned AUXOUT:2;
  unsigned :1;
  unsigned ICGSM:2;
  unsigned OCAEN:1;
  unsigned :6;
  unsigned OENSYNC:1;
} __CCP9CON2bits_t;
extern volatile __CCP9CON2bits_t CCP9CON2bits;
extern volatile unsigned int        CCP9CON2CLR;
extern volatile unsigned int        CCP9CON2SET;
extern volatile unsigned int        CCP9CON2INV;
#define CCP9CON3 CCP9CON3
extern volatile unsigned int   CCP9CON3;
typedef struct {
  unsigned :18;
  unsigned PSSACE:2;
  unsigned :1;
  unsigned POLACE:1;
  unsigned :6;
  unsigned OSCNT:3;
  unsigned OETRIG:1;
} __CCP9CON3bits_t;
extern volatile __CCP9CON3bits_t CCP9CON3bits;
extern volatile unsigned int        CCP9CON3CLR;
extern volatile unsigned int        CCP9CON3SET;
extern volatile unsigned int        CCP9CON3INV;
#define CCP9STAT CCP9STAT
extern volatile unsigned int   CCP9STAT;
typedef struct {
  unsigned ICBNE:1;
  unsigned ICOV:1;
  unsigned ICDIS:1;
  unsigned SCEVT:1;
  unsigned ASEVT:1;
  unsigned TRCLR:1;
  unsigned TRSET:1;
  unsigned CCPTRIG:1;
  unsigned :2;
  unsigned ICGARM:1;
  unsigned :5;
  unsigned RAWIP:1;
  unsigned RBWIP:1;
  unsigned TMRLWIP:1;
  unsigned TMRHWIP:1;
  unsigned PRLWIP:1;
} __CCP9STATbits_t;
extern volatile __CCP9STATbits_t CCP9STATbits;
extern volatile unsigned int        CCP9STATCLR;
extern volatile unsigned int        CCP9STATSET;
extern volatile unsigned int        CCP9STATINV;
#define CCP9TMR CCP9TMR
extern volatile unsigned int   CCP9TMR;
typedef union {
  struct {
    unsigned TMRL:16;
    unsigned TMRH:16;
  };
  struct {
    unsigned TMR:32;
  };
} __CCP9TMRbits_t;
extern volatile __CCP9TMRbits_t CCP9TMRbits;
extern volatile unsigned int        CCP9TMRCLR;
extern volatile unsigned int        CCP9TMRSET;
extern volatile unsigned int        CCP9TMRINV;
#define CCP9PR CCP9PR
extern volatile unsigned int   CCP9PR;
typedef union {
  struct {
    unsigned PRL:16;
    unsigned PRH:16;
  };
  struct {
    unsigned PR:32;
  };
} __CCP9PRbits_t;
extern volatile __CCP9PRbits_t CCP9PRbits;
extern volatile unsigned int        CCP9PRCLR;
extern volatile unsigned int        CCP9PRSET;
extern volatile unsigned int        CCP9PRINV;
#define CCP9RA CCP9RA
extern volatile unsigned int   CCP9RA;
typedef struct {
  unsigned CMPA:16;
} __CCP9RAbits_t;
extern volatile __CCP9RAbits_t CCP9RAbits;
extern volatile unsigned int        CCP9RACLR;
extern volatile unsigned int        CCP9RASET;
extern volatile unsigned int        CCP9RAINV;
#define CCP9RB CCP9RB
extern volatile unsigned int   CCP9RB;
typedef struct {
  unsigned CMPB:16;
} __CCP9RBbits_t;
extern volatile __CCP9RBbits_t CCP9RBbits;
extern volatile unsigned int        CCP9RBCLR;
extern volatile unsigned int        CCP9RBSET;
extern volatile unsigned int        CCP9RBINV;
#define CCP9BUF CCP9BUF
extern volatile unsigned int   CCP9BUF;
typedef union {
  struct {
    unsigned BUFL:16;
    unsigned BUFH:16;
  };
  struct {
    unsigned BUF:32;
  };
} __CCP9BUFbits_t;
extern volatile __CCP9BUFbits_t CCP9BUFbits;
extern volatile unsigned int        CCP9BUFCLR;
extern volatile unsigned int        CCP9BUFSET;
extern volatile unsigned int        CCP9BUFINV;
#define I2C1CON I2C1CON
extern volatile unsigned int   I2C1CON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned :2;
    unsigned SBCDE:1;
    unsigned SDAHT:1;
    unsigned BOEN:1;
    unsigned SCIE:1;
    unsigned PCIE:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
} __I2C1CONbits_t;
extern volatile __I2C1CONbits_t I2C1CONbits;
extern volatile unsigned int        I2C1CONCLR;
extern volatile unsigned int        I2C1CONSET;
extern volatile unsigned int        I2C1CONINV;
#define I2C1STAT I2C1STAT
extern volatile unsigned int   I2C1STAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :2;
    unsigned ACKTIM:1;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
} __I2C1STATbits_t;
extern volatile __I2C1STATbits_t I2C1STATbits;
extern volatile unsigned int        I2C1STATCLR;
extern volatile unsigned int        I2C1STATSET;
extern volatile unsigned int        I2C1STATINV;
#define I2C1ADD I2C1ADD
extern volatile unsigned int   I2C1ADD;
typedef struct {
  unsigned I2CADD:10;
} __I2C1ADDbits_t;
extern volatile __I2C1ADDbits_t I2C1ADDbits;
extern volatile unsigned int        I2C1ADDCLR;
extern volatile unsigned int        I2C1ADDSET;
extern volatile unsigned int        I2C1ADDINV;
#define I2C1MSK I2C1MSK
extern volatile unsigned int   I2C1MSK;
typedef union {
  struct {
    unsigned I2CMSK:10;
  };
  struct {
    unsigned AMSK:10;
  };
} __I2C1MSKbits_t;
extern volatile __I2C1MSKbits_t I2C1MSKbits;
extern volatile unsigned int        I2C1MSKCLR;
extern volatile unsigned int        I2C1MSKSET;
extern volatile unsigned int        I2C1MSKINV;
#define I2C1BRG I2C1BRG
extern volatile unsigned int   I2C1BRG;
typedef struct {
  unsigned I2CBRG:16;
} __I2C1BRGbits_t;
extern volatile __I2C1BRGbits_t I2C1BRGbits;
extern volatile unsigned int        I2C1BRGCLR;
extern volatile unsigned int        I2C1BRGSET;
extern volatile unsigned int        I2C1BRGINV;
#define I2C1TRN I2C1TRN
extern volatile unsigned int   I2C1TRN;
typedef struct {
  unsigned I2CTRN:8;
} __I2C1TRNbits_t;
extern volatile __I2C1TRNbits_t I2C1TRNbits;
extern volatile unsigned int        I2C1TRNCLR;
extern volatile unsigned int        I2C1TRNSET;
extern volatile unsigned int        I2C1TRNINV;
#define I2C1RCV I2C1RCV
extern volatile unsigned int   I2C1RCV;
typedef struct {
  unsigned I2CRCV:8;
} __I2C1RCVbits_t;
extern volatile __I2C1RCVbits_t I2C1RCVbits;
extern volatile unsigned int        I2C1RCVCLR;
extern volatile unsigned int        I2C1RCVSET;
extern volatile unsigned int        I2C1RCVINV;
#define I2C2CON I2C2CON
extern volatile unsigned int   I2C2CON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned :2;
    unsigned SBCDE:1;
    unsigned SDAHT:1;
    unsigned BOEN:1;
    unsigned SCIE:1;
    unsigned PCIE:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
} __I2C2CONbits_t;
extern volatile __I2C2CONbits_t I2C2CONbits;
extern volatile unsigned int        I2C2CONCLR;
extern volatile unsigned int        I2C2CONSET;
extern volatile unsigned int        I2C2CONINV;
#define I2C2STAT I2C2STAT
extern volatile unsigned int   I2C2STAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :2;
    unsigned ACKTIM:1;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
} __I2C2STATbits_t;
extern volatile __I2C2STATbits_t I2C2STATbits;
extern volatile unsigned int        I2C2STATCLR;
extern volatile unsigned int        I2C2STATSET;
extern volatile unsigned int        I2C2STATINV;
#define I2C2ADD I2C2ADD
extern volatile unsigned int   I2C2ADD;
typedef struct {
  unsigned I2CADD:10;
} __I2C2ADDbits_t;
extern volatile __I2C2ADDbits_t I2C2ADDbits;
extern volatile unsigned int        I2C2ADDCLR;
extern volatile unsigned int        I2C2ADDSET;
extern volatile unsigned int        I2C2ADDINV;
#define I2C2MSK I2C2MSK
extern volatile unsigned int   I2C2MSK;
typedef union {
  struct {
    unsigned I2CMSK:10;
  };
  struct {
    unsigned AMSK:10;
  };
} __I2C2MSKbits_t;
extern volatile __I2C2MSKbits_t I2C2MSKbits;
extern volatile unsigned int        I2C2MSKCLR;
extern volatile unsigned int        I2C2MSKSET;
extern volatile unsigned int        I2C2MSKINV;
#define I2C2BRG I2C2BRG
extern volatile unsigned int   I2C2BRG;
typedef struct {
  unsigned I2CBRG:16;
} __I2C2BRGbits_t;
extern volatile __I2C2BRGbits_t I2C2BRGbits;
extern volatile unsigned int        I2C2BRGCLR;
extern volatile unsigned int        I2C2BRGSET;
extern volatile unsigned int        I2C2BRGINV;
#define I2C2TRN I2C2TRN
extern volatile unsigned int   I2C2TRN;
typedef struct {
  unsigned I2CTRN:8;
} __I2C2TRNbits_t;
extern volatile __I2C2TRNbits_t I2C2TRNbits;
extern volatile unsigned int        I2C2TRNCLR;
extern volatile unsigned int        I2C2TRNSET;
extern volatile unsigned int        I2C2TRNINV;
#define I2C2RCV I2C2RCV
extern volatile unsigned int   I2C2RCV;
typedef struct {
  unsigned I2CRCV:8;
} __I2C2RCVbits_t;
extern volatile __I2C2RCVbits_t I2C2RCVbits;
extern volatile unsigned int        I2C2RCVCLR;
extern volatile unsigned int        I2C2RCVSET;
extern volatile unsigned int        I2C2RCVINV;
#define I2C3CON I2C3CON
extern volatile unsigned int   I2C3CON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned :2;
    unsigned SBCDE:1;
    unsigned SDAHT:1;
    unsigned BOEN:1;
    unsigned SCIE:1;
    unsigned PCIE:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
} __I2C3CONbits_t;
extern volatile __I2C3CONbits_t I2C3CONbits;
extern volatile unsigned int        I2C3CONCLR;
extern volatile unsigned int        I2C3CONSET;
extern volatile unsigned int        I2C3CONINV;
#define I2C3STAT I2C3STAT
extern volatile unsigned int   I2C3STAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :2;
    unsigned ACKTIM:1;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
} __I2C3STATbits_t;
extern volatile __I2C3STATbits_t I2C3STATbits;
extern volatile unsigned int        I2C3STATCLR;
extern volatile unsigned int        I2C3STATSET;
extern volatile unsigned int        I2C3STATINV;
#define I2C3ADD I2C3ADD
extern volatile unsigned int   I2C3ADD;
typedef struct {
  unsigned I2CADD:10;
} __I2C3ADDbits_t;
extern volatile __I2C3ADDbits_t I2C3ADDbits;
extern volatile unsigned int        I2C3ADDCLR;
extern volatile unsigned int        I2C3ADDSET;
extern volatile unsigned int        I2C3ADDINV;
#define I2C3MSK I2C3MSK
extern volatile unsigned int   I2C3MSK;
typedef union {
  struct {
    unsigned I2CMSK:10;
  };
  struct {
    unsigned AMSK:10;
  };
} __I2C3MSKbits_t;
extern volatile __I2C3MSKbits_t I2C3MSKbits;
extern volatile unsigned int        I2C3MSKCLR;
extern volatile unsigned int        I2C3MSKSET;
extern volatile unsigned int        I2C3MSKINV;
#define I2C3BRG I2C3BRG
extern volatile unsigned int   I2C3BRG;
typedef struct {
  unsigned I2CBRG:16;
} __I2C3BRGbits_t;
extern volatile __I2C3BRGbits_t I2C3BRGbits;
extern volatile unsigned int        I2C3BRGCLR;
extern volatile unsigned int        I2C3BRGSET;
extern volatile unsigned int        I2C3BRGINV;
#define I2C3TRN I2C3TRN
extern volatile unsigned int   I2C3TRN;
typedef struct {
  unsigned I2CTRN:8;
} __I2C3TRNbits_t;
extern volatile __I2C3TRNbits_t I2C3TRNbits;
extern volatile unsigned int        I2C3TRNCLR;
extern volatile unsigned int        I2C3TRNSET;
extern volatile unsigned int        I2C3TRNINV;
#define I2C3RCV I2C3RCV
extern volatile unsigned int   I2C3RCV;
typedef struct {
  unsigned I2CRCV:8;
} __I2C3RCVbits_t;
extern volatile __I2C3RCVbits_t I2C3RCVbits;
extern volatile unsigned int        I2C3RCVCLR;
extern volatile unsigned int        I2C3RCVSET;
extern volatile unsigned int        I2C3RCVINV;
#define U1MODE U1MODE
extern volatile unsigned int   U1MODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned OVFDIS:1;
    unsigned CLKSEL:2;
    unsigned :3;
    unsigned ACTIVE:1;
    unsigned SLPEN:1;
  };
  struct {
    unsigned :16;
    unsigned RUNOVF:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U1MODEbits_t;
extern volatile __U1MODEbits_t U1MODEbits;
extern volatile unsigned int        U1MODECLR;
extern volatile unsigned int        U1MODESET;
extern volatile unsigned int        U1MODEINV;
#define U1STA U1STA
extern volatile unsigned int   U1STA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned MASK:8;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U1STAbits_t;
extern volatile __U1STAbits_t U1STAbits;
extern volatile unsigned int        U1STACLR;
extern volatile unsigned int        U1STASET;
extern volatile unsigned int        U1STAINV;
#define U1TXREG U1TXREG
extern volatile unsigned int   U1TXREG;
#define U1RXREG U1RXREG
extern volatile unsigned int   U1RXREG;
#define U1BRG U1BRG
extern volatile unsigned int   U1BRG;
typedef struct {
  unsigned BRG:20;
} __U1BRGbits_t;
extern volatile __U1BRGbits_t U1BRGbits;
extern volatile unsigned int        U1BRGCLR;
extern volatile unsigned int        U1BRGSET;
extern volatile unsigned int        U1BRGINV;
#define U2MODE U2MODE
extern volatile unsigned int   U2MODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned OVFDIS:1;
    unsigned CLKSEL:2;
    unsigned :3;
    unsigned ACTIVE:1;
    unsigned SLPEN:1;
  };
  struct {
    unsigned :16;
    unsigned RUNOVF:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U2MODEbits_t;
extern volatile __U2MODEbits_t U2MODEbits;
extern volatile unsigned int        U2MODECLR;
extern volatile unsigned int        U2MODESET;
extern volatile unsigned int        U2MODEINV;
#define U2STA U2STA
extern volatile unsigned int   U2STA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned MASK:8;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U2STAbits_t;
extern volatile __U2STAbits_t U2STAbits;
extern volatile unsigned int        U2STACLR;
extern volatile unsigned int        U2STASET;
extern volatile unsigned int        U2STAINV;
#define U2TXREG U2TXREG
extern volatile unsigned int   U2TXREG;
#define U2RXREG U2RXREG
extern volatile unsigned int   U2RXREG;
#define U2BRG U2BRG
extern volatile unsigned int   U2BRG;
typedef struct {
  unsigned BRG:20;
} __U2BRGbits_t;
extern volatile __U2BRGbits_t U2BRGbits;
extern volatile unsigned int        U2BRGCLR;
extern volatile unsigned int        U2BRGSET;
extern volatile unsigned int        U2BRGINV;
#define U3MODE U3MODE
extern volatile unsigned int   U3MODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned OVFDIS:1;
    unsigned CLKSEL:2;
    unsigned :3;
    unsigned ACTIVE:1;
    unsigned SLPEN:1;
  };
  struct {
    unsigned :16;
    unsigned RUNOVF:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U3MODEbits_t;
extern volatile __U3MODEbits_t U3MODEbits;
extern volatile unsigned int        U3MODECLR;
extern volatile unsigned int        U3MODESET;
extern volatile unsigned int        U3MODEINV;
#define U3STA U3STA
extern volatile unsigned int   U3STA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned MASK:8;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U3STAbits_t;
extern volatile __U3STAbits_t U3STAbits;
extern volatile unsigned int        U3STACLR;
extern volatile unsigned int        U3STASET;
extern volatile unsigned int        U3STAINV;
#define U3TXREG U3TXREG
extern volatile unsigned int   U3TXREG;
#define U3RXREG U3RXREG
extern volatile unsigned int   U3RXREG;
#define U3BRG U3BRG
extern volatile unsigned int   U3BRG;
typedef struct {
  unsigned BRG:20;
} __U3BRGbits_t;
extern volatile __U3BRGbits_t U3BRGbits;
extern volatile unsigned int        U3BRGCLR;
extern volatile unsigned int        U3BRGSET;
extern volatile unsigned int        U3BRGINV;
#define ADC1BUF0 ADC1BUF0
extern volatile unsigned int   ADC1BUF0;
extern volatile unsigned int        ADC1BUF0CLR;
extern volatile unsigned int        ADC1BUF0SET;
extern volatile unsigned int        ADC1BUF0INV;
#define ADC1BUF1 ADC1BUF1
extern volatile unsigned int   ADC1BUF1;
extern volatile unsigned int        ADC1BUF1CLR;
extern volatile unsigned int        ADC1BUF1SET;
extern volatile unsigned int        ADC1BUF1INV;
#define ADC1BUF2 ADC1BUF2
extern volatile unsigned int   ADC1BUF2;
extern volatile unsigned int        ADC1BUF2CLR;
extern volatile unsigned int        ADC1BUF2SET;
extern volatile unsigned int        ADC1BUF2INV;
#define ADC1BUF3 ADC1BUF3
extern volatile unsigned int   ADC1BUF3;
extern volatile unsigned int        ADC1BUF3CLR;
extern volatile unsigned int        ADC1BUF3SET;
extern volatile unsigned int        ADC1BUF3INV;
#define ADC1BUF4 ADC1BUF4
extern volatile unsigned int   ADC1BUF4;
extern volatile unsigned int        ADC1BUF4CLR;
extern volatile unsigned int        ADC1BUF4SET;
extern volatile unsigned int        ADC1BUF4INV;
#define ADC1BUF5 ADC1BUF5
extern volatile unsigned int   ADC1BUF5;
extern volatile unsigned int        ADC1BUF5CLR;
extern volatile unsigned int        ADC1BUF5SET;
extern volatile unsigned int        ADC1BUF5INV;
#define ADC1BUF6 ADC1BUF6
extern volatile unsigned int   ADC1BUF6;
extern volatile unsigned int        ADC1BUF6CLR;
extern volatile unsigned int        ADC1BUF6SET;
extern volatile unsigned int        ADC1BUF6INV;
#define ADC1BUF7 ADC1BUF7
extern volatile unsigned int   ADC1BUF7;
extern volatile unsigned int        ADC1BUF7CLR;
extern volatile unsigned int        ADC1BUF7SET;
extern volatile unsigned int        ADC1BUF7INV;
#define ADC1BUF8 ADC1BUF8
extern volatile unsigned int   ADC1BUF8;
extern volatile unsigned int        ADC1BUF8CLR;
extern volatile unsigned int        ADC1BUF8SET;
extern volatile unsigned int        ADC1BUF8INV;
#define ADC1BUF9 ADC1BUF9
extern volatile unsigned int   ADC1BUF9;
extern volatile unsigned int        ADC1BUF9CLR;
extern volatile unsigned int        ADC1BUF9SET;
extern volatile unsigned int        ADC1BUF9INV;
#define ADC1BUF10 ADC1BUF10
extern volatile unsigned int   ADC1BUF10;
extern volatile unsigned int        ADC1BUF10CLR;
extern volatile unsigned int        ADC1BUF10SET;
extern volatile unsigned int        ADC1BUF10INV;
#define ADC1BUF11 ADC1BUF11
extern volatile unsigned int   ADC1BUF11;
extern volatile unsigned int        ADC1BUF11CLR;
extern volatile unsigned int        ADC1BUF11SET;
extern volatile unsigned int        ADC1BUF11INV;
#define ADC1BUF12 ADC1BUF12
extern volatile unsigned int   ADC1BUF12;
extern volatile unsigned int        ADC1BUF12CLR;
extern volatile unsigned int        ADC1BUF12SET;
extern volatile unsigned int        ADC1BUF12INV;
#define ADC1BUF13 ADC1BUF13
extern volatile unsigned int   ADC1BUF13;
extern volatile unsigned int        ADC1BUF13CLR;
extern volatile unsigned int        ADC1BUF13SET;
extern volatile unsigned int        ADC1BUF13INV;
#define ADC1BUF14 ADC1BUF14
extern volatile unsigned int   ADC1BUF14;
extern volatile unsigned int        ADC1BUF14CLR;
extern volatile unsigned int        ADC1BUF14SET;
extern volatile unsigned int        ADC1BUF14INV;
#define ADC1BUF15 ADC1BUF15
extern volatile unsigned int   ADC1BUF15;
extern volatile unsigned int        ADC1BUF15CLR;
extern volatile unsigned int        ADC1BUF15SET;
extern volatile unsigned int        ADC1BUF15INV;
#define ADC1BUF16 ADC1BUF16
extern volatile unsigned int   ADC1BUF16;
extern volatile unsigned int        ADC1BUF16CLR;
extern volatile unsigned int        ADC1BUF16SET;
extern volatile unsigned int        ADC1BUF16INV;
#define ADC1BUF17 ADC1BUF17
extern volatile unsigned int   ADC1BUF17;
extern volatile unsigned int        ADC1BUF17CLR;
extern volatile unsigned int        ADC1BUF17SET;
extern volatile unsigned int        ADC1BUF17INV;
#define ADC1BUF18 ADC1BUF18
extern volatile unsigned int   ADC1BUF18;
extern volatile unsigned int        ADC1BUF18CLR;
extern volatile unsigned int        ADC1BUF18SET;
extern volatile unsigned int        ADC1BUF18INV;
#define ADC1BUF19 ADC1BUF19
extern volatile unsigned int   ADC1BUF19;
extern volatile unsigned int        ADC1BUF19CLR;
extern volatile unsigned int        ADC1BUF19SET;
extern volatile unsigned int        ADC1BUF19INV;
#define ADC1BUF20 ADC1BUF20
extern volatile unsigned int   ADC1BUF20;
extern volatile unsigned int        ADC1BUF20CLR;
extern volatile unsigned int        ADC1BUF20SET;
extern volatile unsigned int        ADC1BUF20INV;
#define ADC1BUF21 ADC1BUF21
extern volatile unsigned int   ADC1BUF21;
extern volatile unsigned int        ADC1BUF21CLR;
extern volatile unsigned int        ADC1BUF21SET;
extern volatile unsigned int        ADC1BUF21INV;
#define AD1CON1 AD1CON1
extern volatile unsigned int   AD1CON1;
typedef struct {
  unsigned DONE:1;
  unsigned SAMP:1;
  unsigned ASAM:1;
  unsigned MODE12:1;
  unsigned SSRC:4;
  unsigned FORM:3;
  unsigned :2;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
} __AD1CON1bits_t;
extern volatile __AD1CON1bits_t AD1CON1bits;
extern volatile unsigned int        AD1CON1CLR;
extern volatile unsigned int        AD1CON1SET;
extern volatile unsigned int        AD1CON1INV;
#define AD1CON2 AD1CON2
extern volatile unsigned int   AD1CON2;
typedef struct {
  unsigned :1;
  unsigned BUFM:1;
  unsigned SMPI:5;
  unsigned BUFS:1;
  unsigned :2;
  unsigned CSCNA:1;
  unsigned BUFREGEN:1;
  unsigned OFFCAL:1;
  unsigned VCFG:3;
} __AD1CON2bits_t;
extern volatile __AD1CON2bits_t AD1CON2bits;
extern volatile unsigned int        AD1CON2CLR;
extern volatile unsigned int        AD1CON2SET;
extern volatile unsigned int        AD1CON2INV;
#define AD1CON3 AD1CON3
extern volatile unsigned int   AD1CON3;
typedef struct {
  unsigned ADCS:8;
  unsigned SAMC:5;
  unsigned :1;
  unsigned EXTSAM:1;
  unsigned ADRC:1;
} __AD1CON3bits_t;
extern volatile __AD1CON3bits_t AD1CON3bits;
extern volatile unsigned int        AD1CON3CLR;
extern volatile unsigned int        AD1CON3SET;
extern volatile unsigned int        AD1CON3INV;
#define AD1CHS AD1CHS
extern volatile unsigned int   AD1CHS;
typedef struct {
  unsigned CH0SA:5;
  unsigned CH0NA:3;
} __AD1CHSbits_t;
extern volatile __AD1CHSbits_t AD1CHSbits;
extern volatile unsigned int        AD1CHSCLR;
extern volatile unsigned int        AD1CHSSET;
extern volatile unsigned int        AD1CHSINV;
#define AD1CSS AD1CSS
extern volatile unsigned int   AD1CSS;
typedef struct {
  unsigned CSS0:1;
  unsigned CSS1:1;
  unsigned CSS2:1;
  unsigned CSS3:1;
  unsigned CSS4:1;
  unsigned CSS5:1;
  unsigned CSS6:1;
  unsigned CSS7:1;
  unsigned CSS8:1;
  unsigned CSS9:1;
  unsigned CSS10:1;
  unsigned CSS11:1;
  unsigned CSS12:1;
  unsigned CSS13:1;
  unsigned CSS14:1;
  unsigned CSS15:1;
  unsigned CSS16:1;
  unsigned CSS17:1;
  unsigned CSS18:1;
  unsigned CSS19:1;
  unsigned CSS20:1;
  unsigned CSS21:1;
  unsigned CSS22:1;
  unsigned CSS23:1;
  unsigned CSS24:1;
  unsigned CSS25:1;
  unsigned CSS26:1;
  unsigned CSS27:1;
  unsigned CSS28:1;
  unsigned CSS29:1;
  unsigned CSS30:1;
  unsigned CSS31:1;
} __AD1CSSbits_t;
extern volatile __AD1CSSbits_t AD1CSSbits;
extern volatile unsigned int        AD1CSSCLR;
extern volatile unsigned int        AD1CSSSET;
extern volatile unsigned int        AD1CSSINV;
#define AD1CON5 AD1CON5
extern volatile unsigned int   AD1CON5;
typedef struct {
  unsigned CM:2;
  unsigned WM:2;
  unsigned :4;
  unsigned ASINT:2;
  unsigned :2;
  unsigned BGREQ:1;
  unsigned :1;
  unsigned LPEN:1;
  unsigned ASEN:1;
} __AD1CON5bits_t;
extern volatile __AD1CON5bits_t AD1CON5bits;
extern volatile unsigned int        AD1CON5CLR;
extern volatile unsigned int        AD1CON5SET;
extern volatile unsigned int        AD1CON5INV;
#define AD1CHIT AD1CHIT
extern volatile unsigned int   AD1CHIT;
typedef struct {
  unsigned CHH0:1;
  unsigned CHH1:1;
  unsigned CHH2:1;
  unsigned CHH3:1;
  unsigned CHH4:1;
  unsigned CHH5:1;
  unsigned CHH6:1;
  unsigned CHH7:1;
  unsigned CHH8:1;
  unsigned CHH9:1;
  unsigned CHH10:1;
  unsigned CHH11:1;
  unsigned CHH12:1;
  unsigned CHH13:1;
  unsigned CHH14:1;
  unsigned CHH15:1;
  unsigned CHH16:1;
  unsigned CHH17:1;
  unsigned CHH18:1;
  unsigned CHH19:1;
} __AD1CHITbits_t;
extern volatile __AD1CHITbits_t AD1CHITbits;
extern volatile unsigned int        AD1CHITCLR;
extern volatile unsigned int        AD1CHITSET;
extern volatile unsigned int        AD1CHITINV;
#define CMSTAT CMSTAT
extern volatile unsigned int   CMSTAT;
typedef struct {
  unsigned C1OUT:1;
  unsigned C2OUT:1;
  unsigned C3OUT:1;
  unsigned :5;
  unsigned CVREFSEL:1;
  unsigned :4;
  unsigned SIDL:1;
  unsigned :2;
  unsigned C1EVT:1;
  unsigned C2EVT:1;
  unsigned C3EVT:1;
} __CMSTATbits_t;
extern volatile __CMSTATbits_t CMSTATbits;
extern volatile unsigned int        CMSTATCLR;
extern volatile unsigned int        CMSTATSET;
extern volatile unsigned int        CMSTATINV;
#define CM1CON CM1CON
extern volatile unsigned int   CM1CON;
typedef struct {
  unsigned CCH:2;
  unsigned :2;
  unsigned CREF:1;
  unsigned :1;
  unsigned EVPOL:2;
  unsigned COUT:1;
  unsigned CEVT:1;
  unsigned :3;
  unsigned CPOL:1;
  unsigned COE:1;
  unsigned ON:1;
} __CM1CONbits_t;
extern volatile __CM1CONbits_t CM1CONbits;
extern volatile unsigned int        CM1CONCLR;
extern volatile unsigned int        CM1CONSET;
extern volatile unsigned int        CM1CONINV;
#define CM2CON CM2CON
extern volatile unsigned int   CM2CON;
typedef struct {
  unsigned CCH:2;
  unsigned :2;
  unsigned CREF:1;
  unsigned :1;
  unsigned EVPOL:2;
  unsigned COUT:1;
  unsigned CEVT:1;
  unsigned :3;
  unsigned CPOL:1;
  unsigned COE:1;
  unsigned ON:1;
} __CM2CONbits_t;
extern volatile __CM2CONbits_t CM2CONbits;
extern volatile unsigned int        CM2CONCLR;
extern volatile unsigned int        CM2CONSET;
extern volatile unsigned int        CM2CONINV;
#define CM3CON CM3CON
extern volatile unsigned int   CM3CON;
typedef struct {
  unsigned CCH:2;
  unsigned :2;
  unsigned CREF:1;
  unsigned :1;
  unsigned EVPOL:2;
  unsigned COUT:1;
  unsigned CEVT:1;
  unsigned :3;
  unsigned CPOL:1;
  unsigned COE:1;
  unsigned ON:1;
} __CM3CONbits_t;
extern volatile __CM3CONbits_t CM3CONbits;
extern volatile unsigned int        CM3CONCLR;
extern volatile unsigned int        CM3CONSET;
extern volatile unsigned int        CM3CONINV;
#define DAC1CON DAC1CON
extern volatile unsigned int   DAC1CON;
typedef struct {
  unsigned REFSEL:2;
  unsigned :6;
  unsigned DACOE:1;
  unsigned :6;
  unsigned ON:1;
  unsigned DACDAT:16;
} __DAC1CONbits_t;
extern volatile __DAC1CONbits_t DAC1CONbits;
extern volatile unsigned int        DAC1CONCLR;
extern volatile unsigned int        DAC1CONSET;
extern volatile unsigned int        DAC1CONINV;
#define CLC1CON CLC1CON
extern volatile unsigned int   CLC1CON;
typedef struct {
  unsigned MODE:3;
  unsigned :2;
  unsigned LCPOL:1;
  unsigned LCOUT:1;
  unsigned LCOE:1;
  unsigned :2;
  unsigned INTN:1;
  unsigned INTP:1;
  unsigned :3;
  unsigned ON:1;
  unsigned G1POL:1;
  unsigned G2POL:1;
  unsigned G3POL:1;
  unsigned G4POL:1;
} __CLC1CONbits_t;
extern volatile __CLC1CONbits_t CLC1CONbits;
extern volatile unsigned int        CLC1CONCLR;
extern volatile unsigned int        CLC1CONSET;
extern volatile unsigned int        CLC1CONINV;
#define CLC1SEL CLC1SEL
extern volatile unsigned int   CLC1SEL;
typedef struct {
  unsigned DS1:3;
  unsigned :1;
  unsigned DS2:3;
  unsigned :1;
  unsigned DS3:3;
  unsigned :1;
  unsigned DS4:3;
} __CLC1SELbits_t;
extern volatile __CLC1SELbits_t CLC1SELbits;
extern volatile unsigned int        CLC1SELCLR;
extern volatile unsigned int        CLC1SELSET;
extern volatile unsigned int        CLC1SELINV;
#define CLC1GLS CLC1GLS
extern volatile unsigned int   CLC1GLS;
typedef struct {
  unsigned G1D1N:1;
  unsigned G1D1T:1;
  unsigned G1D2N:1;
  unsigned G1D2T:1;
  unsigned G1D3N:1;
  unsigned G1D3T:1;
  unsigned G1D4N:1;
  unsigned G1D4T:1;
  unsigned G2D1N:1;
  unsigned G2D1T:1;
  unsigned G2D2N:1;
  unsigned G2D2T:1;
  unsigned G2D3N:1;
  unsigned G2D3T:1;
  unsigned G2D4N:1;
  unsigned G2D4T:1;
  unsigned G3D1N:1;
  unsigned G3D1T:1;
  unsigned G3D2N:1;
  unsigned G3D2T:1;
  unsigned G3D3N:1;
  unsigned G3D3T:1;
  unsigned G3D4N:1;
  unsigned G3D4T:1;
  unsigned G4D1N:1;
  unsigned G4D1T:1;
  unsigned G4D2N:1;
  unsigned G4D2T:1;
  unsigned G4D3N:1;
  unsigned G4D3T:1;
  unsigned G4D4N:1;
  unsigned G4D4T:1;
} __CLC1GLSbits_t;
extern volatile __CLC1GLSbits_t CLC1GLSbits;
extern volatile unsigned int        CLC1GLSCLR;
extern volatile unsigned int        CLC1GLSSET;
extern volatile unsigned int        CLC1GLSINV;
#define CLC2CON CLC2CON
extern volatile unsigned int   CLC2CON;
typedef struct {
  unsigned MODE:3;
  unsigned :2;
  unsigned LCPOL:1;
  unsigned LCOUT:1;
  unsigned LCOE:1;
  unsigned :2;
  unsigned INTN:1;
  unsigned INTP:1;
  unsigned :3;
  unsigned ON:1;
  unsigned G1POL:1;
  unsigned G2POL:1;
  unsigned G3POL:1;
  unsigned G4POL:1;
} __CLC2CONbits_t;
extern volatile __CLC2CONbits_t CLC2CONbits;
extern volatile unsigned int        CLC2CONCLR;
extern volatile unsigned int        CLC2CONSET;
extern volatile unsigned int        CLC2CONINV;
#define CLC2SEL CLC2SEL
extern volatile unsigned int   CLC2SEL;
typedef struct {
  unsigned DS1:3;
  unsigned :1;
  unsigned DS2:3;
  unsigned :1;
  unsigned DS3:3;
  unsigned :1;
  unsigned DS4:3;
} __CLC2SELbits_t;
extern volatile __CLC2SELbits_t CLC2SELbits;
extern volatile unsigned int        CLC2SELCLR;
extern volatile unsigned int        CLC2SELSET;
extern volatile unsigned int        CLC2SELINV;
#define CLC2GLS CLC2GLS
extern volatile unsigned int   CLC2GLS;
typedef struct {
  unsigned G1D1N:1;
  unsigned G1D1T:1;
  unsigned G1D2N:1;
  unsigned G1D2T:1;
  unsigned G1D3N:1;
  unsigned G1D3T:1;
  unsigned G1D4N:1;
  unsigned G1D4T:1;
  unsigned G2D1N:1;
  unsigned G2D1T:1;
  unsigned G2D2N:1;
  unsigned G2D2T:1;
  unsigned G2D3N:1;
  unsigned G2D3T:1;
  unsigned G2D4N:1;
  unsigned G2D4T:1;
  unsigned G3D1N:1;
  unsigned G3D1T:1;
  unsigned G3D2N:1;
  unsigned G3D2T:1;
  unsigned G3D3N:1;
  unsigned G3D3T:1;
  unsigned G3D4N:1;
  unsigned G3D4T:1;
  unsigned G4D1N:1;
  unsigned G4D1T:1;
  unsigned G4D2N:1;
  unsigned G4D2T:1;
  unsigned G4D3N:1;
  unsigned G4D3T:1;
  unsigned G4D4N:1;
  unsigned G4D4T:1;
} __CLC2GLSbits_t;
extern volatile __CLC2GLSbits_t CLC2GLSbits;
extern volatile unsigned int        CLC2GLSCLR;
extern volatile unsigned int        CLC2GLSSET;
extern volatile unsigned int        CLC2GLSINV;
#define CLC3CON CLC3CON
extern volatile unsigned int   CLC3CON;
typedef struct {
  unsigned MODE:3;
  unsigned :2;
  unsigned LCPOL:1;
  unsigned LCOUT:1;
  unsigned LCOE:1;
  unsigned :2;
  unsigned INTN:1;
  unsigned INTP:1;
  unsigned :3;
  unsigned ON:1;
  unsigned G1POL:1;
  unsigned G2POL:1;
  unsigned G3POL:1;
  unsigned G4POL:1;
} __CLC3CONbits_t;
extern volatile __CLC3CONbits_t CLC3CONbits;
extern volatile unsigned int        CLC3CONCLR;
extern volatile unsigned int        CLC3CONSET;
extern volatile unsigned int        CLC3CONINV;
#define CLC3SEL CLC3SEL
extern volatile unsigned int   CLC3SEL;
typedef struct {
  unsigned DS1:3;
  unsigned :1;
  unsigned DS2:3;
  unsigned :1;
  unsigned DS3:3;
  unsigned :1;
  unsigned DS4:3;
} __CLC3SELbits_t;
extern volatile __CLC3SELbits_t CLC3SELbits;
extern volatile unsigned int        CLC3SELCLR;
extern volatile unsigned int        CLC3SELSET;
extern volatile unsigned int        CLC3SELINV;
#define CLC3GLS CLC3GLS
extern volatile unsigned int   CLC3GLS;
typedef struct {
  unsigned G1D1N:1;
  unsigned G1D1T:1;
  unsigned G1D2N:1;
  unsigned G1D2T:1;
  unsigned G1D3N:1;
  unsigned G1D3T:1;
  unsigned G1D4N:1;
  unsigned G1D4T:1;
  unsigned G2D1N:1;
  unsigned G2D1T:1;
  unsigned G2D2N:1;
  unsigned G2D2T:1;
  unsigned G2D3N:1;
  unsigned G2D3T:1;
  unsigned G2D4N:1;
  unsigned G2D4T:1;
  unsigned G3D1N:1;
  unsigned G3D1T:1;
  unsigned G3D2N:1;
  unsigned G3D2T:1;
  unsigned G3D3N:1;
  unsigned G3D3T:1;
  unsigned G3D4N:1;
  unsigned G3D4T:1;
  unsigned G4D1N:1;
  unsigned G4D1T:1;
  unsigned G4D2N:1;
  unsigned G4D2T:1;
  unsigned G4D3N:1;
  unsigned G4D3T:1;
  unsigned G4D4N:1;
  unsigned G4D4T:1;
} __CLC3GLSbits_t;
extern volatile __CLC3GLSbits_t CLC3GLSbits;
extern volatile unsigned int        CLC3GLSCLR;
extern volatile unsigned int        CLC3GLSSET;
extern volatile unsigned int        CLC3GLSINV;
#define CLC4CON CLC4CON
extern volatile unsigned int   CLC4CON;
typedef struct {
  unsigned MODE:3;
  unsigned :2;
  unsigned LCPOL:1;
  unsigned LCOUT:1;
  unsigned LCOE:1;
  unsigned :2;
  unsigned INTN:1;
  unsigned INTP:1;
  unsigned :3;
  unsigned ON:1;
  unsigned G1POL:1;
  unsigned G2POL:1;
  unsigned G3POL:1;
  unsigned G4POL:1;
} __CLC4CONbits_t;
extern volatile __CLC4CONbits_t CLC4CONbits;
extern volatile unsigned int        CLC4CONCLR;
extern volatile unsigned int        CLC4CONSET;
extern volatile unsigned int        CLC4CONINV;
#define CLC4SEL CLC4SEL
extern volatile unsigned int   CLC4SEL;
typedef struct {
  unsigned DS1:3;
  unsigned :1;
  unsigned DS2:3;
  unsigned :1;
  unsigned DS3:3;
  unsigned :1;
  unsigned DS4:3;
} __CLC4SELbits_t;
extern volatile __CLC4SELbits_t CLC4SELbits;
extern volatile unsigned int        CLC4SELCLR;
extern volatile unsigned int        CLC4SELSET;
extern volatile unsigned int        CLC4SELINV;
#define CLC4GLS CLC4GLS
extern volatile unsigned int   CLC4GLS;
typedef struct {
  unsigned G1D1N:1;
  unsigned G1D1T:1;
  unsigned G1D2N:1;
  unsigned G1D2T:1;
  unsigned G1D3N:1;
  unsigned G1D3T:1;
  unsigned G1D4N:1;
  unsigned G1D4T:1;
  unsigned G2D1N:1;
  unsigned G2D1T:1;
  unsigned G2D2N:1;
  unsigned G2D2T:1;
  unsigned G2D3N:1;
  unsigned G2D3T:1;
  unsigned G2D4N:1;
  unsigned G2D4T:1;
  unsigned G3D1N:1;
  unsigned G3D1T:1;
  unsigned G3D2N:1;
  unsigned G3D2T:1;
  unsigned G3D3N:1;
  unsigned G3D3T:1;
  unsigned G3D4N:1;
  unsigned G3D4T:1;
  unsigned G4D1N:1;
  unsigned G4D1T:1;
  unsigned G4D2N:1;
  unsigned G4D2T:1;
  unsigned G4D3N:1;
  unsigned G4D3T:1;
  unsigned G4D4N:1;
  unsigned G4D4T:1;
} __CLC4GLSbits_t;
extern volatile __CLC4GLSbits_t CLC4GLSbits;
extern volatile unsigned int        CLC4GLSCLR;
extern volatile unsigned int        CLC4GLSSET;
extern volatile unsigned int        CLC4GLSINV;
#define OSCCON OSCCON
extern volatile unsigned int   OSCCON;
typedef struct {
  unsigned OSWEN:1;
  unsigned SOSCEN:1;
  unsigned :1;
  unsigned CF:1;
  unsigned SLPEN:1;
  unsigned :2;
  unsigned CLKLOCK:1;
  unsigned NOSC:3;
  unsigned :1;
  unsigned COSC:3;
  unsigned :6;
  unsigned SLP2SPD:1;
  unsigned :1;
  unsigned DRMEN:1;
  unsigned FRCDIV:3;
} __OSCCONbits_t;
extern volatile __OSCCONbits_t OSCCONbits;
extern volatile unsigned int        OSCCONCLR;
extern volatile unsigned int        OSCCONSET;
extern volatile unsigned int        OSCCONINV;
#define SPLLCON SPLLCON
extern volatile unsigned int   SPLLCON;
typedef struct {
  unsigned :7;
  unsigned PLLICLK:1;
  unsigned :8;
  unsigned PLLMULT:7;
  unsigned :1;
  unsigned PLLODIV:3;
} __SPLLCONbits_t;
extern volatile __SPLLCONbits_t SPLLCONbits;
extern volatile unsigned int        SPLLCONCLR;
extern volatile unsigned int        SPLLCONSET;
extern volatile unsigned int        SPLLCONINV;
#define RCON RCON
extern volatile unsigned int   RCON;
typedef struct {
  unsigned POR:1;
  unsigned BOR:1;
  unsigned IDLE:1;
  unsigned SLEEP:1;
  unsigned WDTO:1;
  unsigned :1;
  unsigned SWR:1;
  unsigned EXTR:1;
  unsigned :1;
  unsigned CMR:1;
  unsigned :16;
  unsigned BCFGFAIL:1;
  unsigned BCFGERR:1;
  unsigned :2;
  unsigned PORCORE:1;
  unsigned PORIO:1;
} __RCONbits_t;
extern volatile __RCONbits_t RCONbits;
extern volatile unsigned int        RCONCLR;
extern volatile unsigned int        RCONSET;
extern volatile unsigned int        RCONINV;
#define RSWRST RSWRST
extern volatile unsigned int   RSWRST;
typedef struct {
  unsigned SWRST:1;
} __RSWRSTbits_t;
extern volatile __RSWRSTbits_t RSWRSTbits;
extern volatile unsigned int        RSWRSTCLR;
extern volatile unsigned int        RSWRSTSET;
extern volatile unsigned int        RSWRSTINV;
#define RNMICON RNMICON
extern volatile unsigned int   RNMICON;
typedef union {
  struct {
    unsigned NMICNT:16;
    unsigned WDTS:1;
    unsigned CF:1;
    unsigned LVD:1;
    unsigned GNMI:1;
    unsigned :3;
    unsigned SWNMI:1;
    unsigned WDTO:1;
  };
  struct {
    unsigned :24;
    unsigned WDTR:1;
  };
} __RNMICONbits_t;
extern volatile __RNMICONbits_t RNMICONbits;
extern volatile unsigned int        RNMICONCLR;
extern volatile unsigned int        RNMICONSET;
extern volatile unsigned int        RNMICONINV;
#define PWRCON PWRCON
extern volatile unsigned int   PWRCON;
typedef struct {
  unsigned VREGS:1;
  unsigned RETEN:1;
  unsigned SBOREN:1;
} __PWRCONbits_t;
extern volatile __PWRCONbits_t PWRCONbits;
extern volatile unsigned int        PWRCONCLR;
extern volatile unsigned int        PWRCONSET;
extern volatile unsigned int        PWRCONINV;
#define REFO1CON REFO1CON
extern volatile unsigned int   REFO1CON;
typedef struct {
  unsigned ROSEL:4;
  unsigned :4;
  unsigned ACTIVE:1;
  unsigned DIVSWEN:1;
  unsigned :1;
  unsigned RSLP:1;
  unsigned OE:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
  unsigned RODIV:15;
} __REFO1CONbits_t;
extern volatile __REFO1CONbits_t REFO1CONbits;
extern volatile unsigned int        REFO1CONCLR;
extern volatile unsigned int        REFO1CONSET;
extern volatile unsigned int        REFO1CONINV;
#define REFO1TRIM REFO1TRIM
extern volatile unsigned int   REFO1TRIM;
typedef struct {
  unsigned :23;
  unsigned ROTRIM:9;
} __REFO1TRIMbits_t;
extern volatile __REFO1TRIMbits_t REFO1TRIMbits;
extern volatile unsigned int        REFO1TRIMCLR;
extern volatile unsigned int        REFO1TRIMSET;
extern volatile unsigned int        REFO1TRIMINV;
#define CLKSTAT CLKSTAT
extern volatile unsigned int   CLKSTAT;
typedef union {
  struct {
    unsigned FRCRDY:1;
    unsigned SPDIVRDY:1;
    unsigned POSCRDY:1;
    unsigned :1;
    unsigned SOSCRDY:1;
    unsigned LPRCRDY:1;
    unsigned :1;
    unsigned SPLLRDY:1;
  };
  struct {
    unsigned :1;
    unsigned DIVSPLLRDY:1;
  };
} __CLKSTATbits_t;
extern volatile __CLKSTATbits_t CLKSTATbits;
extern volatile unsigned int        CLKSTATCLR;
extern volatile unsigned int        CLKSTATSET;
extern volatile unsigned int        CLKSTATINV;
#define OSCTUN OSCTUN
extern volatile unsigned int   OSCTUN;
typedef struct {
  unsigned TUN:6;
  unsigned :2;
  unsigned ORPOL:1;
  unsigned OR:1;
  unsigned POL:1;
  unsigned LOCK:1;
  unsigned SRC:1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
} __OSCTUNbits_t;
extern volatile __OSCTUNbits_t OSCTUNbits;
extern volatile unsigned int        OSCTUNCLR;
extern volatile unsigned int        OSCTUNSET;
extern volatile unsigned int        OSCTUNINV;
#define ANCFG ANCFG
extern volatile unsigned int   ANCFG;
typedef union {
  struct {
    unsigned :1;
    unsigned BGCMP:1;
    unsigned BGADC:1;
  };
  struct {
    unsigned :1;
    unsigned VBGCMP:1;
    unsigned VBGADC:1;
  };
} __ANCFGbits_t;
extern volatile __ANCFGbits_t ANCFGbits;
extern volatile unsigned int        ANCFGCLR;
extern volatile unsigned int        ANCFGSET;
extern volatile unsigned int        ANCFGINV;
#define HLVDCON HLVDCON
extern volatile unsigned int   HLVDCON;
typedef struct {
  unsigned HLVDL:4;
  unsigned :4;
  unsigned HLEVT:1;
  unsigned IRVST:1;
  unsigned BGVST:1;
  unsigned VDIR:1;
  unsigned :1;
  unsigned SIDL:1;
  unsigned :1;
  unsigned ON:1;
} __HLVDCONbits_t;
extern volatile __HLVDCONbits_t HLVDCONbits;
extern volatile unsigned int        HLVDCONCLR;
extern volatile unsigned int        HLVDCONSET;
extern volatile unsigned int        HLVDCONINV;
#define NVMCON NVMCON
extern volatile unsigned int   NVMCON;
typedef struct {
  unsigned NVMOP:4;
  unsigned :8;
  unsigned LVDERR:1;
  unsigned WRERR:1;
  unsigned WREN:1;
  unsigned WR:1;
} __NVMCONbits_t;
extern volatile __NVMCONbits_t NVMCONbits;
extern volatile unsigned int        NVMCONCLR;
extern volatile unsigned int        NVMCONSET;
extern volatile unsigned int        NVMCONINV;
#define NVMKEY NVMKEY
extern volatile unsigned int   NVMKEY;
typedef struct {
  unsigned NVMKEY:32;
} __NVMKEYbits_t;
extern volatile __NVMKEYbits_t NVMKEYbits;
extern volatile unsigned int        NVMKEYCLR;
extern volatile unsigned int        NVMKEYSET;
extern volatile unsigned int        NVMKEYINV;
#define NVMADDR NVMADDR
extern volatile unsigned int   NVMADDR;
typedef struct {
  unsigned NVMADDR:32;
} __NVMADDRbits_t;
extern volatile __NVMADDRbits_t NVMADDRbits;
extern volatile unsigned int        NVMADDRCLR;
extern volatile unsigned int        NVMADDRSET;
extern volatile unsigned int        NVMADDRINV;
#define NVMDATA0 NVMDATA0
extern volatile unsigned int   NVMDATA0;
typedef struct {
  unsigned NVMDATA0:32;
} __NVMDATA0bits_t;
extern volatile __NVMDATA0bits_t NVMDATA0bits;
extern volatile unsigned int        NVMDATA0CLR;
extern volatile unsigned int        NVMDATA0SET;
extern volatile unsigned int        NVMDATA0INV;
#define NVMDATA1 NVMDATA1
extern volatile unsigned int   NVMDATA1;
typedef struct {
  unsigned NVMDATA1:32;
} __NVMDATA1bits_t;
extern volatile __NVMDATA1bits_t NVMDATA1bits;
extern volatile unsigned int        NVMDATA1CLR;
extern volatile unsigned int        NVMDATA1SET;
extern volatile unsigned int        NVMDATA1INV;
#define NVMSRCADDR NVMSRCADDR
extern volatile unsigned int   NVMSRCADDR;
typedef struct {
  unsigned NVMSRCADDR:32;
} __NVMSRCADDRbits_t;
extern volatile __NVMSRCADDRbits_t NVMSRCADDRbits;
extern volatile unsigned int        NVMSRCADDRCLR;
extern volatile unsigned int        NVMSRCADDRSET;
extern volatile unsigned int        NVMSRCADDRINV;
#define NVMPWP NVMPWP
extern volatile unsigned int   NVMPWP;
typedef struct {
  unsigned PWP:24;
  unsigned :7;
  unsigned PWPULOCK:1;
} __NVMPWPbits_t;
extern volatile __NVMPWPbits_t NVMPWPbits;
extern volatile unsigned int        NVMPWPCLR;
extern volatile unsigned int        NVMPWPSET;
extern volatile unsigned int        NVMPWPINV;
#define NVMBWP NVMBWP
extern volatile unsigned int   NVMBWP;
typedef struct {
  unsigned :8;
  unsigned BWP0:1;
  unsigned BWP1:1;
  unsigned BWP2:1;
  unsigned :4;
  unsigned BWPULOCK:1;
} __NVMBWPbits_t;
extern volatile __NVMBWPbits_t NVMBWPbits;
extern volatile unsigned int        NVMBWPCLR;
extern volatile unsigned int        NVMBWPSET;
extern volatile unsigned int        NVMBWPINV;
#define RPCON RPCON
extern volatile unsigned int   RPCON;
typedef struct {
  unsigned :11;
  unsigned IOLOCK:1;
} __RPCONbits_t;
extern volatile __RPCONbits_t RPCONbits;
extern volatile unsigned int        RPCONCLR;
extern volatile unsigned int        RPCONSET;
extern volatile unsigned int        RPCONINV;
#define RPINR1 RPINR1
extern volatile unsigned int   RPINR1;
typedef struct {
  unsigned INT4R:5;
} __RPINR1bits_t;
extern volatile __RPINR1bits_t RPINR1bits;
extern volatile unsigned int        RPINR1CLR;
extern volatile unsigned int        RPINR1SET;
extern volatile unsigned int        RPINR1INV;
#define RPINR2 RPINR2
extern volatile unsigned int   RPINR2;
typedef struct {
  unsigned :16;
  unsigned ICM1R:5;
  unsigned :3;
  unsigned ICM2R:5;
} __RPINR2bits_t;
extern volatile __RPINR2bits_t RPINR2bits;
extern volatile unsigned int        RPINR2CLR;
extern volatile unsigned int        RPINR2SET;
extern volatile unsigned int        RPINR2INV;
#define RPINR3 RPINR3
extern volatile unsigned int   RPINR3;
typedef struct {
  unsigned ICM3R:5;
  unsigned :3;
  unsigned ICM4R:5;
} __RPINR3bits_t;
extern volatile __RPINR3bits_t RPINR3bits;
extern volatile unsigned int        RPINR3CLR;
extern volatile unsigned int        RPINR3SET;
extern volatile unsigned int        RPINR3INV;
#define RPINR5 RPINR5
extern volatile unsigned int   RPINR5;
typedef struct {
  unsigned :16;
  unsigned OCFAR:5;
  unsigned :3;
  unsigned OCFBR:5;
} __RPINR5bits_t;
extern volatile __RPINR5bits_t RPINR5bits;
extern volatile unsigned int        RPINR5CLR;
extern volatile unsigned int        RPINR5SET;
extern volatile unsigned int        RPINR5INV;
#define RPINR6 RPINR6
extern volatile unsigned int   RPINR6;
typedef struct {
  unsigned TCKIAR:5;
  unsigned :3;
  unsigned TCKIBR:5;
} __RPINR6bits_t;
extern volatile __RPINR6bits_t RPINR6bits;
extern volatile unsigned int        RPINR6CLR;
extern volatile unsigned int        RPINR6SET;
extern volatile unsigned int        RPINR6INV;
#define RPINR7 RPINR7
extern volatile unsigned int   RPINR7;
typedef struct {
  unsigned ICM5R:5;
  unsigned :3;
  unsigned ICM6R:5;
  unsigned :3;
  unsigned ICM7R:5;
  unsigned :3;
  unsigned ICM8R:5;
} __RPINR7bits_t;
extern volatile __RPINR7bits_t RPINR7bits;
extern volatile unsigned int        RPINR7CLR;
extern volatile unsigned int        RPINR7SET;
extern volatile unsigned int        RPINR7INV;
#define RPINR8 RPINR8
extern volatile unsigned int   RPINR8;
typedef struct {
  unsigned ICM9R:5;
  unsigned :19;
  unsigned U3RXR:5;
} __RPINR8bits_t;
extern volatile __RPINR8bits_t RPINR8bits;
extern volatile unsigned int        RPINR8CLR;
extern volatile unsigned int        RPINR8SET;
extern volatile unsigned int        RPINR8INV;
#define RPINR9 RPINR9
extern volatile unsigned int   RPINR9;
typedef struct {
  unsigned :16;
  unsigned U2RXR:5;
  unsigned :3;
  unsigned U2CTSR:5;
} __RPINR9bits_t;
extern volatile __RPINR9bits_t RPINR9bits;
extern volatile unsigned int        RPINR9CLR;
extern volatile unsigned int        RPINR9SET;
extern volatile unsigned int        RPINR9INV;
#define RPINR10 RPINR10
extern volatile unsigned int   RPINR10;
typedef struct {
  unsigned :24;
  unsigned U3CTSR:5;
} __RPINR10bits_t;
extern volatile __RPINR10bits_t RPINR10bits;
extern volatile unsigned int        RPINR10CLR;
extern volatile unsigned int        RPINR10SET;
extern volatile unsigned int        RPINR10INV;
#define RPINR11 RPINR11
extern volatile unsigned int   RPINR11;
typedef struct {
  unsigned SDI2R:5;
  unsigned :3;
  unsigned SCK2INR:5;
  unsigned :3;
  unsigned SS2INR:5;
} __RPINR11bits_t;
extern volatile __RPINR11bits_t RPINR11bits;
extern volatile unsigned int        RPINR11CLR;
extern volatile unsigned int        RPINR11SET;
extern volatile unsigned int        RPINR11INV;
#define RPINR12 RPINR12
extern volatile unsigned int   RPINR12;
typedef struct {
  unsigned :16;
  unsigned CLCINAR:5;
  unsigned :3;
  unsigned CLCINBR:5;
} __RPINR12bits_t;
extern volatile __RPINR12bits_t RPINR12bits;
extern volatile unsigned int        RPINR12CLR;
extern volatile unsigned int        RPINR12SET;
extern volatile unsigned int        RPINR12INV;
#define RPOR0 RPOR0
extern volatile unsigned int   RPOR0;
typedef struct {
  unsigned RP1R:5;
  unsigned :3;
  unsigned RP2R:5;
  unsigned :3;
  unsigned RP3R:5;
  unsigned :3;
  unsigned RP4R:5;
} __RPOR0bits_t;
extern volatile __RPOR0bits_t RPOR0bits;
extern volatile unsigned int        RPOR0CLR;
extern volatile unsigned int        RPOR0SET;
extern volatile unsigned int        RPOR0INV;
#define RPOR1 RPOR1
extern volatile unsigned int   RPOR1;
typedef struct {
  unsigned RP5R:5;
  unsigned :3;
  unsigned RP6R:5;
  unsigned :3;
  unsigned RP7R:5;
  unsigned :3;
  unsigned RP8R:5;
} __RPOR1bits_t;
extern volatile __RPOR1bits_t RPOR1bits;
extern volatile unsigned int        RPOR1CLR;
extern volatile unsigned int        RPOR1SET;
extern volatile unsigned int        RPOR1INV;
#define RPOR2 RPOR2
extern volatile unsigned int   RPOR2;
typedef struct {
  unsigned RP9R:5;
  unsigned :3;
  unsigned RP10R:5;
  unsigned :3;
  unsigned RP11R:5;
  unsigned :3;
  unsigned RP12R:5;
} __RPOR2bits_t;
extern volatile __RPOR2bits_t RPOR2bits;
extern volatile unsigned int        RPOR2CLR;
extern volatile unsigned int        RPOR2SET;
extern volatile unsigned int        RPOR2INV;
#define RPOR3 RPOR3
extern volatile unsigned int   RPOR3;
typedef struct {
  unsigned RP13R:5;
  unsigned :3;
  unsigned RP14R:5;
  unsigned :3;
  unsigned RP15R:5;
  unsigned :3;
  unsigned RP16R:5;
} __RPOR3bits_t;
extern volatile __RPOR3bits_t RPOR3bits;
extern volatile unsigned int        RPOR3CLR;
extern volatile unsigned int        RPOR3SET;
extern volatile unsigned int        RPOR3INV;
#define RPOR4 RPOR4
extern volatile unsigned int   RPOR4;
typedef struct {
  unsigned RP17R:5;
  unsigned :3;
  unsigned RP18R:5;
  unsigned :3;
  unsigned RP19R:5;
  unsigned :3;
  unsigned RP20R:5;
} __RPOR4bits_t;
extern volatile __RPOR4bits_t RPOR4bits;
extern volatile unsigned int        RPOR4CLR;
extern volatile unsigned int        RPOR4SET;
extern volatile unsigned int        RPOR4INV;
#define RPOR5 RPOR5
extern volatile unsigned int   RPOR5;
typedef struct {
  unsigned RP21R:5;
  unsigned :3;
  unsigned RP22R:5;
  unsigned :3;
  unsigned RP23R:5;
  unsigned :3;
  unsigned RP24R:5;
} __RPOR5bits_t;
extern volatile __RPOR5bits_t RPOR5bits;
extern volatile unsigned int        RPOR5CLR;
extern volatile unsigned int        RPOR5SET;
extern volatile unsigned int        RPOR5INV;
#define ANSELA ANSELA
extern volatile unsigned int   ANSELA;
typedef struct {
  unsigned ANSA0:1;
  unsigned ANSA1:1;
  unsigned ANSA2:1;
  unsigned ANSA3:1;
  unsigned :2;
  unsigned ANSA6:1;
  unsigned :4;
  unsigned ANSA11:1;
  unsigned ANSA12:1;
  unsigned ANSA13:1;
} __ANSELAbits_t;
extern volatile __ANSELAbits_t ANSELAbits;
extern volatile unsigned int        ANSELACLR;
extern volatile unsigned int        ANSELASET;
extern volatile unsigned int        ANSELAINV;
#define TRISA TRISA
extern volatile unsigned int   TRISA;
typedef union {
  struct {
    unsigned TRISA0:1;
    unsigned TRISA1:1;
    unsigned TRISA2:1;
    unsigned TRISA3:1;
    unsigned TRISA4:1;
    unsigned TRISA5:1;
    unsigned TRISA6:1;
    unsigned TRISA7:1;
    unsigned TRISA8:1;
    unsigned TRISA9:1;
    unsigned TRISA10:1;
    unsigned TRISA11:1;
    unsigned TRISA12:1;
    unsigned TRISA13:1;
    unsigned TRISA14:1;
    unsigned TRISA15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISAbits_t;
extern volatile __TRISAbits_t TRISAbits;
extern volatile unsigned int        TRISACLR;
extern volatile unsigned int        TRISASET;
extern volatile unsigned int        TRISAINV;
#define PORTA PORTA
extern volatile unsigned int   PORTA;
typedef union {
  struct {
    unsigned RA0:1;
    unsigned RA1:1;
    unsigned RA2:1;
    unsigned RA3:1;
    unsigned RA4:1;
    unsigned RA5:1;
    unsigned RA6:1;
    unsigned RA7:1;
    unsigned RA8:1;
    unsigned RA9:1;
    unsigned RA10:1;
    unsigned RA11:1;
    unsigned RA12:1;
    unsigned RA13:1;
    unsigned RA14:1;
    unsigned RA15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTAbits_t;
extern volatile __PORTAbits_t PORTAbits;
extern volatile unsigned int        PORTACLR;
extern volatile unsigned int        PORTASET;
extern volatile unsigned int        PORTAINV;
#define LATA LATA
extern volatile unsigned int   LATA;
typedef union {
  struct {
    unsigned LATA0:1;
    unsigned LATA1:1;
    unsigned LATA2:1;
    unsigned LATA3:1;
    unsigned LATA4:1;
    unsigned LATA5:1;
    unsigned LATA6:1;
    unsigned LATA7:1;
    unsigned LATA8:1;
    unsigned LATA9:1;
    unsigned LATA10:1;
    unsigned LATA11:1;
    unsigned LATA12:1;
    unsigned LATA13:1;
    unsigned LATA14:1;
    unsigned LATA15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATAbits_t;
extern volatile __LATAbits_t LATAbits;
extern volatile unsigned int        LATACLR;
extern volatile unsigned int        LATASET;
extern volatile unsigned int        LATAINV;
#define ODCA ODCA
extern volatile unsigned int   ODCA;
typedef union {
  struct {
    unsigned ODCA0:1;
    unsigned ODCA1:1;
    unsigned ODCA2:1;
    unsigned ODCA3:1;
    unsigned ODCA4:1;
    unsigned ODCA5:1;
    unsigned ODCA6:1;
    unsigned ODCA7:1;
    unsigned ODCA8:1;
    unsigned ODCA9:1;
    unsigned ODCA10:1;
    unsigned ODCA11:1;
    unsigned ODCA12:1;
    unsigned ODCA13:1;
    unsigned ODCA14:1;
    unsigned ODCA15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCAbits_t;
extern volatile __ODCAbits_t ODCAbits;
extern volatile unsigned int        ODCACLR;
extern volatile unsigned int        ODCASET;
extern volatile unsigned int        ODCAINV;
#define CNPUA CNPUA
extern volatile unsigned int   CNPUA;
typedef union {
  struct {
    unsigned CNPUA0:1;
    unsigned CNPUA1:1;
    unsigned CNPUA2:1;
    unsigned CNPUA3:1;
    unsigned CNPUA4:1;
    unsigned CNPUA5:1;
    unsigned CNPUA6:1;
    unsigned CNPUA7:1;
    unsigned CNPUA8:1;
    unsigned CNPUA9:1;
    unsigned CNPUA10:1;
    unsigned CNPUA11:1;
    unsigned CNPUA12:1;
    unsigned CNPUA13:1;
    unsigned CNPUA14:1;
    unsigned CNPUA15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUAbits_t;
extern volatile __CNPUAbits_t CNPUAbits;
extern volatile unsigned int        CNPUACLR;
extern volatile unsigned int        CNPUASET;
extern volatile unsigned int        CNPUAINV;
#define CNPDA CNPDA
extern volatile unsigned int   CNPDA;
typedef union {
  struct {
    unsigned CNPDA0:1;
    unsigned CNPDA1:1;
    unsigned CNPDA2:1;
    unsigned CNPDA3:1;
    unsigned CNPDA4:1;
    unsigned CNPDA5:1;
    unsigned CNPDA6:1;
    unsigned CNPDA7:1;
    unsigned CNPDA8:1;
    unsigned CNPD9:1;
    unsigned CNPDA10:1;
    unsigned CNPDA11:1;
    unsigned CNPDA12:1;
    unsigned CNPDA13:1;
    unsigned CNPDA14:1;
    unsigned CNPDA15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDAbits_t;
extern volatile __CNPDAbits_t CNPDAbits;
extern volatile unsigned int        CNPDACLR;
extern volatile unsigned int        CNPDASET;
extern volatile unsigned int        CNPDAINV;
#define CNCONA CNCONA
extern volatile unsigned int   CNCONA;
typedef union {
  struct {
    unsigned :10;
    unsigned PORT32:1;
    unsigned CNSTYLE:1;
    unsigned :3;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONAbits_t;
extern volatile __CNCONAbits_t CNCONAbits;
extern volatile unsigned int        CNCONACLR;
extern volatile unsigned int        CNCONASET;
extern volatile unsigned int        CNCONAINV;
#define CNEN0A CNEN0A
extern volatile unsigned int   CNEN0A;
typedef union {
  struct {
    unsigned CNIE0A0:1;
    unsigned CNIE0A1:1;
    unsigned CNIE0A2:1;
    unsigned CNIE0A3:1;
    unsigned CNIE0A4:1;
    unsigned CNIE0A5:1;
    unsigned CNIE0A6:1;
    unsigned CNIE0A7:1;
    unsigned CNIE0A8:1;
    unsigned CNIE0A9:1;
    unsigned CNIE0A10:1;
    unsigned CNIE0A11:1;
    unsigned CNIE0A12:1;
    unsigned CNIE0A13:1;
    unsigned CNIE0A14:1;
    unsigned CNIE0A15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN0Abits_t;
extern volatile __CNEN0Abits_t CNEN0Abits;
extern volatile unsigned int        CNEN0ACLR;
extern volatile unsigned int        CNEN0ASET;
extern volatile unsigned int        CNEN0AINV;
#define CNSTATA CNSTATA
extern volatile unsigned int   CNSTATA;
typedef union {
  struct {
    unsigned CNSTATA0:1;
    unsigned CNSTATA1:1;
    unsigned CNSTATA2:1;
    unsigned CNSTATA3:1;
    unsigned CNSTATA4:1;
    unsigned CNSTATA5:1;
    unsigned CNSTATA6:1;
    unsigned CNSTATA7:1;
    unsigned CNSTATA8:1;
    unsigned CNSTATA9:1;
    unsigned CNSTATA10:1;
    unsigned CNSTATA11:1;
    unsigned CNSTATA12:1;
    unsigned CNSTATA13:1;
    unsigned CNSTATA14:1;
    unsigned CNSTATA15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATAbits_t;
extern volatile __CNSTATAbits_t CNSTATAbits;
extern volatile unsigned int        CNSTATACLR;
extern volatile unsigned int        CNSTATASET;
extern volatile unsigned int        CNSTATAINV;
#define CNEN1A CNEN1A
extern volatile unsigned int   CNEN1A;
typedef union {
  struct {
    unsigned CNIE1A0:1;
    unsigned CNIE1A1:1;
    unsigned CNIE1A2:1;
    unsigned CNIE1A3:1;
    unsigned CNIE1A4:1;
    unsigned CNIE1A5:1;
    unsigned CNIE1A6:1;
    unsigned CNIE1A7:1;
    unsigned CNIE1A8:1;
    unsigned CNIE1A9:1;
    unsigned CNIE1A10:1;
    unsigned CNIE1A11:1;
    unsigned CNIE1A12:1;
    unsigned CNIE1A13:1;
    unsigned CNIE1A14:1;
    unsigned CNIE1A15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN1Abits_t;
extern volatile __CNEN1Abits_t CNEN1Abits;
extern volatile unsigned int        CNEN1ACLR;
extern volatile unsigned int        CNEN1ASET;
extern volatile unsigned int        CNEN1AINV;
#define CNFA CNFA
extern volatile unsigned int   CNFA;
typedef union {
  struct {
    unsigned CNFA0:1;
    unsigned CNFA1:1;
    unsigned CNFA2:1;
    unsigned CNFA3:1;
    unsigned CNFA4:1;
    unsigned CNFA5:1;
    unsigned CNFA6:1;
    unsigned CNFA7:1;
    unsigned CNFA8:1;
    unsigned CNFA9:1;
    unsigned CNFA10:1;
    unsigned CNFA11:1;
    unsigned CNFA12:1;
    unsigned CNFA13:1;
    unsigned CNFA14:1;
    unsigned CNFA15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNFAbits_t;
extern volatile __CNFAbits_t CNFAbits;
extern volatile unsigned int        CNFACLR;
extern volatile unsigned int        CNFASET;
extern volatile unsigned int        CNFAINV;
#define SR0A SR0A
extern volatile unsigned int   SR0A;
typedef struct {
  unsigned w:32;
} __SR0Abits_t;
extern volatile __SR0Abits_t SR0Abits;
extern volatile unsigned int        SR0ACLR;
extern volatile unsigned int        SR0ASET;
extern volatile unsigned int        SR0AINV;
#define SR1A SR1A
extern volatile unsigned int   SR1A;
typedef struct {
  unsigned w:32;
} __SR1Abits_t;
extern volatile __SR1Abits_t SR1Abits;
extern volatile unsigned int        SR1ACLR;
extern volatile unsigned int        SR1ASET;
extern volatile unsigned int        SR1AINV;
#define ANSELB ANSELB
extern volatile unsigned int   ANSELB;
typedef union {
  struct {
    unsigned ANSB0:1;
    unsigned ANSB1:1;
    unsigned ANSB2:1;
    unsigned ANSB3:1;
    unsigned ANSB4:1;
    unsigned :8;
    unsigned ANSB13:1;
    unsigned ANSB14:1;
    unsigned ANSB15:1;
  };
  struct {
    unsigned w:32;
  };
} __ANSELBbits_t;
extern volatile __ANSELBbits_t ANSELBbits;
#define B B
extern volatile unsigned int   B;
typedef union {
  struct {
    unsigned ANSB0:1;
    unsigned ANSB1:1;
    unsigned ANSB2:1;
    unsigned ANSB3:1;
    unsigned ANSB4:1;
    unsigned :8;
    unsigned ANSB13:1;
    unsigned ANSB14:1;
    unsigned ANSB15:1;
  };
  struct {
    unsigned w:32;
  };
} __Bbits_t;
extern volatile __Bbits_t Bbits;
extern volatile unsigned int        ANSELBCLR;
extern volatile unsigned int        BCLR;
extern volatile unsigned int        ANSELBSET;
extern volatile unsigned int        BSET;
extern volatile unsigned int        ANSELBINV;
extern volatile unsigned int        BINV;
#define TRISB TRISB
extern volatile unsigned int   TRISB;
typedef union {
  struct {
    unsigned TRISB0:1;
    unsigned TRISB1:1;
    unsigned TRISB2:1;
    unsigned TRISB3:1;
    unsigned TRISB4:1;
    unsigned TRISB5:1;
    unsigned TRISB6:1;
    unsigned TRISB7:1;
    unsigned TRISB8:1;
    unsigned TRISB9:1;
    unsigned TRISB10:1;
    unsigned TRISB11:1;
    unsigned :1;
    unsigned TRISB13:1;
    unsigned TRISB14:1;
    unsigned TRISB15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISBbits_t;
extern volatile __TRISBbits_t TRISBbits;
extern volatile unsigned int        TRISBCLR;
extern volatile unsigned int        TRISBSET;
extern volatile unsigned int        TRISBINV;
#define PORTB PORTB
extern volatile unsigned int   PORTB;
typedef union {
  struct {
    unsigned RB0:1;
    unsigned RB1:1;
    unsigned RB2:1;
    unsigned RB3:1;
    unsigned RB4:1;
    unsigned RB5:1;
    unsigned RB6:1;
    unsigned RB7:1;
    unsigned RB8:1;
    unsigned RB9:1;
    unsigned RB10:1;
    unsigned RB11:1;
    unsigned :1;
    unsigned RB13:1;
    unsigned RB14:1;
    unsigned RB15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTBbits_t;
extern volatile __PORTBbits_t PORTBbits;
extern volatile unsigned int        PORTBCLR;
extern volatile unsigned int        PORTBSET;
extern volatile unsigned int        PORTBINV;
#define LATB LATB
extern volatile unsigned int   LATB;
typedef union {
  struct {
    unsigned LATB0:1;
    unsigned LATB1:1;
    unsigned LATB2:1;
    unsigned LATB3:1;
    unsigned LATB4:1;
    unsigned LATB5:1;
    unsigned LATB6:1;
    unsigned LATB7:1;
    unsigned LATB8:1;
    unsigned LATB9:1;
    unsigned LATB10:1;
    unsigned LATB11:1;
    unsigned :1;
    unsigned LATB13:1;
    unsigned LATB14:1;
    unsigned LATB15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATBbits_t;
extern volatile __LATBbits_t LATBbits;
extern volatile unsigned int        LATBCLR;
extern volatile unsigned int        LATBSET;
extern volatile unsigned int        LATBINV;
#define ODCB ODCB
extern volatile unsigned int   ODCB;
typedef union {
  struct {
    unsigned ODCB0:1;
    unsigned ODCB1:1;
    unsigned ODCB2:1;
    unsigned ODCB3:1;
    unsigned ODCB4:1;
    unsigned ODCB5:1;
    unsigned ODCB6:1;
    unsigned ODCB7:1;
    unsigned ODCB8:1;
    unsigned ODCB9:1;
    unsigned ODCB10:1;
    unsigned ODCB11:1;
    unsigned :1;
    unsigned ODCB13:1;
    unsigned ODCB14:1;
    unsigned ODCB15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCBbits_t;
extern volatile __ODCBbits_t ODCBbits;
extern volatile unsigned int        ODCBCLR;
extern volatile unsigned int        ODCBSET;
extern volatile unsigned int        ODCBINV;
#define CNPUB CNPUB
extern volatile unsigned int   CNPUB;
typedef union {
  struct {
    unsigned CNPUB0:1;
    unsigned CNPUB1:1;
    unsigned CNPUB2:1;
    unsigned CNPUB3:1;
    unsigned CNPUB4:1;
    unsigned CNPUB5:1;
    unsigned CNPUB6:1;
    unsigned CNPUB7:1;
    unsigned CNPUB8:1;
    unsigned CNPUB9:1;
    unsigned CNPUB10:1;
    unsigned CNPUB11:1;
    unsigned :1;
    unsigned CNPUB13:1;
    unsigned CNPUB14:1;
    unsigned CNPUB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUBbits_t;
extern volatile __CNPUBbits_t CNPUBbits;
extern volatile unsigned int        CNPUBCLR;
extern volatile unsigned int        CNPUBSET;
extern volatile unsigned int        CNPUBINV;
#define CNPDB CNPDB
extern volatile unsigned int   CNPDB;
typedef union {
  struct {
    unsigned CNPDB0:1;
    unsigned CNPDB1:1;
    unsigned CNPDB2:1;
    unsigned CNPDB3:1;
    unsigned CNPDB4:1;
    unsigned CNPDB5:1;
    unsigned CNPDB6:1;
    unsigned CNPDB7:1;
    unsigned CNPDB8:1;
    unsigned CNPDB9:1;
    unsigned CNPDB10:1;
    unsigned CNPDB11:1;
    unsigned :1;
    unsigned CNPDB13:1;
    unsigned CNPDB14:1;
    unsigned CNPDB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDBbits_t;
extern volatile __CNPDBbits_t CNPDBbits;
extern volatile unsigned int        CNPDBCLR;
extern volatile unsigned int        CNPDBSET;
extern volatile unsigned int        CNPDBINV;
#define CNCONB CNCONB
extern volatile unsigned int   CNCONB;
typedef union {
  struct {
    unsigned :10;
    unsigned PORT32:1;
    unsigned CNSTYLE:1;
    unsigned :3;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONBbits_t;
extern volatile __CNCONBbits_t CNCONBbits;
extern volatile unsigned int        CNCONBCLR;
extern volatile unsigned int        CNCONBSET;
extern volatile unsigned int        CNCONBINV;
#define CNEN0B CNEN0B
extern volatile unsigned int   CNEN0B;
typedef union {
  struct {
    unsigned CNIE0B0:1;
    unsigned CNIE0B1:1;
    unsigned CNIE0B2:1;
    unsigned CNIE0B3:1;
    unsigned CNIE0B4:1;
    unsigned CNIE0B5:1;
    unsigned CNIE0B6:1;
    unsigned CNIE0B7:1;
    unsigned CNIE0B8:1;
    unsigned CNIE0B9:1;
    unsigned CNIE0B10:1;
    unsigned CNIE0B11:1;
    unsigned :1;
    unsigned CNIE0B13:1;
    unsigned CNIE0B14:1;
    unsigned CNIE0B15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN0Bbits_t;
extern volatile __CNEN0Bbits_t CNEN0Bbits;
extern volatile unsigned int        CNEN0BCLR;
extern volatile unsigned int        CNEN0BSET;
extern volatile unsigned int        CNEN0BINV;
#define CNSTATB CNSTATB
extern volatile unsigned int   CNSTATB;
typedef union {
  struct {
    unsigned CNSTATB0:1;
    unsigned CNSTATB1:1;
    unsigned CNSTATB2:1;
    unsigned CNSTATB3:1;
    unsigned CNSTATB4:1;
    unsigned CNSTATB5:1;
    unsigned CNSTATB6:1;
    unsigned CNSTATB7:1;
    unsigned CNSTATB8:1;
    unsigned CNSTATB9:1;
    unsigned CNSTATB10:1;
    unsigned CNSTATB11:1;
    unsigned :1;
    unsigned CNSTATB13:1;
    unsigned CNSTATB14:1;
    unsigned CNSTATB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATBbits_t;
extern volatile __CNSTATBbits_t CNSTATBbits;
extern volatile unsigned int        CNSTATBCLR;
extern volatile unsigned int        CNSTATBSET;
extern volatile unsigned int        CNSTATBINV;
#define CNEN1B CNEN1B
extern volatile unsigned int   CNEN1B;
typedef union {
  struct {
    unsigned CNIE1B0:1;
    unsigned CNIE1B1:1;
    unsigned CNIE1B2:1;
    unsigned CNIE1B3:1;
    unsigned CNIE1B4:1;
    unsigned CNIE1B5:1;
    unsigned CNIE1B6:1;
    unsigned CNIE1B7:1;
    unsigned CNIE1B8:1;
    unsigned CNIE1B9:1;
    unsigned CNIE1B10:1;
    unsigned CNIE1B11:1;
    unsigned :1;
    unsigned CNIE1B13:1;
    unsigned CNIE1B14:1;
    unsigned CNIE1B15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN1Bbits_t;
extern volatile __CNEN1Bbits_t CNEN1Bbits;
extern volatile unsigned int        CNEN1BCLR;
extern volatile unsigned int        CNEN1BSET;
extern volatile unsigned int        CNEN1BINV;
#define CNFB CNFB
extern volatile unsigned int   CNFB;
typedef union {
  struct {
    unsigned CNFB0:1;
    unsigned CNFB1:1;
    unsigned CNFB2:1;
    unsigned CNFB3:1;
    unsigned CNFB4:1;
    unsigned CNFB5:1;
    unsigned CNFB6:1;
    unsigned CNFB7:1;
    unsigned CNFB8:1;
    unsigned CNFB9:1;
    unsigned CNFB10:1;
    unsigned CNFB11:1;
    unsigned :1;
    unsigned CNFB13:1;
    unsigned CNFB14:1;
    unsigned CNFB15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNFBbits_t;
extern volatile __CNFBbits_t CNFBbits;
extern volatile unsigned int        CNFBCLR;
extern volatile unsigned int        CNFBSET;
extern volatile unsigned int        CNFBINV;
#define SR0B SR0B
extern volatile unsigned int   SR0B;
typedef struct {
  unsigned w:32;
} __SR0Bbits_t;
extern volatile __SR0Bbits_t SR0Bbits;
extern volatile unsigned int        SR0BCLR;
extern volatile unsigned int        SR0BSET;
extern volatile unsigned int        SR0BINV;
#define SR1B SR1B
extern volatile unsigned int   SR1B;
typedef struct {
  unsigned w:32;
} __SR1Bbits_t;
extern volatile __SR1Bbits_t SR1Bbits;
extern volatile unsigned int        SR1BCLR;
extern volatile unsigned int        SR1BSET;
extern volatile unsigned int        SR1BINV;
#define ANSELC ANSELC
extern volatile unsigned int   ANSELC;
typedef union {
  struct {
    unsigned ANSC0:1;
    unsigned ANSC1:1;
    unsigned :3;
    unsigned ANSC5:1;
    unsigned :2;
    unsigned ANSC8:1;
  };
  struct {
    unsigned w:32;
  };
} __ANSELCbits_t;
extern volatile __ANSELCbits_t ANSELCbits;
extern volatile unsigned int        ANSELCCLR;
extern volatile unsigned int        ANSELCSET;
extern volatile unsigned int        ANSELCINV;
#define TRISC TRISC
extern volatile unsigned int   TRISC;
typedef union {
  struct {
    unsigned TRISC0:1;
    unsigned TRISC1:1;
    unsigned TRISC2:1;
    unsigned TRISC3:1;
    unsigned TRISC4:1;
    unsigned TRISC5:1;
    unsigned TRISC6:1;
    unsigned TRISC7:1;
    unsigned TRISC8:1;
    unsigned TRISC9:1;
    unsigned TRISC10:1;
    unsigned TRISC11:1;
    unsigned TRISC12:1;
    unsigned TRISC13:1;
    unsigned TRISC14:1;
    unsigned TRISC15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISCbits_t;
extern volatile __TRISCbits_t TRISCbits;
extern volatile unsigned int        TRISCCLR;
extern volatile unsigned int        TRISCSET;
extern volatile unsigned int        TRISCINV;
#define PORTC PORTC
extern volatile unsigned int   PORTC;
typedef union {
  struct {
    unsigned RC0:1;
    unsigned RC1:1;
    unsigned RC2:1;
    unsigned RC3:1;
    unsigned RC4:1;
    unsigned RC5:1;
    unsigned RC6:1;
    unsigned RC7:1;
    unsigned RC8:1;
    unsigned RC9:1;
    unsigned RC10:1;
    unsigned RC11:1;
    unsigned RC12:1;
    unsigned RC13:1;
    unsigned RC14:1;
    unsigned RC15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTCbits_t;
extern volatile __PORTCbits_t PORTCbits;
extern volatile unsigned int        PORTCCLR;
extern volatile unsigned int        PORTCSET;
extern volatile unsigned int        PORTCINV;
#define LATC LATC
extern volatile unsigned int   LATC;
typedef union {
  struct {
    unsigned LATC0:1;
    unsigned LATC1:1;
    unsigned LATC2:1;
    unsigned LATC3:1;
    unsigned LATC4:1;
    unsigned LATC5:1;
    unsigned LATC6:1;
    unsigned LATC7:1;
    unsigned LATC8:1;
    unsigned LATC9:1;
    unsigned LATC10:1;
    unsigned LATC11:1;
    unsigned LATC12:1;
    unsigned LATC13:1;
    unsigned LATC14:1;
    unsigned LATC15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATCbits_t;
extern volatile __LATCbits_t LATCbits;
extern volatile unsigned int        LATCCLR;
extern volatile unsigned int        LATCSET;
extern volatile unsigned int        LATCINV;
#define ODCC ODCC
extern volatile unsigned int   ODCC;
typedef union {
  struct {
    unsigned ODCC0:1;
    unsigned ODCC1:1;
    unsigned ODCC2:1;
    unsigned ODCC3:1;
    unsigned ODCC4:1;
    unsigned ODCC5:1;
    unsigned ODCC6:1;
    unsigned ODCC7:1;
    unsigned ODCC8:1;
    unsigned ODCC9:1;
    unsigned ODCC10:1;
    unsigned ODCC11:1;
    unsigned ODCC12:1;
    unsigned ODCC13:1;
    unsigned ODCC14:1;
    unsigned ODCC15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCCbits_t;
extern volatile __ODCCbits_t ODCCbits;
extern volatile unsigned int        ODCCCLR;
extern volatile unsigned int        ODCCSET;
extern volatile unsigned int        ODCCINV;
#define CNPUC CNPUC
extern volatile unsigned int   CNPUC;
typedef union {
  struct {
    unsigned CNPUC0:1;
    unsigned CNPUC1:1;
    unsigned CNPUC2:1;
    unsigned CNPUC3:1;
    unsigned CNPUC4:1;
    unsigned CNPUC5:1;
    unsigned CNPUC6:1;
    unsigned CNPUC7:1;
    unsigned CNPUC8:1;
    unsigned CNPUC9:1;
    unsigned CNPUC10:1;
    unsigned CNPUC11:1;
    unsigned CNPUC12:1;
    unsigned CNPUC13:1;
    unsigned CNPUC14:1;
    unsigned CNPUC15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUCbits_t;
extern volatile __CNPUCbits_t CNPUCbits;
extern volatile unsigned int        CNPUCCLR;
extern volatile unsigned int        CNPUCSET;
extern volatile unsigned int        CNPUCINV;
#define CNPDC CNPDC
extern volatile unsigned int   CNPDC;
typedef union {
  struct {
    unsigned CNPDC0:1;
    unsigned CNPDC1:1;
    unsigned CNPDC2:1;
    unsigned CNPDC3:1;
    unsigned CNPDC4:1;
    unsigned CNPDC5:1;
    unsigned CNPDC6:1;
    unsigned CNPDC7:1;
    unsigned CNPDC8:1;
    unsigned CNPDC9:1;
    unsigned CNPDC10:1;
    unsigned CNPDC11:1;
    unsigned CNPDC12:1;
    unsigned CNPDC13:1;
    unsigned CNPDC14:1;
    unsigned CNPDC15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDCbits_t;
extern volatile __CNPDCbits_t CNPDCbits;
extern volatile unsigned int        CNPDCCLR;
extern volatile unsigned int        CNPDCSET;
extern volatile unsigned int        CNPDCINV;
#define CNCONC CNCONC
extern volatile unsigned int   CNCONC;
typedef union {
  struct {
    unsigned :10;
    unsigned PORT32:1;
    unsigned CNSTYLE:1;
    unsigned :3;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONCbits_t;
extern volatile __CNCONCbits_t CNCONCbits;
extern volatile unsigned int        CNCONCCLR;
extern volatile unsigned int        CNCONCSET;
extern volatile unsigned int        CNCONCINV;
#define CNEN0C CNEN0C
extern volatile unsigned int   CNEN0C;
typedef union {
  struct {
    unsigned CNIE0C0:1;
    unsigned CNIE0C1:1;
    unsigned CNIE0C2:1;
    unsigned CNIE0C3:1;
    unsigned CNIE0C4:1;
    unsigned CNIE0C5:1;
    unsigned CNIE0C6:1;
    unsigned CNIE0C7:1;
    unsigned CNIE0C8:1;
    unsigned CNIE0C9:1;
    unsigned CNIE0C10:1;
    unsigned CNIE0C11:1;
    unsigned CNIE0C12:1;
    unsigned CNIE0C13:1;
    unsigned CNIE0C14:1;
    unsigned CNIE0C15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN0Cbits_t;
extern volatile __CNEN0Cbits_t CNEN0Cbits;
extern volatile unsigned int        CNEN0CCLR;
extern volatile unsigned int        CNEN0CSET;
extern volatile unsigned int        CNEN0CINV;
#define CNSTATC CNSTATC
extern volatile unsigned int   CNSTATC;
typedef union {
  struct {
    unsigned CNSTATC0:1;
    unsigned CNSTATC1:1;
    unsigned CNSTATC2:1;
    unsigned CNSTATC3:1;
    unsigned CNSTATC4:1;
    unsigned CNSTATC5:1;
    unsigned CNSTATC6:1;
    unsigned CNSTATC7:1;
    unsigned CNSTATC8:1;
    unsigned CNSTATC9:1;
    unsigned CNSTATC10:1;
    unsigned CNSTATC11:1;
    unsigned CNSTATC12:1;
    unsigned CNSTATC13:1;
    unsigned CNSTATC14:1;
    unsigned CNSTATC15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATCbits_t;
extern volatile __CNSTATCbits_t CNSTATCbits;
extern volatile unsigned int        CNSTATCCLR;
extern volatile unsigned int        CNSTATCSET;
extern volatile unsigned int        CNSTATCINV;
#define CNEN1C CNEN1C
extern volatile unsigned int   CNEN1C;
typedef union {
  struct {
    unsigned CNIE1C0:1;
    unsigned CNIE1C1:1;
    unsigned CNIE1C2:1;
    unsigned CNIE1C3:1;
    unsigned CNIE1C4:1;
    unsigned CNIE1C5:1;
    unsigned CNIE1C6:1;
    unsigned CNIE1C7:1;
    unsigned CNIE1C8:1;
    unsigned CNIE1C9:1;
    unsigned CNIE1C10:1;
    unsigned CNIE1C11:1;
    unsigned CNIE1C12:1;
    unsigned CNIE1C13:1;
    unsigned CNIE1C14:1;
    unsigned CNIE1C15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN1Cbits_t;
extern volatile __CNEN1Cbits_t CNEN1Cbits;
extern volatile unsigned int        CNEN1CCLR;
extern volatile unsigned int        CNEN1CSET;
extern volatile unsigned int        CNEN1CINV;
#define CNFC CNFC
extern volatile unsigned int   CNFC;
typedef union {
  struct {
    unsigned CNFC0:1;
    unsigned CNFC1:1;
    unsigned CNFC2:1;
    unsigned CNFC3:1;
    unsigned CNFC4:1;
    unsigned CNFC5:1;
    unsigned CNFC6:1;
    unsigned CNFC7:1;
    unsigned CNFC8:1;
    unsigned CNFC9:1;
    unsigned CNFC10:1;
    unsigned CNFC11:1;
    unsigned CNFC12:1;
    unsigned CNFC13:1;
    unsigned CNFC14:1;
    unsigned CNFC15:1;
  };
  struct {
    unsigned w:32;
  };
} __CNFCbits_t;
extern volatile __CNFCbits_t CNFCbits;
extern volatile unsigned int        CNFCCLR;
extern volatile unsigned int        CNFCSET;
extern volatile unsigned int        CNFCINV;
#define SR0C SR0C
extern volatile unsigned int   SR0C;
typedef struct {
  unsigned w:32;
} __SR0Cbits_t;
extern volatile __SR0Cbits_t SR0Cbits;
extern volatile unsigned int        SR0CCLR;
extern volatile unsigned int        SR0CSET;
extern volatile unsigned int        SR0CINV;
#define SR1C SR1C
extern volatile unsigned int   SR1C;
typedef struct {
  unsigned w:32;
} __SR1Cbits_t;
extern volatile __SR1Cbits_t SR1Cbits;
extern volatile unsigned int        SR1CCLR;
extern volatile unsigned int        SR1CSET;
extern volatile unsigned int        SR1CINV;
#define ANSELD ANSELD
extern volatile unsigned int   ANSELD;
typedef struct {
  unsigned w:32;
} __ANSELDbits_t;
extern volatile __ANSELDbits_t ANSELDbits;
extern volatile unsigned int        ANSELDCLR;
extern volatile unsigned int        ANSELDSET;
extern volatile unsigned int        ANSELDINV;
#define TRISD TRISD
extern volatile unsigned int   TRISD;
typedef union {
  struct {
    unsigned TRISD0:1;
    unsigned TRISD1:1;
    unsigned TRISD2:1;
    unsigned TRISD3:1;
    unsigned TRISD4:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISDbits_t;
extern volatile __TRISDbits_t TRISDbits;
extern volatile unsigned int        TRISDCLR;
extern volatile unsigned int        TRISDSET;
extern volatile unsigned int        TRISDINV;
#define PORTD PORTD
extern volatile unsigned int   PORTD;
typedef union {
  struct {
    unsigned RD0:1;
    unsigned RD1:1;
    unsigned RD2:1;
    unsigned RD3:1;
    unsigned RD4:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTDbits_t;
extern volatile __PORTDbits_t PORTDbits;
extern volatile unsigned int        PORTDCLR;
extern volatile unsigned int        PORTDSET;
extern volatile unsigned int        PORTDINV;
#define LATD LATD
extern volatile unsigned int   LATD;
typedef union {
  struct {
    unsigned LATD0:1;
    unsigned LATD1:1;
    unsigned LATD2:1;
    unsigned LATD3:1;
    unsigned LATD4:1;
  };
  struct {
    unsigned w:32;
  };
} __LATDbits_t;
extern volatile __LATDbits_t LATDbits;
extern volatile unsigned int        LATDCLR;
extern volatile unsigned int        LATDSET;
extern volatile unsigned int        LATDINV;
#define ODCD ODCD
extern volatile unsigned int   ODCD;
typedef union {
  struct {
    unsigned ODCD0:1;
    unsigned ODCD1:1;
    unsigned ODCD2:1;
    unsigned ODCD3:1;
    unsigned ODCD4:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCDbits_t;
extern volatile __ODCDbits_t ODCDbits;
extern volatile unsigned int        ODCDCLR;
extern volatile unsigned int        ODCDSET;
extern volatile unsigned int        ODCDINV;
#define CNPUD CNPUD
extern volatile unsigned int   CNPUD;
typedef union {
  struct {
    unsigned CNPUD0:1;
    unsigned CNPUD1:1;
    unsigned CNPUD2:1;
    unsigned CNPUD3:1;
    unsigned CNPU4:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUDbits_t;
extern volatile __CNPUDbits_t CNPUDbits;
extern volatile unsigned int        CNPUDCLR;
extern volatile unsigned int        CNPUDSET;
extern volatile unsigned int        CNPUDINV;
#define CNPDD CNPDD
extern volatile unsigned int   CNPDD;
typedef union {
  struct {
    unsigned CNPDD0:1;
    unsigned CNPDD1:1;
    unsigned CNPDD2:1;
    unsigned CNPDD3:1;
    unsigned CNPDD4:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPDDbits_t;
extern volatile __CNPDDbits_t CNPDDbits;
extern volatile unsigned int        CNPDDCLR;
extern volatile unsigned int        CNPDDSET;
extern volatile unsigned int        CNPDDINV;
#define CNCOND CNCOND
extern volatile unsigned int   CNCOND;
typedef union {
  struct {
    unsigned :10;
    unsigned PORT32:1;
    unsigned CNSTYLE:1;
    unsigned :3;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONDbits_t;
extern volatile __CNCONDbits_t CNCONDbits;
extern volatile unsigned int        CNCONDCLR;
extern volatile unsigned int        CNCONDSET;
extern volatile unsigned int        CNCONDINV;
#define CNEN0D CNEN0D
extern volatile unsigned int   CNEN0D;
typedef union {
  struct {
    unsigned CNIE0D0:1;
    unsigned CNIE0D1:1;
    unsigned CNIE0D2:1;
    unsigned CNIE0D3:1;
    unsigned CNIE0D4:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN0Dbits_t;
extern volatile __CNEN0Dbits_t CNEN0Dbits;
extern volatile unsigned int        CNEN0DCLR;
extern volatile unsigned int        CNEN0DSET;
extern volatile unsigned int        CNEN0DINV;
#define CNSTATD CNSTATD
extern volatile unsigned int   CNSTATD;
typedef union {
  struct {
    unsigned CNSTATD0:1;
    unsigned CNSTATD1:1;
    unsigned CNSTATD2:1;
    unsigned CNSTATD3:1;
    unsigned CNSTATD4:1;
  };
  struct {
    unsigned w:32;
  };
} __CNSTATDbits_t;
extern volatile __CNSTATDbits_t CNSTATDbits;
extern volatile unsigned int        CNSTATDCLR;
extern volatile unsigned int        CNSTATDSET;
extern volatile unsigned int        CNSTATDINV;
#define CNEN1D CNEN1D
extern volatile unsigned int   CNEN1D;
typedef union {
  struct {
    unsigned CNIE1D0:1;
    unsigned CNIE1D1:1;
    unsigned CNIE1D2:1;
    unsigned CNIE1D3:1;
    unsigned CNIE1D4:1;
  };
  struct {
    unsigned w:32;
  };
} __CNEN1Dbits_t;
extern volatile __CNEN1Dbits_t CNEN1Dbits;
extern volatile unsigned int        CNEN1DCLR;
extern volatile unsigned int        CNEN1DSET;
extern volatile unsigned int        CNEN1DINV;
#define CNFD CNFD
extern volatile unsigned int   CNFD;
typedef union {
  struct {
    unsigned CNFD0:1;
    unsigned CNFD1:1;
    unsigned CNFD2:1;
    unsigned CNFD3:1;
    unsigned CNFD4:1;
  };
  struct {
    unsigned w:32;
  };
} __CNFDbits_t;
extern volatile __CNFDbits_t CNFDbits;
extern volatile unsigned int        CNFDCLR;
extern volatile unsigned int        CNFDSET;
extern volatile unsigned int        CNFDINV;
#define SR0D SR0D
extern volatile unsigned int   SR0D;
typedef struct {
  unsigned w:32;
} __SR0Dbits_t;
extern volatile __SR0Dbits_t SR0Dbits;
extern volatile unsigned int        SR0DCLR;
extern volatile unsigned int        SR0DSET;
extern volatile unsigned int        SR0DINV;
#define SR1D SR1D
extern volatile unsigned int   SR1D;
typedef struct {
  unsigned w:32;
} __SR1Dbits_t;
extern volatile __SR1Dbits_t SR1Dbits;
extern volatile unsigned int        SR1DCLR;
extern volatile unsigned int        SR1DSET;
extern volatile unsigned int        SR1DINV;
#define PMDCON PMDCON
extern volatile unsigned int   PMDCON;
typedef struct {
  unsigned :11;
  unsigned PMDLOCK:1;
} __PMDCONbits_t;
extern volatile __PMDCONbits_t PMDCONbits;
extern volatile unsigned int        PMDCONCLR;
extern volatile unsigned int        PMDCONSET;
extern volatile unsigned int        PMDCONINV;
#define PMD1 PMD1
extern volatile unsigned int   PMD1;
typedef struct {
  unsigned ADCMD:1;
  unsigned :11;
  unsigned VREFMD:1;
  unsigned :7;
  unsigned HLVDMD:1;
} __PMD1bits_t;
extern volatile __PMD1bits_t PMD1bits;
extern volatile unsigned int        PMD1CLR;
extern volatile unsigned int        PMD1SET;
extern volatile unsigned int        PMD1INV;
#define PMD2 PMD2
extern volatile unsigned int   PMD2;
typedef struct {
  unsigned CMP1MD:1;
  unsigned CMP2MD:1;
  unsigned CMP3MD:1;
  unsigned :21;
  unsigned CLC1MD:1;
  unsigned CLC2MD:1;
  unsigned CLC3MD:1;
  unsigned CLC4MD:1;
} __PMD2bits_t;
extern volatile __PMD2bits_t PMD2bits;
extern volatile unsigned int        PMD2CLR;
extern volatile unsigned int        PMD2SET;
extern volatile unsigned int        PMD2INV;
#define PMD3 PMD3
extern volatile unsigned int   PMD3;
typedef struct {
  unsigned :8;
  unsigned CCP1MD:1;
  unsigned CCP2MD:1;
  unsigned CCP3MD:1;
  unsigned CCP4MD:1;
  unsigned CC5MD:1;
  unsigned CC6MD:1;
  unsigned CC7MD:1;
  unsigned CC8MD:1;
  unsigned CC9MD:1;
} __PMD3bits_t;
extern volatile __PMD3bits_t PMD3bits;
extern volatile unsigned int        PMD3CLR;
extern volatile unsigned int        PMD3SET;
extern volatile unsigned int        PMD3INV;
#define PMD4 PMD4
extern volatile unsigned int   PMD4;
typedef struct {
  unsigned T1MD:1;
  unsigned T2MD:1;
  unsigned T3MD:1;
} __PMD4bits_t;
extern volatile __PMD4bits_t PMD4bits;
extern volatile unsigned int        PMD4CLR;
extern volatile unsigned int        PMD4SET;
extern volatile unsigned int        PMD4INV;
#define PMD5 PMD5
extern volatile unsigned int   PMD5;
typedef struct {
  unsigned U1MD:1;
  unsigned U2MD:1;
  unsigned U3MD:1;
  unsigned :5;
  unsigned SPI1MD:1;
  unsigned SPI2MD:1;
  unsigned SPI3MD:1;
  unsigned :5;
  unsigned I2C1MD:1;
  unsigned I2C2MD:1;
  unsigned I2C3MD:1;
  unsigned :5;
  unsigned USBMD:1;
} __PMD5bits_t;
extern volatile __PMD5bits_t PMD5bits;
extern volatile unsigned int        PMD5CLR;
extern volatile unsigned int        PMD5SET;
extern volatile unsigned int        PMD5INV;
#define PMD6 PMD6
extern volatile unsigned int   PMD6;
typedef struct {
  unsigned RTCCMD:1;
  unsigned :7;
  unsigned REFOMD:1;
} __PMD6bits_t;
extern volatile __PMD6bits_t PMD6bits;
extern volatile unsigned int        PMD6CLR;
extern volatile unsigned int        PMD6SET;
extern volatile unsigned int        PMD6INV;
#define PMD7 PMD7
extern volatile unsigned int   PMD7;
typedef struct {
  unsigned :4;
  unsigned DMAMD:1;
} __PMD7bits_t;
extern volatile __PMD7bits_t PMD7bits;
extern volatile unsigned int        PMD7CLR;
extern volatile unsigned int        PMD7SET;
extern volatile unsigned int        PMD7INV;
#define CFGCON CFGCON
extern volatile unsigned int   CFGCON;
typedef struct {
  unsigned TDOEN:1;
  unsigned FAEN:1;
  unsigned :1;
  unsigned JTAGEN:1;
  unsigned :4;
  unsigned RPFA:1;
  unsigned :7;
  unsigned EXECADDR:8;
  unsigned BMXARB:2;
  unsigned :1;
  unsigned BMXERRDIS:1;
} __CFGCONbits_t;
extern volatile __CFGCONbits_t CFGCONbits;
extern volatile unsigned int        CFGCONCLR;
extern volatile unsigned int        CFGCONSET;
extern volatile unsigned int        CFGCONINV;
#define DEVID DEVID
extern volatile unsigned int   DEVID;
typedef struct {
  unsigned MAINID:12;
  unsigned PN:16;
  unsigned VER:4;
} __DEVIDbits_t;
extern volatile __DEVIDbits_t DEVIDbits;
extern volatile unsigned int        DEVIDCLR;
extern volatile unsigned int        DEVIDSET;
extern volatile unsigned int        DEVIDINV;
#define SYSKEY SYSKEY
extern volatile unsigned int   SYSKEY;
typedef struct {
  unsigned SYSKEY:32;
} __SYSKEYbits_t;
extern volatile __SYSKEYbits_t SYSKEYbits;
extern volatile unsigned int        SYSKEYCLR;
extern volatile unsigned int        SYSKEYSET;
extern volatile unsigned int        SYSKEYINV;
#define WDTCON WDTCON
extern volatile unsigned int   WDTCON;
typedef struct {
  unsigned WDTWINEN:1;
  unsigned SLPDIV:5;
  unsigned CLKSEL:2;
  unsigned RUNDIV:5;
  unsigned :2;
  unsigned ON:1;
  unsigned WDTCLRKEY:16;
} __WDTCONbits_t;
extern volatile __WDTCONbits_t WDTCONbits;
extern volatile unsigned int        WDTCONCLR;
extern volatile unsigned int        WDTCONSET;
extern volatile unsigned int        WDTCONINV;
#define T1CON T1CON
extern volatile unsigned int   T1CON;
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned TSYNC:1;
    unsigned :1;
    unsigned TCKPS:2;
    unsigned :1;
    unsigned TGATE:1;
    unsigned TECS:2;
    unsigned :1;
    unsigned TWIP:1;
    unsigned TWDIS:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned :2;
    unsigned TECS0:1;
    unsigned TECS1:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T1CONbits_t;
extern volatile __T1CONbits_t T1CONbits;
extern volatile unsigned int        T1CONCLR;
extern volatile unsigned int        T1CONSET;
extern volatile unsigned int        T1CONINV;
#define TMR1 TMR1
extern volatile unsigned int   TMR1;
extern volatile unsigned int        TMR1CLR;
extern volatile unsigned int        TMR1SET;
extern volatile unsigned int        TMR1INV;
#define PR1 PR1
extern volatile unsigned int   PR1;
extern volatile unsigned int        PR1CLR;
extern volatile unsigned int        PR1SET;
extern volatile unsigned int        PR1INV;
#define T2CON T2CON
extern volatile unsigned int   T2CON;
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T2CONbits_t;
extern volatile __T2CONbits_t T2CONbits;
extern volatile unsigned int        T2CONCLR;
extern volatile unsigned int        T2CONSET;
extern volatile unsigned int        T2CONINV;
#define TMR2 TMR2
extern volatile unsigned int   TMR2;
extern volatile unsigned int        TMR2CLR;
extern volatile unsigned int        TMR2SET;
extern volatile unsigned int        TMR2INV;
#define PR2 PR2
extern volatile unsigned int   PR2;
extern volatile unsigned int        PR2CLR;
extern volatile unsigned int        PR2SET;
extern volatile unsigned int        PR2INV;
#define T3CON T3CON
extern volatile unsigned int   T3CON;
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T3CONbits_t;
extern volatile __T3CONbits_t T3CONbits;
extern volatile unsigned int        T3CONCLR;
extern volatile unsigned int        T3CONSET;
extern volatile unsigned int        T3CONINV;
#define TMR3 TMR3
extern volatile unsigned int   TMR3;
extern volatile unsigned int        TMR3CLR;
extern volatile unsigned int        TMR3SET;
extern volatile unsigned int        TMR3INV;
#define PR3 PR3
extern volatile unsigned int   PR3;
extern volatile unsigned int        PR3CLR;
extern volatile unsigned int        PR3SET;
extern volatile unsigned int        PR3INV;
#define SPI1CON SPI1CON
extern volatile unsigned int   SPI1CON;
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned DISSDI:1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :5;
    unsigned MCLKSEL:1;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI1CONbits_t;
extern volatile __SPI1CONbits_t SPI1CONbits;
extern volatile unsigned int        SPI1CONCLR;
extern volatile unsigned int        SPI1CONSET;
extern volatile unsigned int        SPI1CONINV;
#define SPI1STAT SPI1STAT
extern volatile unsigned int   SPI1STAT;
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned FRMERR:1;
    unsigned :3;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI1STATbits_t;
extern volatile __SPI1STATbits_t SPI1STATbits;
extern volatile unsigned int        SPI1STATCLR;
extern volatile unsigned int        SPI1STATSET;
extern volatile unsigned int        SPI1STATINV;
#define SPI1BUF SPI1BUF
extern volatile unsigned int   SPI1BUF;
#define SPI1BRG SPI1BRG
extern volatile unsigned int   SPI1BRG;
extern volatile unsigned int        SPI1BRGCLR;
extern volatile unsigned int        SPI1BRGSET;
extern volatile unsigned int        SPI1BRGINV;
#define SPI1CON2 SPI1CON2
extern volatile unsigned int   SPI1CON2;
typedef union {
  struct {
    unsigned AUDMOD:2;
    unsigned :1;
    unsigned AUDMONO:1;
    unsigned :3;
    unsigned AUDEN:1;
    unsigned IGNTUR:1;
    unsigned IGNROV:1;
    unsigned SPITUREN:1;
    unsigned SPIROVEN:1;
    unsigned FRMERREN:1;
    unsigned :2;
    unsigned SPISGNEXT:1;
  };
  struct {
    unsigned AUDMOD0:1;
    unsigned AUDMOD1:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI1CON2bits_t;
extern volatile __SPI1CON2bits_t SPI1CON2bits;
extern volatile unsigned int        SPI1CON2CLR;
extern volatile unsigned int        SPI1CON2SET;
extern volatile unsigned int        SPI1CON2INV;
#define SPI2CON SPI2CON
extern volatile unsigned int   SPI2CON;
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned DISSDI:1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :5;
    unsigned MCLKSEL:1;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI2CONbits_t;
extern volatile __SPI2CONbits_t SPI2CONbits;
extern volatile unsigned int        SPI2CONCLR;
extern volatile unsigned int        SPI2CONSET;
extern volatile unsigned int        SPI2CONINV;
#define SPI2STAT SPI2STAT
extern volatile unsigned int   SPI2STAT;
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned FRMERR:1;
    unsigned :3;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI2STATbits_t;
extern volatile __SPI2STATbits_t SPI2STATbits;
extern volatile unsigned int        SPI2STATCLR;
extern volatile unsigned int        SPI2STATSET;
extern volatile unsigned int        SPI2STATINV;
#define SPI2BUF SPI2BUF
extern volatile unsigned int   SPI2BUF;
#define SPI2BRG SPI2BRG
extern volatile unsigned int   SPI2BRG;
extern volatile unsigned int        SPI2BRGCLR;
extern volatile unsigned int        SPI2BRGSET;
extern volatile unsigned int        SPI2BRGINV;
#define SPI2CON2 SPI2CON2
extern volatile unsigned int   SPI2CON2;
typedef union {
  struct {
    unsigned AUDMOD:2;
    unsigned :1;
    unsigned AUDMONO:1;
    unsigned :3;
    unsigned AUDEN:1;
    unsigned IGNTUR:1;
    unsigned IGNROV:1;
    unsigned SPITUREN:1;
    unsigned SPIROVEN:1;
    unsigned FRMERREN:1;
    unsigned :2;
    unsigned SPISGNEXT:1;
  };
  struct {
    unsigned AUDMOD0:1;
    unsigned AUDMOD1:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI2CON2bits_t;
extern volatile __SPI2CON2bits_t SPI2CON2bits;
extern volatile unsigned int        SPI2CON2CLR;
extern volatile unsigned int        SPI2CON2SET;
extern volatile unsigned int        SPI2CON2INV;
#define SPI3CON SPI3CON
extern volatile unsigned int   SPI3CON;
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned DISSDI:1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :5;
    unsigned MCLKSEL:1;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI3CONbits_t;
extern volatile __SPI3CONbits_t SPI3CONbits;
extern volatile unsigned int        SPI3CONCLR;
extern volatile unsigned int        SPI3CONSET;
extern volatile unsigned int        SPI3CONINV;
#define SPI3STAT SPI3STAT
extern volatile unsigned int   SPI3STAT;
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned FRMERR:1;
    unsigned :3;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI3STATbits_t;
extern volatile __SPI3STATbits_t SPI3STATbits;
extern volatile unsigned int        SPI3STATCLR;
extern volatile unsigned int        SPI3STATSET;
extern volatile unsigned int        SPI3STATINV;
#define SPI3BUF SPI3BUF
extern volatile unsigned int   SPI3BUF;
#define SPI3BRG SPI3BRG
extern volatile unsigned int   SPI3BRG;
extern volatile unsigned int        SPI3BRGCLR;
extern volatile unsigned int        SPI3BRGSET;
extern volatile unsigned int        SPI3BRGINV;
#define SPI3CON2 SPI3CON2
extern volatile unsigned int   SPI3CON2;
typedef union {
  struct {
    unsigned AUDMOD:2;
    unsigned :1;
    unsigned AUDMONO:1;
    unsigned :3;
    unsigned AUDEN:1;
    unsigned IGNTUR:1;
    unsigned IGNROV:1;
    unsigned SPITUREN:1;
    unsigned SPIROVEN:1;
    unsigned FRMERREN:1;
    unsigned :2;
    unsigned SPISGNEXT:1;
  };
  struct {
    unsigned AUDMOD0:1;
    unsigned AUDMOD1:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI3CON2bits_t;
extern volatile __SPI3CON2bits_t SPI3CON2bits;
extern volatile unsigned int        SPI3CON2CLR;
extern volatile unsigned int        SPI3CON2SET;
extern volatile unsigned int        SPI3CON2INV;
#define U1OTGIR U1OTGIR
extern volatile unsigned int   U1OTGIR;
typedef struct {
  unsigned VBUSVDIF:1;
  unsigned :1;
  unsigned SESENDIF:1;
  unsigned SESVDIF:1;
  unsigned ACTVIF:1;
  unsigned LSTATEIF:1;
  unsigned T1MSECIF:1;
  unsigned IDIF:1;
} __U1OTGIRbits_t;
extern volatile __U1OTGIRbits_t U1OTGIRbits;
extern volatile unsigned int        U1OTGIRCLR;
#define U1OTGIE U1OTGIE
extern volatile unsigned int   U1OTGIE;
typedef struct {
  unsigned VBUSVDIE:1;
  unsigned :1;
  unsigned SESENDIE:1;
  unsigned SESVDIE:1;
  unsigned ACTVIE:1;
  unsigned LSTATEIE:1;
  unsigned T1MSECIE:1;
  unsigned IDIE:1;
} __U1OTGIEbits_t;
extern volatile __U1OTGIEbits_t U1OTGIEbits;
extern volatile unsigned int        U1OTGIECLR;
extern volatile unsigned int        U1OTGIESET;
extern volatile unsigned int        U1OTGIEINV;
#define U1OTGSTAT U1OTGSTAT
extern volatile unsigned int   U1OTGSTAT;
typedef struct {
  unsigned VBUSVD:1;
  unsigned :1;
  unsigned SESEND:1;
  unsigned SESVD:1;
  unsigned :1;
  unsigned LSTATE:1;
  unsigned :1;
  unsigned ID:1;
} __U1OTGSTATbits_t;
extern volatile __U1OTGSTATbits_t U1OTGSTATbits;
#define U1OTGCON U1OTGCON
extern volatile unsigned int   U1OTGCON;
typedef struct {
  unsigned VBUSDIS:1;
  unsigned VBUSCHG:1;
  unsigned OTGEN:1;
  unsigned VBUSON:1;
  unsigned DMPULDWN:1;
  unsigned DPPULDWN:1;
  unsigned DMPULUP:1;
  unsigned DPPULUP:1;
} __U1OTGCONbits_t;
extern volatile __U1OTGCONbits_t U1OTGCONbits;
extern volatile unsigned int        U1OTGCONCLR;
extern volatile unsigned int        U1OTGCONSET;
extern volatile unsigned int        U1OTGCONINV;
#define U1PWRC U1PWRC
extern volatile unsigned int   U1PWRC;
typedef struct {
  unsigned USBPWR:1;
  unsigned USUSPEND:1;
  unsigned :1;
  unsigned USBBUSY:1;
  unsigned USLPGRD:1;
  unsigned :2;
  unsigned UACTPND:1;
} __U1PWRCbits_t;
extern volatile __U1PWRCbits_t U1PWRCbits;
extern volatile unsigned int        U1PWRCCLR;
extern volatile unsigned int        U1PWRCSET;
extern volatile unsigned int        U1PWRCINV;
#define U1IR U1IR
extern volatile unsigned int   U1IR;
typedef union {
  struct {
    unsigned URSTIF_DETACHIF:1;
    unsigned UERRIF:1;
    unsigned SOFIF:1;
    unsigned TRNIF:1;
    unsigned IDLEIF:1;
    unsigned RESUMEIF:1;
    unsigned ATTACHIF:1;
    unsigned STALLIF:1;
  };
  struct {
    unsigned DETACHIF:1;
  };
  struct {
    unsigned URSTIF:1;
  };
} __U1IRbits_t;
extern volatile __U1IRbits_t U1IRbits;
extern volatile unsigned int        U1IRCLR;
#define U1IE U1IE
extern volatile unsigned int   U1IE;
typedef union {
  struct {
    unsigned URSTIE_DETACHIE:1;
    unsigned UERRIE:1;
    unsigned SOFIE:1;
    unsigned TRNIE:1;
    unsigned IDLEIE:1;
    unsigned RESUMEIE:1;
    unsigned ATTACHIE:1;
    unsigned STALLIE:1;
  };
  struct {
    unsigned DETACHIE:1;
  };
  struct {
    unsigned URSTIE:1;
  };
} __U1IEbits_t;
extern volatile __U1IEbits_t U1IEbits;
extern volatile unsigned int        U1IECLR;
extern volatile unsigned int        U1IESET;
extern volatile unsigned int        U1IEINV;
#define U1EIR U1EIR
extern volatile unsigned int   U1EIR;
typedef union {
  struct {
    unsigned PIDEF:1;
    unsigned CRC5EF_EOFEF:1;
    unsigned CRC16EF:1;
    unsigned DFN8EF:1;
    unsigned BTOEF:1;
    unsigned DMAEF:1;
    unsigned BMXEF:1;
    unsigned BTSEF:1;
  };
  struct {
    unsigned :1;
    unsigned CRC5EF:1;
  };
  struct {
    unsigned :1;
    unsigned EOFEF:1;
  };
} __U1EIRbits_t;
extern volatile __U1EIRbits_t U1EIRbits;
extern volatile unsigned int        U1EIRCLR;
#define U1EIE U1EIE
extern volatile unsigned int   U1EIE;
typedef union {
  struct {
    unsigned PIDEE:1;
    unsigned CRC5EE_EOFEE:1;
    unsigned CRC16EE:1;
    unsigned DFN8EE:1;
    unsigned BTOEE:1;
    unsigned DMAEE:1;
    unsigned BMXEE:1;
    unsigned BTSEE:1;
  };
  struct {
    unsigned :1;
    unsigned CRC5EE:1;
  };
  struct {
    unsigned :1;
    unsigned EOFEE:1;
  };
} __U1EIEbits_t;
extern volatile __U1EIEbits_t U1EIEbits;
extern volatile unsigned int        U1EIECLR;
extern volatile unsigned int        U1EIESET;
extern volatile unsigned int        U1EIEINV;
#define U1STAT U1STAT
extern volatile unsigned int   U1STAT;
typedef union {
  struct {
    unsigned :2;
    unsigned PPBI:1;
    unsigned DIR:1;
    unsigned ENDPT:4;
  };
  struct {
    unsigned :4;
    unsigned ENDPT0:1;
    unsigned ENDPT1:1;
    unsigned ENDPT2:1;
    unsigned ENDPT3:1;
  };
} __U1STATbits_t;
extern volatile __U1STATbits_t U1STATbits;
#define U1CON U1CON
extern volatile unsigned int   U1CON;
typedef union {
  struct {
    unsigned USBEN_SOFEN:1;
    unsigned PPBRST:1;
    unsigned RESUME:1;
    unsigned HOSTEN:1;
    unsigned USBRST:1;
    unsigned PKTDIS_TOKBUSY:1;
    unsigned SE0:1;
    unsigned JSTATE:1;
  };
  struct {
    unsigned USBEN:1;
  };
  struct {
    unsigned SOFEN:1;
    unsigned :4;
    unsigned PKTDIS:1;
  };
  struct {
    unsigned :5;
    unsigned TOKBUSY:1;
  };
} __U1CONbits_t;
extern volatile __U1CONbits_t U1CONbits;
extern volatile unsigned int        U1CONCLR;
extern volatile unsigned int        U1CONSET;
extern volatile unsigned int        U1CONINV;
#define U1ADDR U1ADDR
extern volatile unsigned int   U1ADDR;
typedef union {
  struct {
    unsigned DEVADDR:7;
    unsigned LSPDEN:1;
  };
  struct {
    unsigned DEVADDR0:1;
    unsigned DEVADDR1:1;
    unsigned DEVADDR2:1;
    unsigned DEVADDR3:1;
    unsigned DEVADDR4:1;
    unsigned DEVADDR5:1;
    unsigned DEVADDR6:1;
  };
} __U1ADDRbits_t;
extern volatile __U1ADDRbits_t U1ADDRbits;
extern volatile unsigned int        U1ADDRCLR;
extern volatile unsigned int        U1ADDRSET;
extern volatile unsigned int        U1ADDRINV;
#define U1BDTP1 U1BDTP1
extern volatile unsigned int   U1BDTP1;
typedef struct {
  unsigned :1;
  unsigned BDTPTRL:7;
} __U1BDTP1bits_t;
extern volatile __U1BDTP1bits_t U1BDTP1bits;
extern volatile unsigned int        U1BDTP1CLR;
extern volatile unsigned int        U1BDTP1SET;
extern volatile unsigned int        U1BDTP1INV;
#define U1FRML U1FRML
extern volatile unsigned int   U1FRML;
typedef union {
  struct {
    unsigned FRML:8;
  };
  struct {
    unsigned FRM0:1;
    unsigned FRM1:1;
    unsigned FRM2:1;
    unsigned FRM3:1;
    unsigned FRM4:1;
    unsigned FRM5:1;
    unsigned FRM6:1;
    unsigned FRM7:1;
  };
} __U1FRMLbits_t;
extern volatile __U1FRMLbits_t U1FRMLbits;
#define U1FRMH U1FRMH
extern volatile unsigned int   U1FRMH;
typedef union {
  struct {
    unsigned FRMH:3;
  };
  struct {
    unsigned FRM8:1;
    unsigned FRM9:1;
    unsigned FRM10:1;
  };
} __U1FRMHbits_t;
extern volatile __U1FRMHbits_t U1FRMHbits;
#define U1TOK U1TOK
extern volatile unsigned int   U1TOK;
typedef union {
  struct {
    unsigned EP:4;
    unsigned PID:4;
  };
  struct {
    unsigned EP0:1;
  };
  struct {
    unsigned :1;
    unsigned EP1:1;
    unsigned EP2:1;
    unsigned EP3:1;
    unsigned PID0:1;
  };
  struct {
    unsigned :5;
    unsigned PID1:1;
    unsigned PID2:1;
    unsigned PID3:1;
  };
} __U1TOKbits_t;
extern volatile __U1TOKbits_t U1TOKbits;
extern volatile unsigned int        U1TOKCLR;
extern volatile unsigned int        U1TOKSET;
extern volatile unsigned int        U1TOKINV;
#define U1SOF U1SOF
extern volatile unsigned int   U1SOF;
typedef struct {
  unsigned CNT:8;
} __U1SOFbits_t;
extern volatile __U1SOFbits_t U1SOFbits;
extern volatile unsigned int        U1SOFCLR;
extern volatile unsigned int        U1SOFSET;
extern volatile unsigned int        U1SOFINV;
#define U1BDTP2 U1BDTP2
extern volatile unsigned int   U1BDTP2;
typedef struct {
  unsigned BDTPTRH:8;
} __U1BDTP2bits_t;
extern volatile __U1BDTP2bits_t U1BDTP2bits;
extern volatile unsigned int        U1BDTP2CLR;
extern volatile unsigned int        U1BDTP2SET;
extern volatile unsigned int        U1BDTP2INV;
#define U1BDTP3 U1BDTP3
extern volatile unsigned int   U1BDTP3;
typedef struct {
  unsigned BDTPTRU:8;
} __U1BDTP3bits_t;
extern volatile __U1BDTP3bits_t U1BDTP3bits;
extern volatile unsigned int        U1BDTP3CLR;
extern volatile unsigned int        U1BDTP3SET;
extern volatile unsigned int        U1BDTP3INV;
#define U1CNFG1 U1CNFG1
extern volatile unsigned int   U1CNFG1;
typedef struct {
  unsigned UASUSPND:1;
  unsigned :2;
  unsigned LSDEV:1;
  unsigned USBSIDL:1;
  unsigned :1;
  unsigned UOEMON:1;
  unsigned UTEYE:1;
} __U1CNFG1bits_t;
extern volatile __U1CNFG1bits_t U1CNFG1bits;
extern volatile unsigned int        U1CNFG1CLR;
extern volatile unsigned int        U1CNFG1SET;
extern volatile unsigned int        U1CNFG1INV;
#define U1EP0 U1EP0
extern volatile unsigned int   U1EP0;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
  unsigned :1;
  unsigned RETRYDIS:1;
  unsigned LSPD:1;
} __U1EP0bits_t;
extern volatile __U1EP0bits_t U1EP0bits;
extern volatile unsigned int        U1EP0CLR;
extern volatile unsigned int        U1EP0SET;
extern volatile unsigned int        U1EP0INV;
#define U1EP1 U1EP1
extern volatile unsigned int   U1EP1;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP1bits_t;
extern volatile __U1EP1bits_t U1EP1bits;
extern volatile unsigned int        U1EP1CLR;
extern volatile unsigned int        U1EP1SET;
extern volatile unsigned int        U1EP1INV;
#define U1EP2 U1EP2
extern volatile unsigned int   U1EP2;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP2bits_t;
extern volatile __U1EP2bits_t U1EP2bits;
extern volatile unsigned int        U1EP2CLR;
extern volatile unsigned int        U1EP2SET;
extern volatile unsigned int        U1EP2INV;
#define U1EP3 U1EP3
extern volatile unsigned int   U1EP3;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP3bits_t;
extern volatile __U1EP3bits_t U1EP3bits;
extern volatile unsigned int        U1EP3CLR;
extern volatile unsigned int        U1EP3SET;
extern volatile unsigned int        U1EP3INV;
#define U1EP4 U1EP4
extern volatile unsigned int   U1EP4;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP4bits_t;
extern volatile __U1EP4bits_t U1EP4bits;
extern volatile unsigned int        U1EP4CLR;
extern volatile unsigned int        U1EP4SET;
extern volatile unsigned int        U1EP4INV;
#define U1EP5 U1EP5
extern volatile unsigned int   U1EP5;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP5bits_t;
extern volatile __U1EP5bits_t U1EP5bits;
extern volatile unsigned int        U1EP5CLR;
extern volatile unsigned int        U1EP5SET;
extern volatile unsigned int        U1EP5INV;
#define U1EP6 U1EP6
extern volatile unsigned int   U1EP6;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP6bits_t;
extern volatile __U1EP6bits_t U1EP6bits;
extern volatile unsigned int        U1EP6CLR;
extern volatile unsigned int        U1EP6SET;
extern volatile unsigned int        U1EP6INV;
#define U1EP7 U1EP7
extern volatile unsigned int   U1EP7;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP7bits_t;
extern volatile __U1EP7bits_t U1EP7bits;
extern volatile unsigned int        U1EP7CLR;
extern volatile unsigned int        U1EP7SET;
extern volatile unsigned int        U1EP7INV;
#define U1EP8 U1EP8
extern volatile unsigned int   U1EP8;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP8bits_t;
extern volatile __U1EP8bits_t U1EP8bits;
extern volatile unsigned int        U1EP8CLR;
extern volatile unsigned int        U1EP8SET;
extern volatile unsigned int        U1EP8INV;
#define U1EP9 U1EP9
extern volatile unsigned int   U1EP9;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP9bits_t;
extern volatile __U1EP9bits_t U1EP9bits;
extern volatile unsigned int        U1EP9CLR;
extern volatile unsigned int        U1EP9SET;
extern volatile unsigned int        U1EP9INV;
#define U1EP10 U1EP10
extern volatile unsigned int   U1EP10;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP10bits_t;
extern volatile __U1EP10bits_t U1EP10bits;
extern volatile unsigned int        U1EP10CLR;
extern volatile unsigned int        U1EP10SET;
extern volatile unsigned int        U1EP10INV;
#define U1EP11 U1EP11
extern volatile unsigned int   U1EP11;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP11bits_t;
extern volatile __U1EP11bits_t U1EP11bits;
extern volatile unsigned int        U1EP11CLR;
extern volatile unsigned int        U1EP11SET;
extern volatile unsigned int        U1EP11INV;
#define U1EP12 U1EP12
extern volatile unsigned int   U1EP12;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP12bits_t;
extern volatile __U1EP12bits_t U1EP12bits;
extern volatile unsigned int        U1EP12CLR;
extern volatile unsigned int        U1EP12SET;
extern volatile unsigned int        U1EP12INV;
#define U1EP13 U1EP13
extern volatile unsigned int   U1EP13;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP13bits_t;
extern volatile __U1EP13bits_t U1EP13bits;
extern volatile unsigned int        U1EP13CLR;
extern volatile unsigned int        U1EP13SET;
extern volatile unsigned int        U1EP13INV;
#define U1EP14 U1EP14
extern volatile unsigned int   U1EP14;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP14bits_t;
extern volatile __U1EP14bits_t U1EP14bits;
extern volatile unsigned int        U1EP14CLR;
extern volatile unsigned int        U1EP14SET;
extern volatile unsigned int        U1EP14INV;
#define U1EP15 U1EP15
extern volatile unsigned int   U1EP15;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP15bits_t;
extern volatile __U1EP15bits_t U1EP15bits;
extern volatile unsigned int        U1EP15CLR;
extern volatile unsigned int        U1EP15SET;
extern volatile unsigned int        U1EP15INV;
#define DMACON DMACON
extern volatile unsigned int   DMACON;
typedef union {
  struct {
    unsigned :11;
    unsigned DMABUSY:1;
    unsigned SUSPEND:1;
    unsigned :2;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __DMACONbits_t;
extern volatile __DMACONbits_t DMACONbits;
extern volatile unsigned int        DMACONCLR;
extern volatile unsigned int        DMACONSET;
extern volatile unsigned int        DMACONINV;
#define DMASTAT DMASTAT
extern volatile unsigned int   DMASTAT;
typedef union {
  struct {
    unsigned DMACH:3;
    unsigned RDWR:1;
  };
  struct {
    unsigned w:32;
  };
} __DMASTATbits_t;
extern volatile __DMASTATbits_t DMASTATbits;
extern volatile unsigned int        DMASTATCLR;
extern volatile unsigned int        DMASTATSET;
extern volatile unsigned int        DMASTATINV;
#define DMAADDR DMAADDR
extern volatile unsigned int   DMAADDR;
extern volatile unsigned int        DMAADDRCLR;
extern volatile unsigned int        DMAADDRSET;
extern volatile unsigned int        DMAADDRINV;
#define DCRCCON DCRCCON
extern volatile unsigned int   DCRCCON;
typedef union {
  struct {
    unsigned CRCCH:3;
    unsigned :2;
    unsigned CRCTYP:1;
    unsigned CRCAPP:1;
    unsigned CRCEN:1;
    unsigned PLEN:5;
    unsigned :11;
    unsigned BITO:1;
    unsigned :2;
    unsigned WBO:1;
    unsigned BYTO:2;
  };
  struct {
    unsigned w:32;
  };
} __DCRCCONbits_t;
extern volatile __DCRCCONbits_t DCRCCONbits;
extern volatile unsigned int        DCRCCONCLR;
extern volatile unsigned int        DCRCCONSET;
extern volatile unsigned int        DCRCCONINV;
#define DCRCDATA DCRCDATA
extern volatile unsigned int   DCRCDATA;
extern volatile unsigned int        DCRCDATACLR;
extern volatile unsigned int        DCRCDATASET;
extern volatile unsigned int        DCRCDATAINV;
#define DCRCXOR DCRCXOR
extern volatile unsigned int   DCRCXOR;
extern volatile unsigned int        DCRCXORCLR;
extern volatile unsigned int        DCRCXORSET;
extern volatile unsigned int        DCRCXORINV;
#define DCH0CON DCH0CON
extern volatile unsigned int   DCH0CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH0CONbits_t;
extern volatile __DCH0CONbits_t DCH0CONbits;
extern volatile unsigned int        DCH0CONCLR;
extern volatile unsigned int        DCH0CONSET;
extern volatile unsigned int        DCH0CONINV;
#define DCH0ECON DCH0ECON
extern volatile unsigned int   DCH0ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH0ECONbits_t;
extern volatile __DCH0ECONbits_t DCH0ECONbits;
extern volatile unsigned int        DCH0ECONCLR;
extern volatile unsigned int        DCH0ECONSET;
extern volatile unsigned int        DCH0ECONINV;
#define DCH0INT DCH0INT
extern volatile unsigned int   DCH0INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH0INTbits_t;
extern volatile __DCH0INTbits_t DCH0INTbits;
extern volatile unsigned int        DCH0INTCLR;
extern volatile unsigned int        DCH0INTSET;
extern volatile unsigned int        DCH0INTINV;
#define DCH0SSA DCH0SSA
extern volatile unsigned int   DCH0SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH0SSAbits_t;
extern volatile __DCH0SSAbits_t DCH0SSAbits;
extern volatile unsigned int        DCH0SSACLR;
extern volatile unsigned int        DCH0SSASET;
extern volatile unsigned int        DCH0SSAINV;
#define DCH0DSA DCH0DSA
extern volatile unsigned int   DCH0DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH0DSAbits_t;
extern volatile __DCH0DSAbits_t DCH0DSAbits;
extern volatile unsigned int        DCH0DSACLR;
extern volatile unsigned int        DCH0DSASET;
extern volatile unsigned int        DCH0DSAINV;
#define DCH0SSIZ DCH0SSIZ
extern volatile unsigned int   DCH0SSIZ;
extern volatile unsigned int        DCH0SSIZCLR;
extern volatile unsigned int        DCH0SSIZSET;
extern volatile unsigned int        DCH0SSIZINV;
#define DCH0DSIZ DCH0DSIZ
extern volatile unsigned int   DCH0DSIZ;
extern volatile unsigned int        DCH0DSIZCLR;
extern volatile unsigned int        DCH0DSIZSET;
extern volatile unsigned int        DCH0DSIZINV;
#define DCH0SPTR DCH0SPTR
extern volatile unsigned int   DCH0SPTR;
extern volatile unsigned int        DCH0SPTRCLR;
extern volatile unsigned int        DCH0SPTRSET;
extern volatile unsigned int        DCH0SPTRINV;
#define DCH0DPTR DCH0DPTR
extern volatile unsigned int   DCH0DPTR;
extern volatile unsigned int        DCH0DPTRCLR;
extern volatile unsigned int        DCH0DPTRSET;
extern volatile unsigned int        DCH0DPTRINV;
#define DCH0CSIZ DCH0CSIZ
extern volatile unsigned int   DCH0CSIZ;
extern volatile unsigned int        DCH0CSIZCLR;
extern volatile unsigned int        DCH0CSIZSET;
extern volatile unsigned int        DCH0CSIZINV;
#define DCH0CPTR DCH0CPTR
extern volatile unsigned int   DCH0CPTR;
extern volatile unsigned int        DCH0CPTRCLR;
extern volatile unsigned int        DCH0CPTRSET;
extern volatile unsigned int        DCH0CPTRINV;
#define DCH0DAT DCH0DAT
extern volatile unsigned int   DCH0DAT;
extern volatile unsigned int        DCH0DATCLR;
extern volatile unsigned int        DCH0DATSET;
extern volatile unsigned int        DCH0DATINV;
#define DCH1CON DCH1CON
extern volatile unsigned int   DCH1CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH1CONbits_t;
extern volatile __DCH1CONbits_t DCH1CONbits;
extern volatile unsigned int        DCH1CONCLR;
extern volatile unsigned int        DCH1CONSET;
extern volatile unsigned int        DCH1CONINV;
#define DCH1ECON DCH1ECON
extern volatile unsigned int   DCH1ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH1ECONbits_t;
extern volatile __DCH1ECONbits_t DCH1ECONbits;
extern volatile unsigned int        DCH1ECONCLR;
extern volatile unsigned int        DCH1ECONSET;
extern volatile unsigned int        DCH1ECONINV;
#define DCH1INT DCH1INT
extern volatile unsigned int   DCH1INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH1INTbits_t;
extern volatile __DCH1INTbits_t DCH1INTbits;
extern volatile unsigned int        DCH1INTCLR;
extern volatile unsigned int        DCH1INTSET;
extern volatile unsigned int        DCH1INTINV;
#define DCH1SSA DCH1SSA
extern volatile unsigned int   DCH1SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH1SSAbits_t;
extern volatile __DCH1SSAbits_t DCH1SSAbits;
extern volatile unsigned int        DCH1SSACLR;
extern volatile unsigned int        DCH1SSASET;
extern volatile unsigned int        DCH1SSAINV;
#define DCH1DSA DCH1DSA
extern volatile unsigned int   DCH1DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH1DSAbits_t;
extern volatile __DCH1DSAbits_t DCH1DSAbits;
extern volatile unsigned int        DCH1DSACLR;
extern volatile unsigned int        DCH1DSASET;
extern volatile unsigned int        DCH1DSAINV;
#define DCH1SSIZ DCH1SSIZ
extern volatile unsigned int   DCH1SSIZ;
extern volatile unsigned int        DCH1SSIZCLR;
extern volatile unsigned int        DCH1SSIZSET;
extern volatile unsigned int        DCH1SSIZINV;
#define DCH1DSIZ DCH1DSIZ
extern volatile unsigned int   DCH1DSIZ;
extern volatile unsigned int        DCH1DSIZCLR;
extern volatile unsigned int        DCH1DSIZSET;
extern volatile unsigned int        DCH1DSIZINV;
#define DCH1SPTR DCH1SPTR
extern volatile unsigned int   DCH1SPTR;
extern volatile unsigned int        DCH1SPTRCLR;
extern volatile unsigned int        DCH1SPTRSET;
extern volatile unsigned int        DCH1SPTRINV;
#define DCH1DPTR DCH1DPTR
extern volatile unsigned int   DCH1DPTR;
extern volatile unsigned int        DCH1DPTRCLR;
extern volatile unsigned int        DCH1DPTRSET;
extern volatile unsigned int        DCH1DPTRINV;
#define DCH1CSIZ DCH1CSIZ
extern volatile unsigned int   DCH1CSIZ;
extern volatile unsigned int        DCH1CSIZCLR;
extern volatile unsigned int        DCH1CSIZSET;
extern volatile unsigned int        DCH1CSIZINV;
#define DCH1CPTR DCH1CPTR
extern volatile unsigned int   DCH1CPTR;
extern volatile unsigned int        DCH1CPTRCLR;
extern volatile unsigned int        DCH1CPTRSET;
extern volatile unsigned int        DCH1CPTRINV;
#define DCH1DAT DCH1DAT
extern volatile unsigned int   DCH1DAT;
extern volatile unsigned int        DCH1DATCLR;
extern volatile unsigned int        DCH1DATSET;
extern volatile unsigned int        DCH1DATINV;
#define DCH2CON DCH2CON
extern volatile unsigned int   DCH2CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH2CONbits_t;
extern volatile __DCH2CONbits_t DCH2CONbits;
extern volatile unsigned int        DCH2CONCLR;
extern volatile unsigned int        DCH2CONSET;
extern volatile unsigned int        DCH2CONINV;
#define DCH2ECON DCH2ECON
extern volatile unsigned int   DCH2ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH2ECONbits_t;
extern volatile __DCH2ECONbits_t DCH2ECONbits;
extern volatile unsigned int        DCH2ECONCLR;
extern volatile unsigned int        DCH2ECONSET;
extern volatile unsigned int        DCH2ECONINV;
#define DCH2INT DCH2INT
extern volatile unsigned int   DCH2INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH2INTbits_t;
extern volatile __DCH2INTbits_t DCH2INTbits;
extern volatile unsigned int        DCH2INTCLR;
extern volatile unsigned int        DCH2INTSET;
extern volatile unsigned int        DCH2INTINV;
#define DCH2SSA DCH2SSA
extern volatile unsigned int   DCH2SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH2SSAbits_t;
extern volatile __DCH2SSAbits_t DCH2SSAbits;
extern volatile unsigned int        DCH2SSACLR;
extern volatile unsigned int        DCH2SSASET;
extern volatile unsigned int        DCH2SSAINV;
#define DCH2DSA DCH2DSA
extern volatile unsigned int   DCH2DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH2DSAbits_t;
extern volatile __DCH2DSAbits_t DCH2DSAbits;
extern volatile unsigned int        DCH2DSACLR;
extern volatile unsigned int        DCH2DSASET;
extern volatile unsigned int        DCH2DSAINV;
#define DCH2SSIZ DCH2SSIZ
extern volatile unsigned int   DCH2SSIZ;
extern volatile unsigned int        DCH2SSIZCLR;
extern volatile unsigned int        DCH2SSIZSET;
extern volatile unsigned int        DCH2SSIZINV;
#define DCH2DSIZ DCH2DSIZ
extern volatile unsigned int   DCH2DSIZ;
extern volatile unsigned int        DCH2DSIZCLR;
extern volatile unsigned int        DCH2DSIZSET;
extern volatile unsigned int        DCH2DSIZINV;
#define DCH2SPTR DCH2SPTR
extern volatile unsigned int   DCH2SPTR;
extern volatile unsigned int        DCH2SPTRCLR;
extern volatile unsigned int        DCH2SPTRSET;
extern volatile unsigned int        DCH2SPTRINV;
#define DCH2DPTR DCH2DPTR
extern volatile unsigned int   DCH2DPTR;
extern volatile unsigned int        DCH2DPTRCLR;
extern volatile unsigned int        DCH2DPTRSET;
extern volatile unsigned int        DCH2DPTRINV;
#define DCH2CSIZ DCH2CSIZ
extern volatile unsigned int   DCH2CSIZ;
extern volatile unsigned int        DCH2CSIZCLR;
extern volatile unsigned int        DCH2CSIZSET;
extern volatile unsigned int        DCH2CSIZINV;
#define DCH2CPTR DCH2CPTR
extern volatile unsigned int   DCH2CPTR;
extern volatile unsigned int        DCH2CPTRCLR;
extern volatile unsigned int        DCH2CPTRSET;
extern volatile unsigned int        DCH2CPTRINV;
#define DCH2DAT DCH2DAT
extern volatile unsigned int   DCH2DAT;
extern volatile unsigned int        DCH2DATCLR;
extern volatile unsigned int        DCH2DATSET;
extern volatile unsigned int        DCH2DATINV;
#define DCH3CON DCH3CON
extern volatile unsigned int   DCH3CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH3CONbits_t;
extern volatile __DCH3CONbits_t DCH3CONbits;
extern volatile unsigned int        DCH3CONCLR;
extern volatile unsigned int        DCH3CONSET;
extern volatile unsigned int        DCH3CONINV;
#define DCH3ECON DCH3ECON
extern volatile unsigned int   DCH3ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH3ECONbits_t;
extern volatile __DCH3ECONbits_t DCH3ECONbits;
extern volatile unsigned int        DCH3ECONCLR;
extern volatile unsigned int        DCH3ECONSET;
extern volatile unsigned int        DCH3ECONINV;
#define DCH3INT DCH3INT
extern volatile unsigned int   DCH3INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH3INTbits_t;
extern volatile __DCH3INTbits_t DCH3INTbits;
extern volatile unsigned int        DCH3INTCLR;
extern volatile unsigned int        DCH3INTSET;
extern volatile unsigned int        DCH3INTINV;
#define DCH3SSA DCH3SSA
extern volatile unsigned int   DCH3SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH3SSAbits_t;
extern volatile __DCH3SSAbits_t DCH3SSAbits;
extern volatile unsigned int        DCH3SSACLR;
extern volatile unsigned int        DCH3SSASET;
extern volatile unsigned int        DCH3SSAINV;
#define DCH3DSA DCH3DSA
extern volatile unsigned int   DCH3DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH3DSAbits_t;
extern volatile __DCH3DSAbits_t DCH3DSAbits;
extern volatile unsigned int        DCH3DSACLR;
extern volatile unsigned int        DCH3DSASET;
extern volatile unsigned int        DCH3DSAINV;
#define DCH3SSIZ DCH3SSIZ
extern volatile unsigned int   DCH3SSIZ;
extern volatile unsigned int        DCH3SSIZCLR;
extern volatile unsigned int        DCH3SSIZSET;
extern volatile unsigned int        DCH3SSIZINV;
#define DCH3DSIZ DCH3DSIZ
extern volatile unsigned int   DCH3DSIZ;
extern volatile unsigned int        DCH3DSIZCLR;
extern volatile unsigned int        DCH3DSIZSET;
extern volatile unsigned int        DCH3DSIZINV;
#define DCH3SPTR DCH3SPTR
extern volatile unsigned int   DCH3SPTR;
extern volatile unsigned int        DCH3SPTRCLR;
extern volatile unsigned int        DCH3SPTRSET;
extern volatile unsigned int        DCH3SPTRINV;
#define DCH3DPTR DCH3DPTR
extern volatile unsigned int   DCH3DPTR;
extern volatile unsigned int        DCH3DPTRCLR;
extern volatile unsigned int        DCH3DPTRSET;
extern volatile unsigned int        DCH3DPTRINV;
#define DCH3CSIZ DCH3CSIZ
extern volatile unsigned int   DCH3CSIZ;
extern volatile unsigned int        DCH3CSIZCLR;
extern volatile unsigned int        DCH3CSIZSET;
extern volatile unsigned int        DCH3CSIZINV;
#define DCH3CPTR DCH3CPTR
extern volatile unsigned int   DCH3CPTR;
extern volatile unsigned int        DCH3CPTRCLR;
extern volatile unsigned int        DCH3CPTRSET;
extern volatile unsigned int        DCH3CPTRINV;
#define DCH3DAT DCH3DAT
extern volatile unsigned int   DCH3DAT;
extern volatile unsigned int        DCH3DATCLR;
extern volatile unsigned int        DCH3DATSET;
extern volatile unsigned int        DCH3DATINV;
#define INTCON INTCON
extern volatile unsigned int   INTCON;
typedef struct {
  unsigned INT0EP:1;
  unsigned INT1EP:1;
  unsigned INT2EP:1;
  unsigned INT3EP:1;
  unsigned INT4EP:1;
  unsigned :3;
  unsigned TPC:3;
  unsigned :1;
  unsigned MVEC:1;
  unsigned :3;
  unsigned VS:7;
} __INTCONbits_t;
extern volatile __INTCONbits_t INTCONbits;
extern volatile unsigned int        INTCONCLR;
extern volatile unsigned int        INTCONSET;
extern volatile unsigned int        INTCONINV;
#define PRISS PRISS
extern volatile unsigned int   PRISS;
typedef struct {
  unsigned SEVCSS:1;
  unsigned :3;
  unsigned PRI1SS:1;
  unsigned :3;
  unsigned PRI2SS:1;
  unsigned :3;
  unsigned PRI3SS:1;
  unsigned :3;
  unsigned PRI4SS:1;
  unsigned :3;
  unsigned PRI5SS:1;
  unsigned :3;
  unsigned PRI6SS:1;
  unsigned :3;
  unsigned PRI7SS:1;
} __PRISSbits_t;
extern volatile __PRISSbits_t PRISSbits;
extern volatile unsigned int        PRISSCLR;
extern volatile unsigned int        PRISSSET;
extern volatile unsigned int        PRISSINV;
#define INTSTAT INTSTAT
extern volatile unsigned int   INTSTAT;
typedef struct {
  unsigned SIRQ:8;
  unsigned SRIPL:3;
} __INTSTATbits_t;
extern volatile __INTSTATbits_t INTSTATbits;
extern volatile unsigned int        INTSTATCLR;
extern volatile unsigned int        INTSTATSET;
extern volatile unsigned int        INTSTATINV;
#define IPTMR IPTMR
extern volatile unsigned int   IPTMR;
typedef struct {
  unsigned IPTMR:32;
} __IPTMRbits_t;
extern volatile __IPTMRbits_t IPTMRbits;
extern volatile unsigned int        IPTMRCLR;
extern volatile unsigned int        IPTMRSET;
extern volatile unsigned int        IPTMRINV;
#define IFS0 IFS0
extern volatile unsigned int   IFS0;
typedef struct {
  unsigned CTIF:1;
  unsigned CS0IF:1;
  unsigned CS1IF:1;
  unsigned INT0IF:1;
  unsigned INT1IF:1;
  unsigned INT2IF:1;
  unsigned INT3IF:1;
  unsigned INT4IF:1;
  unsigned CNAIF:1;
  unsigned CNBIF:1;
  unsigned CNCIF:1;
  unsigned CNDIF:1;
  unsigned :5;
  unsigned T1IF:1;
  unsigned T2IF:1;
  unsigned T3IF:1;
  unsigned :3;
  unsigned CMP1IF:1;
  unsigned CMP2IF:1;
  unsigned CMP3IF:1;
  unsigned :3;
  unsigned USBIF:1;
} __IFS0bits_t;
extern volatile __IFS0bits_t IFS0bits;
extern volatile unsigned int        IFS0CLR;
extern volatile unsigned int        IFS0SET;
extern volatile unsigned int        IFS0INV;
#define IFS1 IFS1
extern volatile unsigned int   IFS1;
typedef struct {
  unsigned RTCCIF:1;
  unsigned AD1IF:1;
  unsigned :2;
  unsigned LVDIF:1;
  unsigned CLC1IF:1;
  unsigned CLC2IF:1;
  unsigned CLC3IF:1;
  unsigned CLC4IF:1;
  unsigned SPI1EIF:1;
  unsigned SPI1TXIF:1;
  unsigned SPI1RXIF:1;
  unsigned SPI2EIF:1;
  unsigned SPI2TXIF:1;
  unsigned SPI2RXIF:1;
  unsigned SPI3EIF:1;
  unsigned SPI3TXIF:1;
  unsigned SPI3RXIF:1;
  unsigned :3;
  unsigned U1RXIF:1;
  unsigned U1TXIF:1;
  unsigned U1EIF:1;
  unsigned U2RXIF:1;
  unsigned U2TXIF:1;
  unsigned U2EIF:1;
  unsigned U3RXIF:1;
  unsigned U3TXIF:1;
  unsigned U3EIF:1;
} __IFS1bits_t;
extern volatile __IFS1bits_t IFS1bits;
extern volatile unsigned int        IFS1CLR;
extern volatile unsigned int        IFS1SET;
extern volatile unsigned int        IFS1INV;
#define IFS2 IFS2
extern volatile unsigned int   IFS2;
typedef struct {
  unsigned :1;
  unsigned I2C1SIF:1;
  unsigned I2C1MIF:1;
  unsigned I2C1BCIF:1;
  unsigned I2C2SIF:1;
  unsigned I2C2MIF:1;
  unsigned I2C2BCIF:1;
  unsigned I2C3SIF:1;
  unsigned I2C3MIF:1;
  unsigned I2C3BCIF:1;
  unsigned CCP1IF:1;
  unsigned CCT1IF:1;
  unsigned CCP2IF:1;
  unsigned CCT2IF:1;
  unsigned CCP3IF:1;
  unsigned CCT3IF:1;
  unsigned CCP4IF:1;
  unsigned CCT4IF:1;
  unsigned CCP5IF:1;
  unsigned CCT5IF:1;
  unsigned CCP6IF:1;
  unsigned CCT6IF:1;
  unsigned CCP7IF:1;
  unsigned CCT7IF:1;
  unsigned CCP8IF:1;
  unsigned CCT8IF:1;
  unsigned CCP9IF:1;
  unsigned CCT9IF:1;
  unsigned FSTIF:1;
  unsigned :1;
  unsigned NVMIF:1;
  unsigned CPCIF:1;
} __IFS2bits_t;
extern volatile __IFS2bits_t IFS2bits;
extern volatile unsigned int        IFS2CLR;
extern volatile unsigned int        IFS2SET;
extern volatile unsigned int        IFS2INV;
#define IFS3 IFS3
extern volatile unsigned int   IFS3;
typedef struct {
  unsigned :1;
  unsigned ECCBEIF:1;
  unsigned DMA0IF:1;
  unsigned DMA1IF:1;
  unsigned DMA2IF:1;
  unsigned DMA3IF:1;
} __IFS3bits_t;
extern volatile __IFS3bits_t IFS3bits;
extern volatile unsigned int        IFS3CLR;
extern volatile unsigned int        IFS3SET;
extern volatile unsigned int        IFS3INV;
#define IEC0 IEC0
extern volatile unsigned int   IEC0;
typedef struct {
  unsigned CTIE:1;
  unsigned CS0IE:1;
  unsigned CS1IE:1;
  unsigned INT0IE:1;
  unsigned INT1IE:1;
  unsigned INT2IE:1;
  unsigned INT3IE:1;
  unsigned INT4IE:1;
  unsigned CNAIE:1;
  unsigned CNBIE:1;
  unsigned CNCIE:1;
  unsigned CNDIE:1;
  unsigned :5;
  unsigned T1IE:1;
  unsigned T2IE:1;
  unsigned T3IE:1;
  unsigned :3;
  unsigned CMP1IE:1;
  unsigned CMP2IE:1;
  unsigned CMP3IE:1;
  unsigned :3;
  unsigned USBIE:1;
} __IEC0bits_t;
extern volatile __IEC0bits_t IEC0bits;
extern volatile unsigned int        IEC0CLR;
extern volatile unsigned int        IEC0SET;
extern volatile unsigned int        IEC0INV;
#define IEC1 IEC1
extern volatile unsigned int   IEC1;
typedef struct {
  unsigned RTCCIE:1;
  unsigned AD1IE:1;
  unsigned :2;
  unsigned LVDIE:1;
  unsigned CLC1IE:1;
  unsigned CLC2IE:1;
  unsigned CLC3IE:1;
  unsigned CLC4IE:1;
  unsigned SPI1EIE:1;
  unsigned SPI1TXIE:1;
  unsigned SPI1RXIE:1;
  unsigned SPI2EIE:1;
  unsigned SPI2TXIE:1;
  unsigned SPI2RXIE:1;
  unsigned SPI3EIE:1;
  unsigned SPI3TXIE:1;
  unsigned SPI3RXIE:1;
  unsigned :3;
  unsigned U1RXIE:1;
  unsigned U1TXIE:1;
  unsigned U1EIE:1;
  unsigned U2RXIE:1;
  unsigned U2TXIE:1;
  unsigned U2EIE:1;
  unsigned U3RXIE:1;
  unsigned U3TXIE:1;
  unsigned U3EIE:1;
} __IEC1bits_t;
extern volatile __IEC1bits_t IEC1bits;
extern volatile unsigned int        IEC1CLR;
extern volatile unsigned int        IEC1SET;
extern volatile unsigned int        IEC1INV;
#define IEC2 IEC2
extern volatile unsigned int   IEC2;
typedef struct {
  unsigned :1;
  unsigned I2C1SIE:1;
  unsigned I2C1MIE:1;
  unsigned I2C1BCIE:1;
  unsigned I2C2SIE:1;
  unsigned I2C2MIE:1;
  unsigned I2C2BCIE:1;
  unsigned I2C3SIE:1;
  unsigned I2C3MIE:1;
  unsigned I2C3BCIE:1;
  unsigned CCP1IE:1;
  unsigned CCT1IE:1;
  unsigned CCP2IE:1;
  unsigned CCT2IE:1;
  unsigned CCP3IE:1;
  unsigned CCT3IE:1;
  unsigned CCP4IE:1;
  unsigned CCT4IE:1;
  unsigned CCP5IE:1;
  unsigned CCT5IE:1;
  unsigned CCP6IE:1;
  unsigned CCT6IE:1;
  unsigned CCP7IE:1;
  unsigned CCT7IE:1;
  unsigned CCP8IE:1;
  unsigned CCT8IE:1;
  unsigned CCP9IE:1;
  unsigned CCT9IE:1;
  unsigned FSTIE:1;
  unsigned :1;
  unsigned NVMIE:1;
  unsigned CPCIE:1;
} __IEC2bits_t;
extern volatile __IEC2bits_t IEC2bits;
extern volatile unsigned int        IEC2CLR;
extern volatile unsigned int        IEC2SET;
extern volatile unsigned int        IEC2INV;
#define IEC3 IEC3
extern volatile unsigned int   IEC3;
typedef struct {
  unsigned :1;
  unsigned ECCBEIE:1;
  unsigned DMA0IE:1;
  unsigned DMA1IE:1;
  unsigned DMA2IE:1;
  unsigned DMA3IE:1;
} __IEC3bits_t;
extern volatile __IEC3bits_t IEC3bits;
extern volatile unsigned int        IEC3CLR;
extern volatile unsigned int        IEC3SET;
extern volatile unsigned int        IEC3INV;
#define IPC0 IPC0
extern volatile unsigned int   IPC0;
typedef struct {
  unsigned CTIS:2;
  unsigned CTIP:3;
  unsigned :3;
  unsigned CS0IS:2;
  unsigned CS0IP:3;
  unsigned :3;
  unsigned CS1IS:2;
  unsigned CS1IP:3;
  unsigned :3;
  unsigned INT0IS:2;
  unsigned INT0IP:3;
} __IPC0bits_t;
extern volatile __IPC0bits_t IPC0bits;
extern volatile unsigned int        IPC0CLR;
extern volatile unsigned int        IPC0SET;
extern volatile unsigned int        IPC0INV;
#define IPC1 IPC1
extern volatile unsigned int   IPC1;
typedef struct {
  unsigned INT1IS:2;
  unsigned INT1IP:3;
  unsigned :3;
  unsigned INT2IS:2;
  unsigned INT2IP:3;
  unsigned :3;
  unsigned INT3IS:2;
  unsigned INT3IP:3;
  unsigned :3;
  unsigned INT4IS:2;
  unsigned INT4IP:3;
} __IPC1bits_t;
extern volatile __IPC1bits_t IPC1bits;
extern volatile unsigned int        IPC1CLR;
extern volatile unsigned int        IPC1SET;
extern volatile unsigned int        IPC1INV;
#define IPC2 IPC2
extern volatile unsigned int   IPC2;
typedef struct {
  unsigned CNAIS:2;
  unsigned CNAIP:3;
  unsigned :3;
  unsigned CNBIS:2;
  unsigned CNBIP:3;
  unsigned :3;
  unsigned CNCIS:2;
  unsigned CNCIP:3;
  unsigned :3;
  unsigned CNDIS:2;
  unsigned CNDIP:3;
} __IPC2bits_t;
extern volatile __IPC2bits_t IPC2bits;
extern volatile unsigned int        IPC2CLR;
extern volatile unsigned int        IPC2SET;
extern volatile unsigned int        IPC2INV;
#define IPC3 IPC3
extern volatile unsigned int   IPC3;
extern volatile unsigned int        IPC3CLR;
extern volatile unsigned int        IPC3SET;
extern volatile unsigned int        IPC3INV;
#define IPC4 IPC4
extern volatile unsigned int   IPC4;
typedef struct {
  unsigned :8;
  unsigned T1IS:2;
  unsigned T1IP:3;
  unsigned :3;
  unsigned T2IS:2;
  unsigned T2IP:3;
  unsigned :3;
  unsigned T3IS:2;
  unsigned T3IP:3;
} __IPC4bits_t;
extern volatile __IPC4bits_t IPC4bits;
extern volatile unsigned int        IPC4CLR;
extern volatile unsigned int        IPC4SET;
extern volatile unsigned int        IPC4INV;
#define IPC5 IPC5
extern volatile unsigned int   IPC5;
typedef struct {
  unsigned :24;
  unsigned CMP1IS:2;
  unsigned CMP1IP:3;
} __IPC5bits_t;
extern volatile __IPC5bits_t IPC5bits;
extern volatile unsigned int        IPC5CLR;
extern volatile unsigned int        IPC5SET;
extern volatile unsigned int        IPC5INV;
#define IPC6 IPC6
extern volatile unsigned int   IPC6;
typedef struct {
  unsigned CMP2IS:2;
  unsigned CMP2IP:3;
  unsigned :3;
  unsigned CMP3IS:2;
  unsigned CMP3IP:3;
} __IPC6bits_t;
extern volatile __IPC6bits_t IPC6bits;
extern volatile unsigned int        IPC6CLR;
extern volatile unsigned int        IPC6SET;
extern volatile unsigned int        IPC6INV;
#define IPC7 IPC7
extern volatile unsigned int   IPC7;
typedef struct {
  unsigned :8;
  unsigned USBIS:2;
  unsigned USBIP:3;
} __IPC7bits_t;
extern volatile __IPC7bits_t IPC7bits;
extern volatile unsigned int        IPC7CLR;
extern volatile unsigned int        IPC7SET;
extern volatile unsigned int        IPC7INV;
#define IPC8 IPC8
extern volatile unsigned int   IPC8;
typedef struct {
  unsigned RTCCIS:2;
  unsigned RTCCIP:3;
  unsigned :3;
  unsigned AD1IS:2;
  unsigned AD1IP:3;
} __IPC8bits_t;
extern volatile __IPC8bits_t IPC8bits;
extern volatile unsigned int        IPC8CLR;
extern volatile unsigned int        IPC8SET;
extern volatile unsigned int        IPC8INV;
#define IPC9 IPC9
extern volatile unsigned int   IPC9;
typedef struct {
  unsigned LVDIS:2;
  unsigned LVDIP:3;
  unsigned :3;
  unsigned CLC1IS:2;
  unsigned CLC1IP:3;
  unsigned :3;
  unsigned CLC2IS:2;
  unsigned CLC2IP:3;
  unsigned :3;
  unsigned CLC3IS:2;
  unsigned CLC3IP:3;
} __IPC9bits_t;
extern volatile __IPC9bits_t IPC9bits;
extern volatile unsigned int        IPC9CLR;
extern volatile unsigned int        IPC9SET;
extern volatile unsigned int        IPC9INV;
#define IPC10 IPC10
extern volatile unsigned int   IPC10;
typedef struct {
  unsigned CLC4IS:2;
  unsigned CLC4IP:3;
  unsigned :3;
  unsigned SPI1EIS:2;
  unsigned SPI1EIP:3;
  unsigned :3;
  unsigned SPI1TXIS:2;
  unsigned SPI1TXIP:3;
  unsigned :3;
  unsigned SPI1RXIS:2;
  unsigned SPI1RXIP:3;
} __IPC10bits_t;
extern volatile __IPC10bits_t IPC10bits;
extern volatile unsigned int        IPC10CLR;
extern volatile unsigned int        IPC10SET;
extern volatile unsigned int        IPC10INV;
#define IPC11 IPC11
extern volatile unsigned int   IPC11;
typedef struct {
  unsigned SPI2EIS:2;
  unsigned SPI2EIP:3;
  unsigned :3;
  unsigned SPI2TXIS:2;
  unsigned SPI2TXIP:3;
  unsigned :3;
  unsigned SPI2RXIS:2;
  unsigned SPI2RXIP:3;
  unsigned :3;
  unsigned SPI3EIS:2;
  unsigned SPI3EIP:3;
} __IPC11bits_t;
extern volatile __IPC11bits_t IPC11bits;
extern volatile unsigned int        IPC11CLR;
extern volatile unsigned int        IPC11SET;
extern volatile unsigned int        IPC11INV;
#define IPC12 IPC12
extern volatile unsigned int   IPC12;
typedef struct {
  unsigned SPI3TXIS:2;
  unsigned SPI3TXIP:3;
  unsigned :3;
  unsigned SPI3RXIS:2;
  unsigned SPI3RXIP:3;
} __IPC12bits_t;
extern volatile __IPC12bits_t IPC12bits;
extern volatile unsigned int        IPC12CLR;
extern volatile unsigned int        IPC12SET;
extern volatile unsigned int        IPC12INV;
#define IPC13 IPC13
extern volatile unsigned int   IPC13;
typedef struct {
  unsigned :8;
  unsigned U1RXIS:2;
  unsigned U1RXIP:3;
  unsigned :3;
  unsigned U1TXIS:2;
  unsigned U1TXIP:3;
  unsigned :3;
  unsigned U1EIS:2;
  unsigned U1EIP:3;
} __IPC13bits_t;
extern volatile __IPC13bits_t IPC13bits;
extern volatile unsigned int        IPC13CLR;
extern volatile unsigned int        IPC13SET;
extern volatile unsigned int        IPC13INV;
#define IPC14 IPC14
extern volatile unsigned int   IPC14;
typedef struct {
  unsigned U2RXIS:2;
  unsigned U2RXIP:3;
  unsigned :3;
  unsigned U2TXIS:2;
  unsigned U2TXIP:3;
  unsigned :3;
  unsigned U2EIS:2;
  unsigned U2EIP:3;
  unsigned :3;
  unsigned U3RXIS:2;
  unsigned U3RXIP:3;
} __IPC14bits_t;
extern volatile __IPC14bits_t IPC14bits;
extern volatile unsigned int        IPC14CLR;
extern volatile unsigned int        IPC14SET;
extern volatile unsigned int        IPC14INV;
#define IPC15 IPC15
extern volatile unsigned int   IPC15;
typedef struct {
  unsigned U3TXIS:2;
  unsigned U3TXIP:3;
  unsigned :3;
  unsigned U3EIS:2;
  unsigned U3EIP:3;
} __IPC15bits_t;
extern volatile __IPC15bits_t IPC15bits;
extern volatile unsigned int        IPC15CLR;
extern volatile unsigned int        IPC15SET;
extern volatile unsigned int        IPC15INV;
#define IPC16 IPC16
extern volatile unsigned int   IPC16;
typedef struct {
  unsigned :8;
  unsigned I2C1SIS:2;
  unsigned I2C1SIP:3;
  unsigned :3;
  unsigned I2C1MIS:2;
  unsigned I2C1MIP:3;
  unsigned :3;
  unsigned I2C1BCIS:2;
  unsigned I2C1BCIP:3;
} __IPC16bits_t;
extern volatile __IPC16bits_t IPC16bits;
extern volatile unsigned int        IPC16CLR;
extern volatile unsigned int        IPC16SET;
extern volatile unsigned int        IPC16INV;
#define IPC17 IPC17
extern volatile unsigned int   IPC17;
typedef struct {
  unsigned I2C2SIS:2;
  unsigned I2C2SIP:3;
  unsigned :3;
  unsigned I2C2MIS:2;
  unsigned I2C2MIP:3;
  unsigned :3;
  unsigned I2C2BCIS:2;
  unsigned I2C2BCIP:3;
  unsigned :3;
  unsigned I2C3SIS:2;
  unsigned I2C3SIP:3;
} __IPC17bits_t;
extern volatile __IPC17bits_t IPC17bits;
extern volatile unsigned int        IPC17CLR;
extern volatile unsigned int        IPC17SET;
extern volatile unsigned int        IPC17INV;
#define IPC18 IPC18
extern volatile unsigned int   IPC18;
typedef struct {
  unsigned I2C3MIS:2;
  unsigned I2C3MIP:3;
  unsigned :3;
  unsigned I2C3BCIS:2;
  unsigned I2C3BCIP:3;
  unsigned :3;
  unsigned CCP1IS:2;
  unsigned CCP1IP:3;
  unsigned :3;
  unsigned CCT1IS:2;
  unsigned CCT1IP:3;
} __IPC18bits_t;
extern volatile __IPC18bits_t IPC18bits;
extern volatile unsigned int        IPC18CLR;
extern volatile unsigned int        IPC18SET;
extern volatile unsigned int        IPC18INV;
#define IPC19 IPC19
extern volatile unsigned int   IPC19;
typedef struct {
  unsigned CCP2IS:2;
  unsigned CCP2IP:3;
  unsigned :3;
  unsigned CCT2IS:2;
  unsigned CCT2IP:3;
  unsigned :3;
  unsigned CCP3IS:2;
  unsigned CCP3IP:3;
  unsigned :3;
  unsigned CCT3IS:2;
  unsigned CCT3IP:3;
} __IPC19bits_t;
extern volatile __IPC19bits_t IPC19bits;
extern volatile unsigned int        IPC19CLR;
extern volatile unsigned int        IPC19SET;
extern volatile unsigned int        IPC19INV;
#define IPC20 IPC20
extern volatile unsigned int   IPC20;
typedef struct {
  unsigned CCP4IS:2;
  unsigned CCP4IP:3;
  unsigned :3;
  unsigned CCT4IS:2;
  unsigned CCT4IP:3;
  unsigned :3;
  unsigned CCP5IS:2;
  unsigned CCP5IP:3;
  unsigned :3;
  unsigned CCT5IS:2;
  unsigned CCT5IP:3;
} __IPC20bits_t;
extern volatile __IPC20bits_t IPC20bits;
extern volatile unsigned int        IPC20CLR;
extern volatile unsigned int        IPC20SET;
extern volatile unsigned int        IPC20INV;
#define IPC21 IPC21
extern volatile unsigned int   IPC21;
typedef struct {
  unsigned CCP6IS:2;
  unsigned CCP6IP:3;
  unsigned :3;
  unsigned CCT6IS:2;
  unsigned CCT6IP:3;
  unsigned :3;
  unsigned CCP7IS:2;
  unsigned CCP7IP:3;
  unsigned :3;
  unsigned CCT7IS:2;
  unsigned CCT7IP:3;
} __IPC21bits_t;
extern volatile __IPC21bits_t IPC21bits;
extern volatile unsigned int        IPC21CLR;
extern volatile unsigned int        IPC21SET;
extern volatile unsigned int        IPC21INV;
#define IPC22 IPC22
extern volatile unsigned int   IPC22;
typedef struct {
  unsigned CCP8IS:2;
  unsigned CCP8IP:3;
  unsigned :3;
  unsigned CCT8IS:2;
  unsigned CCT8IP:3;
  unsigned :3;
  unsigned CCP9IS:2;
  unsigned CCP9IP:3;
  unsigned :3;
  unsigned CCT9IS:2;
  unsigned CCT9IP:3;
} __IPC22bits_t;
extern volatile __IPC22bits_t IPC22bits;
extern volatile unsigned int        IPC22CLR;
extern volatile unsigned int        IPC22SET;
extern volatile unsigned int        IPC22INV;
#define IPC23 IPC23
extern volatile unsigned int   IPC23;
typedef struct {
  unsigned FSTIS:2;
  unsigned FSTIP:3;
  unsigned :11;
  unsigned NVMIS:2;
  unsigned NVMIP:3;
  unsigned :3;
  unsigned CPCIS:2;
  unsigned CPCIP:3;
} __IPC23bits_t;
extern volatile __IPC23bits_t IPC23bits;
extern volatile unsigned int        IPC23CLR;
extern volatile unsigned int        IPC23SET;
extern volatile unsigned int        IPC23INV;
#define IPC24 IPC24
extern volatile unsigned int   IPC24;
typedef struct {
  unsigned :8;
  unsigned ECCBEIS:2;
  unsigned ECCBEIP:3;
  unsigned :3;
  unsigned DMA0IS:2;
  unsigned DMA0IP:3;
  unsigned :3;
  unsigned DMA1IS:2;
  unsigned DMA1IP:3;
} __IPC24bits_t;
extern volatile __IPC24bits_t IPC24bits;
extern volatile unsigned int        IPC24CLR;
extern volatile unsigned int        IPC24SET;
extern volatile unsigned int        IPC24INV;
#define IPC25 IPC25
extern volatile unsigned int   IPC25;
typedef struct {
  unsigned DMA2IS:2;
  unsigned DMA2IP:3;
  unsigned :3;
  unsigned DMA3IS:2;
  unsigned DMA3IP:3;
} __IPC25bits_t;
extern volatile __IPC25bits_t IPC25bits;
extern volatile unsigned int        IPC25CLR;
extern volatile unsigned int        IPC25SET;
extern volatile unsigned int        IPC25INV;
#define UDID1 UDID1
extern volatile unsigned int   UDID1;
typedef struct {
  unsigned UDID:32;
} __UDID1bits_t;
extern volatile __UDID1bits_t UDID1bits;
#define UDID2 UDID2
extern volatile unsigned int   UDID2;
typedef struct {
  unsigned UDID:32;
} __UDID2bits_t;
extern volatile __UDID2bits_t UDID2bits;
#define UDID3 UDID3
extern volatile unsigned int   UDID3;
typedef struct {
  unsigned UDID:32;
} __UDID3bits_t;
extern volatile __UDID3bits_t UDID3bits;
#define UDID4 UDID4
extern volatile unsigned int   UDID4;
typedef struct {
  unsigned UDID:32;
} __UDID4bits_t;
extern volatile __UDID4bits_t UDID4bits;
#define UDID5 UDID5
extern volatile unsigned int   UDID5;
typedef struct {
  unsigned UDID:32;
} __UDID5bits_t;
extern volatile __UDID5bits_t UDID5bits;
#define FDEVOPT FDEVOPT
extern volatile unsigned int   FDEVOPT;
typedef union {
  struct {
    unsigned :3;
    unsigned SOSCHP:1;
    unsigned ALTI2C:1;
    unsigned :9;
    unsigned FUSBIDIO:1;
    unsigned FVBUSIO:1;
    unsigned USERID:16;
  };
  struct {
    unsigned w:32;
  };
} __FDEVOPTbits_t;
extern volatile __FDEVOPTbits_t FDEVOPTbits;
#define FICD FICD
extern volatile unsigned int   FICD;
typedef union {
  struct {
    unsigned :2;
    unsigned JTAGEN:1;
    unsigned ICS:2;
  };
  struct {
    unsigned w:32;
  };
} __FICDbits_t;
extern volatile __FICDbits_t FICDbits;
#define FPOR FPOR
extern volatile unsigned int   FPOR;
typedef union {
  struct {
    unsigned BOREN:2;
    unsigned RETVR:1;
    unsigned LPBOREN:1;
  };
  struct {
    unsigned w:32;
  };
} __FPORbits_t;
extern volatile __FPORbits_t FPORbits;
#define FWDT FWDT
extern volatile unsigned int   FWDT;
typedef union {
  struct {
    unsigned SWDTPS:5;
    unsigned FWDTWINSZ:2;
    unsigned WINDIS:1;
    unsigned RWDTPS:5;
    unsigned RCLKSEL:2;
    unsigned FWDTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __FWDTbits_t;
extern volatile __FWDTbits_t FWDTbits;
#define FOSCSEL FOSCSEL
extern volatile unsigned int   FOSCSEL;
typedef union {
  struct {
    unsigned FNOSC:3;
    unsigned :1;
    unsigned PLLSRC:1;
    unsigned :1;
    unsigned SOSCEN:1;
    unsigned IESO:1;
    unsigned POSCMOD:2;
    unsigned OSCIOFNC:1;
    unsigned :1;
    unsigned SOSCSEL:1;
    unsigned :1;
    unsigned FCKSM:2;
  };
  struct {
    unsigned w:32;
  };
} __FOSCSELbits_t;
extern volatile __FOSCSELbits_t FOSCSELbits;
#define FSEC FSEC
extern volatile unsigned int   FSEC;
typedef union {
  struct {
    unsigned :31;
    unsigned CP:1;
  };
  struct {
    unsigned w:32;
  };
} __FSECbits_t;
extern volatile __FSECbits_t FSECbits;
#define AFDEVOPT AFDEVOPT
extern volatile unsigned int   AFDEVOPT;
typedef union {
  struct {
    unsigned :3;
    unsigned SOSCHP:1;
    unsigned ALTI2C:1;
    unsigned :9;
    unsigned FUSBIDIO:1;
    unsigned FVBUSIO:1;
    unsigned USERID:16;
  };
  struct {
    unsigned w:32;
  };
} __AFDEVOPTbits_t;
extern volatile __AFDEVOPTbits_t AFDEVOPTbits;
#define AFICD AFICD
extern volatile unsigned int   AFICD;
typedef union {
  struct {
    unsigned :2;
    unsigned JTAGEN:1;
    unsigned ICS:2;
  };
  struct {
    unsigned w:32;
  };
} __AFICDbits_t;
extern volatile __AFICDbits_t AFICDbits;
#define AFPOR AFPOR
extern volatile unsigned int   AFPOR;
typedef union {
  struct {
    unsigned BOREN:2;
    unsigned RETVR:1;
    unsigned LPBOREN:1;
  };
  struct {
    unsigned w:32;
  };
} __AFPORbits_t;
extern volatile __AFPORbits_t AFPORbits;
#define AFWDT AFWDT
extern volatile unsigned int   AFWDT;
typedef union {
  struct {
    unsigned SWDTPS:5;
    unsigned FWDTWINSZ:2;
    unsigned WINDIS:1;
    unsigned RWDTPS:5;
    unsigned RCLKSEL:2;
    unsigned FWDTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __AFWDTbits_t;
extern volatile __AFWDTbits_t AFWDTbits;
#define AFOSCSEL AFOSCSEL
extern volatile unsigned int   AFOSCSEL;
typedef union {
  struct {
    unsigned FNOSC:3;
    unsigned :1;
    unsigned PLLSRC:1;
    unsigned :1;
    unsigned SOSCEN:1;
    unsigned IESO:1;
    unsigned POSCMOD:2;
    unsigned OSCIOFNC:1;
    unsigned :1;
    unsigned SOSCSEL:1;
    unsigned :1;
    unsigned FCKSM:2;
  };
  struct {
    unsigned w:32;
  };
} __AFOSCSELbits_t;
extern volatile __AFOSCSELbits_t AFOSCSELbits;
#define AFSEC AFSEC
extern volatile unsigned int   AFSEC;
typedef union {
  struct {
    unsigned :31;
    unsigned CP:1;
  };
  struct {
    unsigned w:32;
  };
} __AFSECbits_t;
extern volatile __AFSECbits_t AFSECbits;

#ifdef __cplusplus
}
#endif

#endif /* ifndef _SFR_STUB_H_ */
