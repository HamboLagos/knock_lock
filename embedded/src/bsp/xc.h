#ifndef _XC_H_
#define _XC_H_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef UNIT_TEST
#include <xc.h>
#else
#include "stubs/xc_stub.h"
#include "stubs/sfr_stub.h"
#endif

#ifdef __cplusplus
}
#endif

#endif /* ifndef _XC_H_ */
