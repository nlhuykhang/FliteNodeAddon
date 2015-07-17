/*************************************************************************/
/*                                                                       */
/*                  Language Technologies Institute                      */
/*                     Carnegie Mellon University                        */
/*                         Copyright (c) 2013                            */
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
/*                                                                       */
/*  viH language support                                            */
/*                                                                       */
/*************************************************************************/
#include "flite.h"
#include "cst_val.h"
#include "cst_voice.h"
#include "cst_lexicon.h"
#include "cst_ffeatures.h"
#include "cmu_viH_lang.h"
#include "cmu_viH_f0.h"

static const char * const vi_punctuation = "\"'`.,:;!?(){}[]";
static const char * const vi_prepunctuation = "\"'`({[";
static const char * const vi_singlecharsymbols = "";
static const char * const vi_whitespace = " \t\n\r";


bool isNumber(const char* str)
{
    bool flag = true;

    int i = 0;

    for(i; i < strlen(str); i++){
       
        if( str[i] < 48 || str[i] >  57){
           
            flag = false;
        }
    }

    return flag;
}   

char* numToWord(const int num){
    
    //printf("%d\n", num);

    switch(num){
        case 0:
            return "khoong";
        case 1:
            return "moojt";
        case 2:
            return "hai";
        case 3:
            return "ba";
        case 4:
            return "boosn";
        case 5:
            return "nawm";
        case 6:
            return "sasu";
        case 7:
            return "bary";
        case 8:
            return "tasm";
        case 9:
            return "chisn";
        default:
            return "khoong";
    }
}

static cst_val *cmu_viH_tokentowords(cst_item *token, const char *name)
{
    /* Return list of words that expand token/name */
    cst_val *r = NULL;
    int i = 0;

    char* word = item_name(token);

    //printf("cmu_viH_tokentowords\n");

    //printf("token_name %s name %s\n", word, name); 

    if(isNumber(word)){
        
        for(i; i < strlen(word); i++){
            
            char* num = numToWord((int)word[i] - 48);

            if(r == NULL){
            
                r = cons_val(string_val(num), 0);
            }else{
            
                r = val_append(r , cons_val(string_val(num), 0));    
            }

        }
     
        val_print(stdout, r);

        return r;

    }else{

        return cons_val(string_val(word), 0);
    }
}

void cmu_viH_lang_init(cst_voice *v)
{
    /* Set viH language stuff */
    feat_set_string(v->features,"language","cmu_viH_lang");

    /* utterance break function */
    feat_set(v->features,"utt_break",breakfunc_val(&default_utt_break));

    /* Phoneset -- need to get this from voice */
    feat_set(v->features,"phoneset",phoneset_val(&cmu_viH_phoneset));
    feat_set_string(v->features,"silence",cmu_viH_phoneset.silence);

    /* Get information from voice and add to lexicon */

    /* Text analyser -- whitespace defaults */
    feat_set_string(v->features,"text_whitespace",
                    vi_whitespace );
    feat_set_string(v->features,"text_postpunctuation",
                    vi_punctuation);
    feat_set_string(v->features,"text_prepunctuation",
                    vi_prepunctuation);
    feat_set_string(v->features,"text_singlecharsymbols",
                    vi_singlecharsymbols);

    /* Tokenization tokenization function */
    feat_set(v->features, "tokentowords_func", itemfunc_val(&cmu_viH_tokentowords));
      /* Pos tagger (gpos)/induced pos */
    /* Phrasing */
    /*    feat_set(v->features,"phrasing_cart",cart_val(&cmu_viH_phrasing_cart)); */
    /* Intonation, Duration and F0 -- part of cg */

    // feat_set(v->features,"pos_tagger_func",uttfunc_val(&default_pos_tagger));

    // feat_set_string(v->features,"no_segment_duration_model","false");

    feat_set(v->features,"dur_cart",cart_val(&cmu_viH_durz_cart));
    feat_set(v->features,"dur_stats",dur_stats_val((dur_stats *)cmu_viH_dur_stats));

    feat_set_string(v->features,"no_intonation_accent_model","false");

    // feat_set_string(v->features,"no_f0_target_model","false");
    feat_set(v->features,"f0_model_func",uttfunc_val(&cmu_viH_f0_model));

    /* Default ffunctions (required) */
    basic_ff_register(v->ffunctions);

    return;
}
