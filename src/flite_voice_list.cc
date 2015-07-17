#include "flite_voice_lang_list.h"

cst_val *flite_set_voice_list(const char *voxdir)
{

	cst_voice *v = register_khtn_vi_hvk(voxdir);
   
   flite_voice_list = cons_val(voice_val(v),flite_voice_list);
   
   flite_voice_list = val_reverse(flite_voice_list);
   
   return flite_voice_list;
}
