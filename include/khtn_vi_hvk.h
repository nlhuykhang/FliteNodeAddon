#ifndef __KHTN_VI_HVK_H_
#define __KHTN_VI_HVK_H_

extern "C" {

#include <string.h>
#include "flite.h"
#include "cst_diphone.h"
#include "cmu_viH_lang.h"
#include "cmu_viH_lex.h"
#include "_diphone.h"

cst_voice *register_khtn_vi_hvk(const char *voxdir);

void unregister_khtn_vi_hvk(cst_voice *vox);

// cst_voice *khtn_vi_hvk_diphone = NULL;

}

#endif