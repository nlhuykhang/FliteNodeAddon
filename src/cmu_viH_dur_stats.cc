#include "cst_synth.h"
#include "cmu_viH_lang.h"

static const dur_stat dur_stat_0 = { "pau", 0.1, 0.0};
static const dur_stat dur_stat_1 = { "uowfi", 0.1445, 0.0};
static const dur_stat dur_stat_2 = { "ieefu", 0.139643, 0.0};
static const dur_stat dur_stat_3 = { "uoori", 0.113333, 0.0};
static const dur_stat dur_stat_4 = { "iowsi", 0.1, 0.0};
static const dur_stat dur_stat_5 = { "uyeex", 0.09, 0.0};
static const dur_stat dur_stat_6 = { "ieeju", 0.0916667, 0.0};
static const dur_stat dur_stat_7 = { "uyees", 0.0685714, 0.0};
static const dur_stat dur_stat_8 = { "uyeej", 0.075, 0.0};
static const dur_stat dur_stat_9 = { "uyeer", 0.111667, 0.0};
static const dur_stat dur_stat_10 = { "uyeef", 0.0785714, 0.0};
static const dur_stat dur_stat_11 = { "iuwxa", 0.1, 0.0};
static const dur_stat dur_stat_12 = { "uoosi", 0.155714, 0.0};
static const dur_stat dur_stat_13 = { "uowsi", 0.16625, 0.0};
static const dur_stat dur_stat_14 = { "ieesu", 0.130714, 0.0};
static const dur_stat dur_stat_15 = { "yeesu", 0.155, 0.0};
static const dur_stat dur_stat_16 = { "ieeru", 0.14, 0.0};
static const dur_stat dur_stat_17 = { "iaasy", 0.105, 0.0};
static const dur_stat dur_stat_18 = { "uowju", 0.065, 0.0};
static const dur_stat dur_stat_19 = { "iaasu", 0.125, 0.0};
static const dur_stat dur_stat_20 = { "iuowf", 0.075, 0.0};
static const dur_stat dur_stat_21 = { "uooxi", 0.1525, 0.0};
static const dur_stat dur_stat_22 = { "ieexu", 0.15, 0.0};
static const dur_stat dur_stat_23 = { "uowxi", 0.165, 0.0};
static const dur_stat dur_stat_24 = { "uowri", 0.195, 0.0};
static const dur_stat dur_stat_25 = { "iari", 0.13, 0.0};
static const dur_stat dur_stat_26 = { "yeeu", 0.17, 0.0};
static const dur_stat dur_stat_27 = { "oaji", 0.10375, 0.0};
static const dur_stat dur_stat_28 = { "iowf", 0.125, 0.0};
static const dur_stat dur_stat_29 = { "oofi", 0.147273, 0.0};
static const dur_stat dur_stat_30 = { "uwsu", 0.1, 0.0};
static const dur_stat dur_stat_31 = { "eefu", 0.1625, 0.0};
static const dur_stat dur_stat_32 = { "ieex", 0.081, 0.0};
static const dur_stat dur_stat_33 = { "uows", 0.065, 0.0};
static const dur_stat dur_stat_34 = { "ooxi", 0.13875, 0.0};
static const dur_stat dur_stat_35 = { "oawj", 0.055, 0.0};
static const dur_stat dur_stat_36 = { "ieeu", 0.165455, 0.0};
static const dur_stat dur_stat_37 = { "uowr", 0.09, 0.0};
static const dur_stat dur_stat_38 = { "uyee", 0.084375, 0.0};
static const dur_stat dur_stat_39 = { "uowf", 0.0935714, 0.0};
static const dur_stat dur_stat_40 = { "uwfa", 0.141, 0.0};
static const dur_stat dur_stat_41 = { "aajy", 0.0733333, 0.0};
static const dur_stat dur_stat_42 = { "iees", 0.06, 0.0};
static const dur_stat dur_stat_43 = { "uoos", 0.0727778, 0.0};
static const dur_stat dur_stat_44 = { "oori", 0.162, 0.0};
static const dur_stat dur_stat_45 = { "owfi", 0.139444, 0.0};
static const dur_stat dur_stat_46 = { "iuwx", 0.09, 0.0};
static const dur_stat dur_stat_47 = { "iaso", 0.11, 0.0};
static const dur_stat dur_stat_48 = { "owsi", 0.143889, 0.0};
static const dur_stat dur_stat_49 = { "uwra", 0.159167, 0.0};
static const dur_stat dur_stat_50 = { "owri", 0.133333, 0.0};
static const dur_stat dur_stat_51 = { "uaaj", 0.055, 0.0};
static const dur_stat dur_stat_52 = { "owji", 0.121, 0.0};
static const dur_stat dur_stat_53 = { "aasu", 0.146818, 0.0};
static const dur_stat dur_stat_54 = { "ieef", 0.0905, 0.0};
static const dur_stat dur_stat_55 = { "uwxu", 0.115, 0.0};
static const dur_stat dur_stat_56 = { "uaaf", 0.0483333, 0.0};
static const dur_stat dur_stat_57 = { "uwxa", 0.14, 0.0};
static const dur_stat dur_stat_58 = { "aasy", 0.1075, 0.0};
static const dur_stat dur_stat_59 = { "uooi", 0.16875, 0.0};
static const dur_stat dur_stat_60 = { "ooji", 0.093, 0.0};
static const dur_stat dur_stat_61 = { "uaar", 0.05875, 0.0};
static const dur_stat dur_stat_62 = { "aaxu", 0.13, 0.0};
static const dur_stat dur_stat_63 = { "uoof", 0.0814286, 0.0};
static const dur_stat dur_stat_64 = { "uowj", 0.0647917, 0.0};
static const dur_stat dur_stat_65 = { "aaru", 0.164, 0.0};
static const dur_stat dur_stat_66 = { "aaju", 0.0835714, 0.0};
static const dur_stat dur_stat_67 = { "aafy", 0.105, 0.0};
static const dur_stat dur_stat_68 = { "ioos", 0.05, 0.0};
static const dur_stat dur_stat_69 = { "uwri", 0.14, 0.0};
static const dur_stat dur_stat_70 = { "uwsa", 0.158, 0.0};
static const dur_stat dur_stat_71 = { "uooj", 0.06, 0.0};
static const dur_stat dur_stat_72 = { "uowx", 0.116, 0.0};
static const dur_stat dur_stat_73 = { "aary", 0.145, 0.0};
static const dur_stat dur_stat_74 = { "uwja", 0.101429, 0.0};
static const dur_stat dur_stat_75 = { "uaas", 0.05, 0.0};
static const dur_stat dur_stat_76 = { "iafu", 0.145, 0.0};
static const dur_stat dur_stat_77 = { "uees", 0.17, 0.0};
static const dur_stat dur_stat_78 = { "uwju", 0.0783333, 0.0};
static const dur_stat dur_stat_79 = { "uowi", 0.1925, 0.0};
static const dur_stat dur_stat_80 = { "ieer", 0.0775, 0.0};
static const dur_stat dur_stat_81 = { "iaaj", 0.025, 0.0};
static const dur_stat dur_stat_82 = { "iaay", 0.125, 0.0};
static const dur_stat dur_stat_83 = { "oasi", 0.198333, 0.0};
static const dur_stat dur_stat_84 = { "oosi", 0.145, 0.0};
static const dur_stat dur_stat_85 = { "iori", 0.16, 0.0};
static const dur_stat dur_stat_86 = { "iaas", 0.025, 0.0};
static const dur_stat dur_stat_87 = { "uaax", 0.065, 0.0};
static const dur_stat dur_stat_88 = { "oari", 0.125, 0.0};
static const dur_stat dur_stat_89 = { "yees", 0.125, 0.0};
static const dur_stat dur_stat_90 = { "ueej", 0.115, 0.0};
static const dur_stat dur_stat_91 = { "oafi", 0.15625, 0.0};
static const dur_stat dur_stat_92 = { "uasi", 0.15, 0.0};
static const dur_stat dur_stat_93 = { "aaxy", 0.1625, 0.0};
static const dur_stat dur_stat_94 = { "ieej", 0.0609524, 0.0};
static const dur_stat dur_stat_95 = { "aafu", 0.123125, 0.0};
static const dur_stat dur_stat_96 = { "oaws", 0.04, 0.0};
static const dur_stat dur_stat_97 = { "uwru", 0.17, 0.0};
static const dur_stat dur_stat_98 = { "eesu", 0.15, 0.0};
static const dur_stat dur_stat_99 = { "iawj", 0.04, 0.0};
static const dur_stat dur_stat_100 = { "oasy", 0.175, 0.0};
static const dur_stat dur_stat_101 = { "uwfu", 0.125, 0.0};
static const dur_stat dur_stat_102 = { "uoox", 0.1, 0.0};
static const dur_stat dur_stat_103 = { "iawf", 0.05, 0.0};
static const dur_stat dur_stat_104 = { "iar", 0.095, 0.0};
static const dur_stat dur_stat_105 = { "ajy", 0.07, 0.0};
static const dur_stat dur_stat_106 = { "aji", 0.101, 0.0};
static const dur_stat dur_stat_107 = { "ows", 0.0940909, 0.0};
static const dur_stat dur_stat_108 = { "aau", 0.145, 0.0};
static const dur_stat dur_stat_109 = { "ooj", 0.0672059, 0.0};
static const dur_stat dur_stat_110 = { "aro", 0.171429, 0.0};
static const dur_stat dur_stat_111 = { "isa", 0.146667, 0.0};
static const dur_stat dur_stat_112 = { "uaa", 0.057, 0.0};
static const dur_stat dur_stat_113 = { "oof", 0.105, 0.0};
static const dur_stat dur_stat_114 = { "uoo", 0.100714, 0.0};
static const dur_stat dur_stat_115 = { "ori", 0.165, 0.0};
static const dur_stat dur_stat_116 = { "ooi", 0.170769, 0.0};
static const dur_stat dur_stat_117 = { "uws", 0.0494737, 0.0};
static const dur_stat dur_stat_118 = { "ura", 0.11125, 0.0};
static const dur_stat dur_stat_119 = { "ofa", 0.1375, 0.0};
static const dur_stat dur_stat_120 = { "awj", 0.0482143, 0.0};
static const dur_stat dur_stat_121 = { "uwa", 0.16, 0.0};
static const dur_stat dur_stat_122 = { "eex", 0.12875, 0.0};
static const dur_stat dur_stat_123 = { "uwu", 0.131429, 0.0};
static const dur_stat dur_stat_124 = { "aso", 0.15875, 0.0};
static const dur_stat dur_stat_125 = { "aaf", 0.0547059, 0.0};
static const dur_stat dur_stat_126 = { "uow", 0.085, 0.0};
static const dur_stat dur_stat_127 = { "iju", 0.0975, 0.0};
static const dur_stat dur_stat_128 = { "awf", 0.055, 0.0};
static const dur_stat dur_stat_129 = { "ari", 0.156667, 0.0};
static const dur_stat dur_stat_130 = { "afi", 0.149583, 0.0};
static const dur_stat dur_stat_131 = { "ixa", 0.115, 0.0};
static const dur_stat dur_stat_132 = { "asu", 0.132, 0.0};
static const dur_stat dur_stat_133 = { "owf", 0.148333, 0.0};
static const dur_stat dur_stat_134 = { "oaf", 0.072, 0.0};
static const dur_stat dur_stat_135 = { "uwj", 0.0423333, 0.0};
static const dur_stat dur_stat_136 = { "eso", 0.13375, 0.0};
static const dur_stat dur_stat_137 = { "afu", 0.1075, 0.0};
static const dur_stat dur_stat_138 = { "aws", 0.0456522, 0.0};
static const dur_stat dur_stat_139 = { "ary", 0.1385, 0.0};
static const dur_stat dur_stat_140 = { "uwx", 0.104167, 0.0};
static const dur_stat dur_stat_141 = { "ore", 0.135, 0.0};
static const dur_stat dur_stat_142 = { "oox", 0.135, 0.0};
static const dur_stat dur_stat_143 = { "oar", 0.104, 0.0};
static const dur_stat dur_stat_144 = { "ufa", 0.155, 0.0};
static const dur_stat dur_stat_145 = { "awr", 0.0728571, 0.0};
static const dur_stat dur_stat_146 = { "uas", 0.07, 0.0};
static const dur_stat dur_stat_147 = { "uee", 0.155, 0.0};
static const dur_stat dur_stat_148 = { "ury", 0.1475, 0.0};
static const dur_stat dur_stat_149 = { "yee", 0.12, 0.0};
static const dur_stat dur_stat_150 = { "uys", 0.08, 0.0};
static const dur_stat dur_stat_151 = { "usi", 0.136667, 0.0};
static const dur_stat dur_stat_152 = { "oas", 0.0911111, 0.0};
static const dur_stat dur_stat_153 = { "iao", 0.15, 0.0};
static const dur_stat dur_stat_154 = { "owr", 0.154038, 0.0};
static const dur_stat dur_stat_155 = { "uwr", 0.136875, 0.0};
static const dur_stat dur_stat_156 = { "oja", 0.108333, 0.0};
static const dur_stat dur_stat_157 = { "efo", 0.141, 0.0};
static const dur_stat dur_stat_158 = { "axy", 0.11, 0.0};
static const dur_stat dur_stat_159 = { "ajo", 0.0961111, 0.0};
static const dur_stat dur_stat_160 = { "awx", 0.0925, 0.0};
static const dur_stat dur_stat_161 = { "eer", 0.14125, 0.0};
static const dur_stat dur_stat_162 = { "eeu", 0.148333, 0.0};
static const dur_stat dur_stat_163 = { "iai", 0.15, 0.0};
static const dur_stat dur_stat_164 = { "ofi", 0.173, 0.0};
static const dur_stat dur_stat_165 = { "aas", 0.0378947, 0.0};
static const dur_stat dur_stat_166 = { "axi", 0.1555, 0.0};
static const dur_stat dur_stat_167 = { "iaf", 0.06, 0.0};
static const dur_stat dur_stat_168 = { "ufi", 0.157857, 0.0};
static const dur_stat dur_stat_169 = { "ora", 0.16875, 0.0};
static const dur_stat dur_stat_170 = { "owx", 0.152778, 0.0};
static const dur_stat dur_stat_171 = { "oos", 0.0897917, 0.0};
static const dur_stat dur_stat_172 = { "ios", 0.16, 0.0};
static const dur_stat dur_stat_173 = { "oxi", 0.156667, 0.0};
static const dur_stat dur_stat_174 = { "ioj", 0.035, 0.0};
static const dur_stat dur_stat_175 = { "afy", 0.1345, 0.0};
static const dur_stat dur_stat_176 = { "uaf", 0.11, 0.0};
static const dur_stat dur_stat_177 = { "uxi", 0.15, 0.0};
static const dur_stat dur_stat_178 = { "orf", 0.11, 0.0};
static const dur_stat dur_stat_179 = { "oor", 0.151, 0.0};
static const dur_stat dur_stat_180 = { "axo", 0.15, 0.0};
static const dur_stat dur_stat_181 = { "ufy", 0.125, 0.0};
static const dur_stat dur_stat_182 = { "iee", 0.0845455, 0.0};
static const dur_stat dur_stat_183 = { "usy", 0.135, 0.0};
static const dur_stat dur_stat_184 = { "aaj", 0.0392105, 0.0};
static const dur_stat dur_stat_185 = { "usa", 0.1125, 0.0};
static const dur_stat dur_stat_186 = { "aar", 0.06625, 0.0};
static const dur_stat dur_stat_187 = { "uar", 0.1, 0.0};
static const dur_stat dur_stat_188 = { "uyf", 0.09, 0.0};
static const dur_stat dur_stat_189 = { "ias", 0.1525, 0.0};
static const dur_stat dur_stat_190 = { "uyx", 0.125, 0.0};
static const dur_stat dur_stat_191 = { "uji", 0.106667, 0.0};
static const dur_stat dur_stat_192 = { "aay", 0.138333, 0.0};
static const dur_stat dur_stat_193 = { "ujy", 0.1, 0.0};
static const dur_stat dur_stat_194 = { "ees", 0.11075, 0.0};
static const dur_stat dur_stat_195 = { "ija", 0.1, 0.0};
static const dur_stat dur_stat_196 = { "asi", 0.150357, 0.0};
static const dur_stat dur_stat_197 = { "asy", 0.11, 0.0};
static const dur_stat dur_stat_198 = { "oay", 0.175, 0.0};
static const dur_stat dur_stat_199 = { "osi", 0.130714, 0.0};
static const dur_stat dur_stat_200 = { "eef", 0.113045, 0.0};
static const dur_stat dur_stat_201 = { "uri", 0.191667, 0.0};
static const dur_stat dur_stat_202 = { "iru", 0.15, 0.0};
static const dur_stat dur_stat_203 = { "iax", 0.075, 0.0};
static const dur_stat dur_stat_204 = { "oai", 0.2325, 0.0};
static const dur_stat dur_stat_205 = { "ira", 0.1375, 0.0};
static const dur_stat dur_stat_206 = { "uax", 0.1, 0.0};
static const dur_stat dur_stat_207 = { "ejo", 0.1225, 0.0};
static const dur_stat dur_stat_208 = { "owi", 0.1665, 0.0};
static const dur_stat dur_stat_209 = { "ues", 0.05, 0.0};
static const dur_stat dur_stat_210 = { "ius", 0.00999999, 0.0};
static const dur_stat dur_stat_211 = { "aax", 0.0607143, 0.0};
static const dur_stat dur_stat_212 = { "owj", 0.0766667, 0.0};
static const dur_stat dur_stat_213 = { "uyr", 0.205, 0.0};
static const dur_stat dur_stat_214 = { "ifa", 0.15, 0.0};
static const dur_stat dur_stat_215 = { "oax", 0.075, 0.0};
static const dur_stat dur_stat_216 = { "uya", 0.095, 0.0};
static const dur_stat dur_stat_217 = { "exo", 0.185, 0.0};
static const dur_stat dur_stat_218 = { "oaj", 0.062, 0.0};
static const dur_stat dur_stat_219 = { "uxy", 0.165, 0.0};
static const dur_stat dur_stat_220 = { "osa", 0.155, 0.0};
static const dur_stat dur_stat_221 = { "oaw", 0.075, 0.0};
static const dur_stat dur_stat_222 = { "uxa", 0.135, 0.0};
static const dur_stat dur_stat_223 = { "oji", 0.085, 0.0};
static const dur_stat dur_stat_224 = { "iof", 0.1, 0.0};
static const dur_stat dur_stat_225 = { "uwf", 0.0661923, 0.0};
static const dur_stat dur_stat_226 = { "uyj", 0.075, 0.0};
static const dur_stat dur_stat_227 = { "iow", 0.175, 0.0};
static const dur_stat dur_stat_228 = { "ero", 0.16, 0.0};
static const dur_stat dur_stat_229 = { "uaj", 0.075, 0.0};
static const dur_stat dur_stat_230 = { "afo", 0.157656, 0.0};
static const dur_stat dur_stat_231 = { "oer", 0.175, 0.0};
static const dur_stat dur_stat_232 = { "uaw", 0.05, 0.0};
static const dur_stat dur_stat_233 = { "ior", 0.175, 0.0};
static const dur_stat dur_stat_234 = { "ieo", 0.2, 0.0};
static const dur_stat dur_stat_235 = { "eej", 0.07, 0.0};
static const dur_stat dur_stat_236 = { "oes", 0.06, 0.0};
static const dur_stat dur_stat_237 = { "iuj", 0.035, 0.0};
static const dur_stat dur_stat_238 = { "uja", 0.1, 0.0};
static const dur_stat dur_stat_239 = { "ngh", 0.05525, 0.0};
static const dur_stat dur_stat_240 = { "ur", 0.139615, 0.0};
static const dur_stat dur_stat_241 = { "ay", 0.099, 0.0};
static const dur_stat dur_stat_242 = { "eo", 0.144444, 0.0};
static const dur_stat dur_stat_243 = { "oa", 0.136667, 0.0};
static const dur_stat dur_stat_244 = { "ax", 0.135278, 0.0};
static const dur_stat dur_stat_245 = { "ia", 0.15625, 0.0};
static const dur_stat dur_stat_246 = { "ph", 0.0604545, 0.0};
static const dur_stat dur_stat_247 = { "ir", 0.13, 0.0};
static const dur_stat dur_stat_248 = { "kh", 0.0624632, 0.0};
static const dur_stat dur_stat_249 = { "ui", 0.126, 0.0};
static const dur_stat dur_stat_250 = { "gh", 0.069, 0.0};
static const dur_stat dur_stat_251 = { "of", 0.107647, 0.0};
static const dur_stat dur_stat_252 = { "oo", 0.104318, 0.0};
static const dur_stat dur_stat_253 = { "ng", 0.0457021, 0.0};
static const dur_stat dur_stat_254 = { "au", 0.131429, 0.0};
static const dur_stat dur_stat_255 = { "es", 0.08175, 0.0};
static const dur_stat dur_stat_256 = { "or", 0.130833, 0.0};
static const dur_stat dur_stat_257 = { "yf", 0.1125, 0.0};
static const dur_stat dur_stat_258 = { "ue", 0.065, 0.0};
static const dur_stat dur_stat_259 = { "oe", 0.15, 0.0};
static const dur_stat dur_stat_260 = { "oj", 0.065, 0.0};
static const dur_stat dur_stat_261 = { "tr", 0.0581, 0.0};
static const dur_stat dur_stat_262 = { "yr", 0.105, 0.0};
static const dur_stat dur_stat_263 = { "ow", 0.133125, 0.0};
static const dur_stat dur_stat_264 = { "ua", 0.127222, 0.0};
static const dur_stat dur_stat_265 = { "af", 0.103365, 0.0};
static const dur_stat dur_stat_266 = { "ix", 0.111667, 0.0};
static const dur_stat dur_stat_267 = { "aj", 0.06375, 0.0};
static const dur_stat dur_stat_268 = { "ij", 0.0515714, 0.0};
static const dur_stat dur_stat_269 = { "uj", 0.0547727, 0.0};
static const dur_stat dur_stat_270 = { "ef", 0.109444, 0.0};
static const dur_stat dur_stat_271 = { "if", 0.0825, 0.0};
static const dur_stat dur_stat_272 = { "ai", 0.154062, 0.0};
static const dur_stat dur_stat_273 = { "oi", 0.172, 0.0};
static const dur_stat dur_stat_274 = { "os", 0.0856522, 0.0};
static const dur_stat dur_stat_275 = { "uf", 0.0859375, 0.0};
static const dur_stat dur_stat_276 = { "ch", 0.0509914, 0.0};
static const dur_stat dur_stat_277 = { "er", 0.133846, 0.0};
static const dur_stat dur_stat_278 = { "ee", 0.117361, 0.0};
static const dur_stat dur_stat_279 = { "ux", 0.105313, 0.0};
static const dur_stat dur_stat_280 = { "uy", 0.108, 0.0};
static const dur_stat dur_stat_281 = { "is", 0.0588461, 0.0};
static const dur_stat dur_stat_282 = { "yx", 0.134, 0.0};
static const dur_stat dur_stat_283 = { "ar", 0.121111, 0.0};
static const dur_stat dur_stat_284 = { "ao", 0.165937, 0.0};
static const dur_stat dur_stat_285 = { "aw", 0.0559524, 0.0};
static const dur_stat dur_stat_286 = { "ej", 0.0638889, 0.0};
static const dur_stat dur_stat_287 = { "ys", 0.111667, 0.0};
static const dur_stat dur_stat_288 = { "ox", 0.143, 0.0};
static const dur_stat dur_stat_289 = { "aa", 0.0494643, 0.0};
static const dur_stat dur_stat_290 = { "as", 0.0721154, 0.0};
static const dur_stat dur_stat_291 = { "uw", 0.095, 0.0};
static const dur_stat dur_stat_292 = { "dd", 0.0555752, 0.0};
static const dur_stat dur_stat_293 = { "iu", 0.175, 0.0};
static const dur_stat dur_stat_294 = { "us", 0.0634211, 0.0};
static const dur_stat dur_stat_295 = { "nh", 0.0531451, 0.0};
static const dur_stat dur_stat_296 = { "th", 0.0602523, 0.0};
static const dur_stat dur_stat_297 = { "ex", 0.132273, 0.0};
static const dur_stat dur_stat_298 = { "o", 0.107292, 0.0};
static const dur_stat dur_stat_299 = { "g", 0.0682143, 0.0};
static const dur_stat dur_stat_300 = { "x", 0.0737931, 0.0};
static const dur_stat dur_stat_301 = { "q", 0.053871, 0.0};
static const dur_stat dur_stat_302 = { "d", 0.0699375, 0.0};
static const dur_stat dur_stat_303 = { "k", 0.0513393, 0.0};
static const dur_stat dur_stat_304 = { "a", 0.104545, 0.0};
static const dur_stat dur_stat_305 = { "c", 0.0382627, 0.0};
static const dur_stat dur_stat_306 = { "u", 0.0981579, 0.0};
static const dur_stat dur_stat_307 = { "i", 0.0823333, 0.0};
static const dur_stat dur_stat_308 = { "f", 0.05, 0.0};
static const dur_stat dur_stat_309 = { "v", 0.0614817, 0.0};
static const dur_stat dur_stat_310 = { "p", 0.0248113, 0.0};
static const dur_stat dur_stat_311 = { "h", 0.0555388, 0.0};
static const dur_stat dur_stat_312 = { "m", 0.0515942, 0.0};
static const dur_stat dur_stat_313 = { "y", 0.155, 0.0};
static const dur_stat dur_stat_314 = { "b", 0.0556443, 0.0};
static const dur_stat dur_stat_315 = { "e", 0.113553, 0.0};
static const dur_stat dur_stat_316 = { "r", 0.0680282, 0.0};
static const dur_stat dur_stat_317 = { "t", 0.144378, 0.0};
static const dur_stat dur_stat_318 = { "l", 0.0660124, 0.0};
static const dur_stat dur_stat_319 = { "n", 0.0427626, 0.0};
static const dur_stat dur_stat_320 = { "s", 0.0754839, 0.0};


const dur_stat * const cmu_viH_dur_stats[] = {&dur_stat_0,
                                              &dur_stat_1,
                                              &dur_stat_2,
                                              &dur_stat_3,
                                              &dur_stat_4,
                                              &dur_stat_5,
                                              &dur_stat_6,
                                              &dur_stat_7,
                                              &dur_stat_8,
                                              &dur_stat_9,
                                              &dur_stat_10,
                                              &dur_stat_11,
                                              &dur_stat_12,
                                              &dur_stat_13,
                                              &dur_stat_14,
                                              &dur_stat_15,
                                              &dur_stat_16,
                                              &dur_stat_17,
                                              &dur_stat_18,
                                              &dur_stat_19,
                                              &dur_stat_20,
                                              &dur_stat_21,
                                              &dur_stat_22,
                                              &dur_stat_23,
                                              &dur_stat_24,
                                              &dur_stat_25,
                                              &dur_stat_26,
                                              &dur_stat_27,
                                              &dur_stat_28,
                                              &dur_stat_29,
                                              &dur_stat_30,
                                              &dur_stat_31,
                                              &dur_stat_32,
                                              &dur_stat_33,
                                              &dur_stat_34,
                                              &dur_stat_35,
                                              &dur_stat_36,
                                              &dur_stat_37,
                                              &dur_stat_38,
                                              &dur_stat_39,
                                              &dur_stat_40,
                                              &dur_stat_41,
                                              &dur_stat_42,
                                              &dur_stat_43,
                                              &dur_stat_44,
                                              &dur_stat_45,
                                              &dur_stat_46,
                                              &dur_stat_47,
                                              &dur_stat_48,
                                              &dur_stat_49,
                                              &dur_stat_50,
                                              &dur_stat_51,
                                              &dur_stat_52,
                                              &dur_stat_53,
                                              &dur_stat_54,
                                              &dur_stat_55,
                                              &dur_stat_56,
                                              &dur_stat_57,
                                              &dur_stat_58,
                                              &dur_stat_59,
                                              &dur_stat_60,
                                              &dur_stat_61,
                                              &dur_stat_62,
                                              &dur_stat_63,
                                              &dur_stat_64,
                                              &dur_stat_65,
                                              &dur_stat_66,
                                              &dur_stat_67,
                                              &dur_stat_68,
                                              &dur_stat_69,
                                              &dur_stat_70,
                                              &dur_stat_71,
                                              &dur_stat_72,
                                              &dur_stat_73,
                                              &dur_stat_74,
                                              &dur_stat_75,
                                              &dur_stat_76,
                                              &dur_stat_77,
                                              &dur_stat_78,
                                              &dur_stat_79,
                                              &dur_stat_80,
                                              &dur_stat_81,
                                              &dur_stat_82,
                                              &dur_stat_83,
                                              &dur_stat_84,
                                              &dur_stat_85,
                                              &dur_stat_86,
                                              &dur_stat_87,
                                              &dur_stat_88,
                                              &dur_stat_89,
                                              &dur_stat_90,
                                              &dur_stat_91,
                                              &dur_stat_92,
                                              &dur_stat_93,
                                              &dur_stat_94,
                                              &dur_stat_95,
                                              &dur_stat_96,
                                              &dur_stat_97,
                                              &dur_stat_98,
                                              &dur_stat_99,
                                              &dur_stat_100,
                                              &dur_stat_101,
                                              &dur_stat_102,
                                              &dur_stat_103,
                                              &dur_stat_104,
                                              &dur_stat_105,
                                              &dur_stat_106,
                                              &dur_stat_107,
                                              &dur_stat_108,
                                              &dur_stat_109,
                                              &dur_stat_110,
                                              &dur_stat_111,
                                              &dur_stat_112,
                                              &dur_stat_113,
                                              &dur_stat_114,
                                              &dur_stat_115,
                                              &dur_stat_116,
                                              &dur_stat_117,
                                              &dur_stat_118,
                                              &dur_stat_119,
                                              &dur_stat_120,
                                              &dur_stat_121,
                                              &dur_stat_122,
                                              &dur_stat_123,
                                              &dur_stat_124,
                                              &dur_stat_125,
                                              &dur_stat_126,
                                              &dur_stat_127,
                                              &dur_stat_128,
                                              &dur_stat_129,
                                              &dur_stat_130,
                                              &dur_stat_131,
                                              &dur_stat_132,
                                              &dur_stat_133,
                                              &dur_stat_134,
                                              &dur_stat_135,
                                              &dur_stat_136,
                                              &dur_stat_137,
                                              &dur_stat_138,
                                              &dur_stat_139,
                                              &dur_stat_140,
                                              &dur_stat_141,
                                              &dur_stat_142,
                                              &dur_stat_143,
                                              &dur_stat_144,
                                              &dur_stat_145,
                                              &dur_stat_146,
                                              &dur_stat_147,
                                              &dur_stat_148,
                                              &dur_stat_149,
                                              &dur_stat_150,
                                              &dur_stat_151,
                                              &dur_stat_152,
                                              &dur_stat_153,
                                              &dur_stat_154,
                                              &dur_stat_155,
                                              &dur_stat_156,
                                              &dur_stat_157,
                                              &dur_stat_158,
                                              &dur_stat_159,
                                              &dur_stat_160,
                                              &dur_stat_161,
                                              &dur_stat_162,
                                              &dur_stat_163,
                                              &dur_stat_164,
                                              &dur_stat_165,
                                              &dur_stat_166,
                                              &dur_stat_167,
                                              &dur_stat_168,
                                              &dur_stat_169,
                                              &dur_stat_170,
                                              &dur_stat_171,
                                              &dur_stat_172,
                                              &dur_stat_173,
                                              &dur_stat_174,
                                              &dur_stat_175,
                                              &dur_stat_176,
                                              &dur_stat_177,
                                              &dur_stat_178,
                                              &dur_stat_179,
                                              &dur_stat_180,
                                              &dur_stat_181,
                                              &dur_stat_182,
                                              &dur_stat_183,
                                              &dur_stat_184,
                                              &dur_stat_185,
                                              &dur_stat_186,
                                              &dur_stat_187,
                                              &dur_stat_188,
                                              &dur_stat_189,
                                              &dur_stat_190,
                                              &dur_stat_191,
                                              &dur_stat_192,
                                              &dur_stat_193,
                                              &dur_stat_194,
                                              &dur_stat_195,
                                              &dur_stat_196,
                                              &dur_stat_197,
                                              &dur_stat_198,
                                              &dur_stat_199,
                                              &dur_stat_200,
                                              &dur_stat_201,
                                              &dur_stat_202,
                                              &dur_stat_203,
                                              &dur_stat_204,
                                              &dur_stat_205,
                                              &dur_stat_206,
                                              &dur_stat_207,
                                              &dur_stat_208,
                                              &dur_stat_209,
                                              &dur_stat_210,
                                              &dur_stat_211,
                                              &dur_stat_212,
                                              &dur_stat_213,
                                              &dur_stat_214,
                                              &dur_stat_215,
                                              &dur_stat_216,
                                              &dur_stat_217,
                                              &dur_stat_218,
                                              &dur_stat_219,
                                              &dur_stat_220,
                                              &dur_stat_221,
                                              &dur_stat_222,
                                              &dur_stat_223,
                                              &dur_stat_224,
                                              &dur_stat_225,
                                              &dur_stat_226,
                                              &dur_stat_227,
                                              &dur_stat_228,
                                              &dur_stat_229,
                                              &dur_stat_230,
                                              &dur_stat_231,
                                              &dur_stat_232,
                                              &dur_stat_233,
                                              &dur_stat_234,
                                              &dur_stat_235,
                                              &dur_stat_236,
                                              &dur_stat_237,
                                              &dur_stat_238,
                                              &dur_stat_239,
                                              &dur_stat_240,
                                              &dur_stat_241,
                                              &dur_stat_242,
                                              &dur_stat_243,
                                              &dur_stat_244,
                                              &dur_stat_245,
                                              &dur_stat_246,
                                              &dur_stat_247,
                                              &dur_stat_248,
                                              &dur_stat_249,
                                              &dur_stat_250,
                                              &dur_stat_251,
                                              &dur_stat_252,
                                              &dur_stat_253,
                                              &dur_stat_254,
                                              &dur_stat_255,
                                              &dur_stat_256,
                                              &dur_stat_257,
                                              &dur_stat_258,
                                              &dur_stat_259,
                                              &dur_stat_260,
                                              &dur_stat_261,
                                              &dur_stat_262,
                                              &dur_stat_263,
                                              &dur_stat_264,
                                              &dur_stat_265,
                                              &dur_stat_266,
                                              &dur_stat_267,
                                              &dur_stat_268,
                                              &dur_stat_269,
                                              &dur_stat_270,
                                              &dur_stat_271,
                                              &dur_stat_272,
                                              &dur_stat_273,
                                              &dur_stat_274,
                                              &dur_stat_275,
                                              &dur_stat_276,
                                              &dur_stat_277,
                                              &dur_stat_278,
                                              &dur_stat_279,
                                              &dur_stat_280,
                                              &dur_stat_281,
                                              &dur_stat_282,
                                              &dur_stat_283,
                                              &dur_stat_284,
                                              &dur_stat_285,
                                              &dur_stat_286,
                                              &dur_stat_287,
                                              &dur_stat_288,
                                              &dur_stat_289,
                                              &dur_stat_290,
                                              &dur_stat_291,
                                              &dur_stat_292,
                                              &dur_stat_293,
                                              &dur_stat_294,
                                              &dur_stat_295,
                                              &dur_stat_296,
                                              &dur_stat_297,
                                              &dur_stat_298,
                                              &dur_stat_299,
                                              &dur_stat_300,
                                              &dur_stat_301,
                                              &dur_stat_302,
                                              &dur_stat_303,
                                              &dur_stat_304,
                                              &dur_stat_305,
                                              &dur_stat_306,
                                              &dur_stat_307,
                                              &dur_stat_308,
                                              &dur_stat_309,
                                              &dur_stat_310,
                                              &dur_stat_311,
                                              &dur_stat_312,
                                              &dur_stat_313,
                                              &dur_stat_314,
                                              &dur_stat_315,
                                              &dur_stat_316,
                                              &dur_stat_317,
                                              &dur_stat_318,
                                              &dur_stat_319,
                                              &dur_stat_320,
                                              NULL
                                             };
