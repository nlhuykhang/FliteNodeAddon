#include "flite_voice_lang_list.h"

void flite_set_lang_list(void)
{
   flite_add_lang("cmu_viH_lang", cmu_viH_lang_init, cmu_viH_lex_init);
}
