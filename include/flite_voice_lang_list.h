#ifndef __FLITE_VOICE_LANG_LIST_H_
#define __FLITE_VOICE_LANG_LIST_H_

extern "C"{

#include "flite.h"
#include "khtn_vi_hvk.h"
#include "cmu_viH_lang.h"
#include "cmu_viH_lex.h"

cst_val *flite_set_voice_list(const char *voxdir);

void flite_set_lang_list(void);

}

#endif