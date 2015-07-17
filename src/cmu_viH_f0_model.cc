#include <stdio.h>
#include <string.h>
#include "cst_hrg.h"
#include "cst_phoneset.h"
#include "cmu_viH_f0.h"
#include "cst_cart.h"



cst_utterance *cmu_viH_f0_model(cst_utterance *u)
{  
  /* F0 target model */
    cst_item *s,*t;
    cst_relation *targ_rel;
    float mean, stddev;

    targ_rel = utt_relation_create(u,"Target");
    mean = get_param_float(u->features,"target_f0_mean", 200.0);
    mean *= get_param_float(u->features,"f0_shift", 1.0);
    stddev = get_param_float(u->features,"target_f0_stddev", 34.0);

    s=relation_head(utt_relation(u,"Segment"));

    // printf("%f\n", item_feat_float(s,"end"));

    t = relation_append(targ_rel,NULL);
    item_set_float(t,"pos",0.0);
    item_set_float(t,"f0",mean+stddev);

    s=relation_tail(utt_relation(u,"Segment"));

    // printf("%f\n", item_feat_float(s,"end"));

    t = relation_append(targ_rel,NULL);

    item_set_float(t,"pos",item_feat_float(s,"end"));
    item_set_float(t,"f0",mean-stddev);

    return u;
}