#ifndef __DIPHONE_H_
#define __DIPHONE_H_

extern "C"{

#include "cst_diphone.h"
// #include "_lpc.h"
// #include "_res.h"
// #include "_residx.h"
// #include "_ressize.h"

extern const unsigned short _lpc[];
// extern const unsigned char _res[];
extern const unsigned int _resi[];
extern const unsigned char _ressize[];

extern const cst_sts_list _sts;

// extern const cst_diphone_entry _index[];

// extern const cst_diphone_db _db;

extern cst_diphone_db _db;

void init_diphone_db();

}

#endif