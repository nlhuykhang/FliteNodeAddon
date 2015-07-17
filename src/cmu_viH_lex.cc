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
/*  viH Lexical function                                            */
/*                                                                       */
/*************************************************************************/
#include "flite.h"
#include "cst_val.h"
#include "cst_voice.h"
#include "cst_lexicon.h"
#include "cst_ffeatures.h"
#include "cmu_viH_lex.h"


static int cmu_viH_is_silence(const char *p);

static int cmu_viH_is_silence(const char *p)
{
    if (cst_streq(p,"pau"))
    return TRUE;
    else
    return FALSE;
}


int cmu_viH_syl_boundary(const cst_item *i,const cst_val *rest)
{
    /* Returns TRUE if this should be a syllable boundary */
    /* This is of course phone set dependent              */

    if (rest == NULL){
        return TRUE;
    }

    if (cmu_viH_is_silence(val_string(val_car(rest)))){
        return TRUE;
    }

    return FALSE;
}

// void lts(char* word){
//     char listPAD[][25] = { "b", "ch", "c", "dd", "d", "gh", "gi", "g" , "h", "kh",
//         "l", "m", "ngh", "ng", "nh", "n", "ph", "p", "qu", "r", "s", "th", "t", "v", "x", "y" };
//     char listPAC[][9] = { "ch", "c", "m", "ng", "nh", "n", "p", "t", "y" };
//     char* pad = "";
//     char* pac = "";
//     char* na;
//     char* test;
//     int pacPos;


//     for (int i = 0; i < 25; i++){
//         test = strstr(word, listPAD[i]);
//         if (test != NULL && (test - word) == 0){
//             pad = listPAD[i];

//             cout << pad << endl;

//             break;
//         }
//     }

//     for (int i = 0; i < 9; i++){
//         test = strstr(word, listPAC[i]);

//         if (test != NULL && (test - word) > 0){
//             pac = listPAC[i];
//             pacPos = test - word;
//             cout << pac << endl;

//             break;
//         }
//         else{
//             pacPos = strlen(word);
//         }
//     }

//     na = (char*)malloc(pacPos - strlen(pad));

//     for (int i = strlen(pad); i < pacPos; i++){
//         na[i - strlen(pad)] = word[i];
//     }

//     na[pacPos - strlen(pad)] = '\0';

//     cout << na << endl;

// }

cst_val *cmu_viH_lex_lts_function(const struct lexicon_struct *l, 
                                   const char *word, const char *pos, 
                                   const cst_features_struct* whatever)
{
    word = cst_downcase(word);

	int pacPos, i;

    cst_val *re = 0;
    
    char listPAD[][28] = { "b", "ch", "c", "dd", "d", "gh", "g", "g" , "kh", "k", "h",
    "l", "m", "ngh", "ng", "nh", "n", "ph", "p", "q", "tr", "r", "s", "th", "t", "v", "x", "y" };
    char listPAC[][8] = { "ch", "c", "m", "ng", "nh", "n", "p", "t"};
    char* pad = "";
    char* pac = "";
    char* na;
    char* word2;
    char* test;
   


    for (i = 0; i < 28; i++){
        test = strstr((char*)word, listPAD[i]);
        if (test != NULL && (test - word) == 0){
            pad = listPAD[i];

            // cout << pad << endl;

            break;
        }
    }

    word2 = (char*)malloc(strlen(word) - strlen(pad));

    for (i = strlen(pad); i < strlen(word); i++){
        word2[i - strlen(pad)] = word[i];
    }

    word2[strlen(word) - strlen(pad)] = '\0';



    for (i = 0; i < 8; i++){
        test = strstr(word2, listPAC[i]);

        if (test != NULL && (test - word2) > 0){
            pac = listPAC[i];
            pacPos = test - word2 + strlen(pad);
            
            // cout << pac << endl;

            break;
        }
        else{
            pacPos = strlen(word);
        }
    }

    na = (char*)malloc(pacPos - strlen(pad));

    for (i = strlen(pad); i < pacPos; i++){
        na[i - strlen(pad)] = word[i];
    }

    na[pacPos - strlen(pad)] = '\0';

    // cout << na << endl;
    
    // re = cst_utf8_explode(word);

    re = cons_val(string_val("pau"), re);

    if(strlen(pad) > 0){
        re = cons_val(string_val(pad), re);
    }

    if(strlen(na) > 0){
        re = cons_val(string_val(na), re);
    }

    if(strlen(pac) > 0){
        re = cons_val(string_val(pac), re);
    }

    re = cons_val(string_val("pau"), re);

    ////printf("lex_lts_function:\t");

    // val_print(stdout, re);

    ////printf("\n");

    return val_reverse(re);
}


extern const int cmu_lex_entry[];
extern const unsigned char cmu_viH_lex_data[];
extern const int cmu_viH_lex_num_entries;
extern const int cmu_viH_lex_num_bytes;
extern const char * const cmu_viH_lex_phone_table[5];
extern const char * const cmu_viH_lex_phones_huff_table[];
extern const char * const cmu_viH_lex_entries_huff_table[];


cst_lexicon cmu_viH_lex;
cst_lts_rules cmu_viH_lts_rules;
extern const char * const cmu_viH_lts_phone_table[];
extern const char * const cmu_viH_lts_phone_table[];
extern const cst_lts_addr cmu_viH_lts_letter_index[];
extern const cst_lts_model cmu_viH_lts_model[];



cst_lexicon *cmu_viH_lex_init(void)
{
    //default
    /* Should it be global const or dynamic */
    /* Can make lts_rules just a cart tree like others */

    // cst_lexicon *l;

    // l = cst_alloc(cst_lexicon,1);
    // l->name = "cmu_viH_lex";

    // l->lts_function = cmu_viH_lex_lts_function;

    // return l;

        if (cmu_viH_lts_rules.name)
        return &cmu_viH_lex;  /* Already initialized */

    // cmu_viH_lts_rules.name = "cmu_viH_lex";
    // cmu_viH_lts_rules.letter_index = cmu_viH_lts_letter_index;

    // cmu_viH_lts_rules.models = cmu_viH_lts_model;

    // cmu_viH_lts_rules.phone_table = cmu_viH_lts_phone_table;
    // cmu_viH_lts_rules.context_window_size = 4;
    // cmu_viH_lts_rules.context_extra_feats = 1;
    // // cmu_viH_lts_rules.letter_table = 0;
    // cmu_viH_lts_rules.letter_table = cmu_viH_lts_phone_table;

    cmu_viH_lex.name = "cmu_viH_lex";
    // cmu_viH_lex.num_entries = cmu_viH_lex_num_entries;

    // cmu_viH_lex.data = (unsigned char *)(void *)cmu_viH_lex_data;

    // cmu_viH_lex.num_bytes = cmu_viH_lex_num_bytes;
    // cmu_viH_lex.phone_table = (char **) cmu_viH_lex_phone_table;
    
    cmu_viH_lex.syl_boundary = cmu_viH_syl_boundary;
    // cmu_viH_lex.addenda = (char ***) addenda;
    // cmu_viH_lex.lts_rule_set = (cst_lts_rules *) &cmu_viH_lts_rules;

    // cmu_viH_lex.phone_hufftable = cmu_viH_lex_phones_huff_table;
    // cmu_viH_lex.entry_hufftable = cmu_viH_lex_entries_huff_table;
    cmu_viH_lex.lts_function = cmu_viH_lex_lts_function;
    // cmu_viH_lex.postlex = cmu_postlex;

    return &cmu_viH_lex;
    
}



