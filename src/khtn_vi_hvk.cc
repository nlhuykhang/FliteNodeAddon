/*************************************************************************/
/*                                                                       */
/*                  Language Technologies Institute                      */
/*                     Carnegie Mellon University                        */
/*                      Copyright (c) 1999-2000                          */
/*                        All Rights Reserved.                           */
/*                                                                       */
/*  Permission is hereby granted, free of charge, to use and distribute  */
/*  this software and its documentation without restriction, including   */
/*  without limitation the rights to use, copy, modify, merge, publish,  */
/*  distribute, sublicense, and/or sell copies of this work, and to      */
/*  permit persons to whom this work is furnished to do so, subject to   */
/*  the following conditions:                                            */
/*   1. The code must retain the above copyright notice, this list of    */
/*      conditions and the following disclaimer.                         */
/*   2. Any modifications must be clearly marked as such.                */
/*   3. Original authors' names are not deleted.                         */
/*   4. The authors' names are not used to endorse or promote products   */
/*      derived from this software without specific prior written        */
/*      permission.                                                      */
/*                                                                       */
/*  CARNEGIE MELLON UNIVERSITY AND THE CONTRIBUTORS TO THIS WORK         */
/*  DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING      */
/*  ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT   */
/*  SHALL CARNEGIE MELLON UNIVERSITY NOR THE CONTRIBUTORS BE LIABLE      */
/*  FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES    */
/*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN   */
/*  AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,          */
/*  ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF       */
/*  THIS SOFTWARE.                                                       */
/*                                                                       */
/*************************************************************************/
/*             Author:  Alan W Black (awb@cs.cmu.edu)                    */
/*               Date:  April 2001                                       */
/*************************************************************************/
/*                                                                       */
/*  A simple diphone voice defintion			                 */
/*                                                                       */
/*************************************************************************/


#include "khtn_vi_hvk.h"


cst_voice *register_khtn_vi_hvk(const char *voxdir)
{
    //printf("register_khtn_vi_hvk:\n");
    
    init_diphone_db();

    //printf("%s\n", _db.name);

    //printf("%d\n", _db.sts->sample_rate);

    //printf("%s\n", _db.diphones[0].name);

    if(_db.sts->residuals != NULL){
        
        //printf("residuals != NULL\n");

        //printf("%d\n", strlen((const char*)_db.sts->residuals));
    
    }

    if(_db.sts->ressizes != NULL){
        
        //printf("ressizes != NULL\n");

        //printf("%d\n", strlen((const char*)_db.sts->ressizes));
    
    }

    if(_db.sts->frames != NULL){
        
        //printf("frames != NULL\n");

        //printf("%d\n", _db.sts->frames[0]);
    
    }

    if(_db.sts->resoffs != NULL){
        
        //printf("resoffs != NULL\n");

        //printf("%d\n", _db.sts->resoffs[1]);
    
    }


    // cst_voice *khtn_vi_hvk_diphone = NULL;
    cst_voice *v;
    cst_lexicon *lex;

    // if (khtn_vi_hvk_diphone)
    //     return khtn_vi_hvk_diphone;  /* Already registered */

    v = new_voice();
    v->name = "hvk";

    /* Sets up language specific parameters in the khtn_vi_hvk. */
    cmu_viH_lang_init(v);

    feat_set_string(v->features,"name","khtn_vi_hvk");

    feat_set_float(v->features,"int_f0_target_mean", 105.0);
    feat_set_float(v->features,"int_f0_target_stddev", 14.0);

    feat_set_float(v->features,"duration_stretch",1.0); 

    /* Lexicon */
    lex = cmu_viH_lex_init();
    feat_set(v->features,"lexicon",lexicon_val(lex));
    // feat_set(v->features,"postlex_func",uttfunc_val(lex->postlex));

    /* Waveform synthesis */
    feat_set(v->features,"wave_synth_func",uttfunc_val(&diphone_synth));
    // feat_set(v->features,"diphone_db",diphone_db_val(&khtn_vi_hvk_db));
    feat_set(v->features,"diphone_db",diphone_db_val(&_db));
    feat_set_int(v->features,"sample_rate",_db.sts->sample_rate);
/*    feat_set_string(v->features,"join_type","simple_join"); */
    
    feat_set_string(v->features,"join_type","modified_lpc");
    
    feat_set_string(v->features,"resynth_type","fixed");

    // khtn_vi_hvk_diphone = v;

    // return khtn_vi_hvk_diphone;
    return v;
}

void unregister_khtn_vi_hvk(cst_voice *vox)
{
    // cst_voice *khtn_vi_hvk_diphone = NULL;
    // if (vox != khtn_vi_hvk_diphone){
    //     return;    
    // }
	
    // delete_voice(vox);
    
    // khtn_vi_hvk_diphone = NULL;
}