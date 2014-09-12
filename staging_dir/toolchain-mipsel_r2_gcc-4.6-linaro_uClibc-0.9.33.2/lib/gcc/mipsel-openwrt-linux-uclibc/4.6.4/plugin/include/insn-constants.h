/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define CCDSP_OU_REGNUM 185
#define CCDSP_CC_REGNUM 186
#define RETURN_ADDR_REGNUM 31
#define GOT_VERSION_REGNUM 79
#define MAX_PIC_BRANCH_LENGTH 100
#define CCDSP_SC_REGNUM 183
#define CCDSP_EF_REGNUM 187
#define CPRESTORE_SLOT_REGNUM 76
#define CCDSP_CA_REGNUM 184
#define CCDSP_PO_REGNUM 182
#define TLS_GET_TP_REGNUM 3

enum unspec {
  UNSPEC_LOAD_LEFT = 0,
  UNSPEC_LOAD_RIGHT = 1,
  UNSPEC_STORE_LEFT = 2,
  UNSPEC_STORE_RIGHT = 3,
  UNSPEC_LOAD_LOW = 4,
  UNSPEC_LOAD_HIGH = 5,
  UNSPEC_STORE_WORD = 6,
  UNSPEC_MFHC1 = 7,
  UNSPEC_MTHC1 = 8,
  UNSPEC_MFHI = 9,
  UNSPEC_MTHI = 10,
  UNSPEC_SET_HILO = 11,
  UNSPEC_LOADGP = 12,
  UNSPEC_COPYGP = 13,
  UNSPEC_MOVE_GP = 14,
  UNSPEC_POTENTIAL_CPRESTORE = 15,
  UNSPEC_CPRESTORE = 16,
  UNSPEC_RESTORE_GP = 17,
  UNSPEC_EH_RETURN = 18,
  UNSPEC_GP = 19,
  UNSPEC_SET_GOT_VERSION = 20,
  UNSPEC_UPDATE_GOT_VERSION = 21,
  UNSPEC_LOAD_CALL = 22,
  UNSPEC_LOAD_GOT = 23,
  UNSPEC_TLS_LDM = 24,
  UNSPEC_TLS_GET_TP = 25,
  UNSPEC_ALIGN = 26,
  UNSPEC_CONSTTABLE_INT = 27,
  UNSPEC_CONSTTABLE_FLOAT = 28,
  UNSPEC_BLOCKAGE = 29,
  UNSPEC_CLEAR_HAZARD = 30,
  UNSPEC_RDHWR = 31,
  UNSPEC_SYNCI = 32,
  UNSPEC_SYNC = 33,
  UNSPEC_MIPS_CACHE = 34,
  UNSPEC_R10K_CACHE_BARRIER = 35,
  UNSPEC_ERET = 36,
  UNSPEC_DERET = 37,
  UNSPEC_DI = 38,
  UNSPEC_EHB = 39,
  UNSPEC_RDPGPR = 40,
  UNSPEC_COP0 = 41,
  UNSPEC_CALL_ATTR = 42,
  UNSPEC_LOONGSON_ALU1_TURN_ENABLED_INSN = 43,
  UNSPEC_LOONGSON_ALU2_TURN_ENABLED_INSN = 44,
  UNSPEC_LOONGSON_FALU1_TURN_ENABLED_INSN = 45,
  UNSPEC_LOONGSON_FALU2_TURN_ENABLED_INSN = 46,
  UNSPEC_COMPARE_AND_SWAP = 47,
  UNSPEC_COMPARE_AND_SWAP_12 = 48,
  UNSPEC_SYNC_OLD_OP = 49,
  UNSPEC_SYNC_NEW_OP = 50,
  UNSPEC_SYNC_NEW_OP_12 = 51,
  UNSPEC_SYNC_OLD_OP_12 = 52,
  UNSPEC_SYNC_EXCHANGE = 53,
  UNSPEC_SYNC_EXCHANGE_12 = 54,
  UNSPEC_MEMORY_BARRIER = 55,
  UNSPEC_MOVE_TF_PS = 56,
  UNSPEC_C = 57,
  UNSPEC_ALNV_PS = 58,
  UNSPEC_CABS = 59,
  UNSPEC_ADDR_PS = 60,
  UNSPEC_CVT_PW_PS = 61,
  UNSPEC_CVT_PS_PW = 62,
  UNSPEC_MULR_PS = 63,
  UNSPEC_ABS_PS = 64,
  UNSPEC_RSQRT1 = 65,
  UNSPEC_RSQRT2 = 66,
  UNSPEC_RECIP1 = 67,
  UNSPEC_RECIP2 = 68,
  UNSPEC_SINGLE_CC = 69,
  UNSPEC_SCC = 70,
  UNSPEC_ADDQ = 71,
  UNSPEC_ADDQ_S = 72,
  UNSPEC_SUBQ = 73,
  UNSPEC_SUBQ_S = 74,
  UNSPEC_ADDSC = 75,
  UNSPEC_ADDWC = 76,
  UNSPEC_MODSUB = 77,
  UNSPEC_RADDU_W_QB = 78,
  UNSPEC_ABSQ_S = 79,
  UNSPEC_PRECRQ_QB_PH = 80,
  UNSPEC_PRECRQ_PH_W = 81,
  UNSPEC_PRECRQ_RS_PH_W = 82,
  UNSPEC_PRECRQU_S_QB_PH = 83,
  UNSPEC_PRECEQ_W_PHL = 84,
  UNSPEC_PRECEQ_W_PHR = 85,
  UNSPEC_PRECEQU_PH_QBL = 86,
  UNSPEC_PRECEQU_PH_QBR = 87,
  UNSPEC_PRECEQU_PH_QBLA = 88,
  UNSPEC_PRECEQU_PH_QBRA = 89,
  UNSPEC_PRECEU_PH_QBL = 90,
  UNSPEC_PRECEU_PH_QBR = 91,
  UNSPEC_PRECEU_PH_QBLA = 92,
  UNSPEC_PRECEU_PH_QBRA = 93,
  UNSPEC_SHLL = 94,
  UNSPEC_SHLL_S = 95,
  UNSPEC_SHRL_QB = 96,
  UNSPEC_SHRA_PH = 97,
  UNSPEC_SHRA_R = 98,
  UNSPEC_MULEU_S_PH_QBL = 99,
  UNSPEC_MULEU_S_PH_QBR = 100,
  UNSPEC_MULQ_RS_PH = 101,
  UNSPEC_MULEQ_S_W_PHL = 102,
  UNSPEC_MULEQ_S_W_PHR = 103,
  UNSPEC_DPAU_H_QBL = 104,
  UNSPEC_DPAU_H_QBR = 105,
  UNSPEC_DPSU_H_QBL = 106,
  UNSPEC_DPSU_H_QBR = 107,
  UNSPEC_DPAQ_S_W_PH = 108,
  UNSPEC_DPSQ_S_W_PH = 109,
  UNSPEC_MULSAQ_S_W_PH = 110,
  UNSPEC_DPAQ_SA_L_W = 111,
  UNSPEC_DPSQ_SA_L_W = 112,
  UNSPEC_MAQ_S_W_PHL = 113,
  UNSPEC_MAQ_S_W_PHR = 114,
  UNSPEC_MAQ_SA_W_PHL = 115,
  UNSPEC_MAQ_SA_W_PHR = 116,
  UNSPEC_BITREV = 117,
  UNSPEC_INSV = 118,
  UNSPEC_REPL_QB = 119,
  UNSPEC_REPL_PH = 120,
  UNSPEC_CMP_EQ = 121,
  UNSPEC_CMP_LT = 122,
  UNSPEC_CMP_LE = 123,
  UNSPEC_CMPGU_EQ_QB = 124,
  UNSPEC_CMPGU_LT_QB = 125,
  UNSPEC_CMPGU_LE_QB = 126,
  UNSPEC_PICK = 127,
  UNSPEC_PACKRL_PH = 128,
  UNSPEC_EXTR_W = 129,
  UNSPEC_EXTR_R_W = 130,
  UNSPEC_EXTR_RS_W = 131,
  UNSPEC_EXTR_S_H = 132,
  UNSPEC_EXTP = 133,
  UNSPEC_EXTPDP = 134,
  UNSPEC_SHILO = 135,
  UNSPEC_MTHLIP = 136,
  UNSPEC_WRDSP = 137,
  UNSPEC_RDDSP = 138,
  UNSPEC_ABSQ_S_QB = 139,
  UNSPEC_ADDU_PH = 140,
  UNSPEC_ADDU_S_PH = 141,
  UNSPEC_ADDUH_QB = 142,
  UNSPEC_ADDUH_R_QB = 143,
  UNSPEC_APPEND = 144,
  UNSPEC_BALIGN = 145,
  UNSPEC_CMPGDU_EQ_QB = 146,
  UNSPEC_CMPGDU_LT_QB = 147,
  UNSPEC_CMPGDU_LE_QB = 148,
  UNSPEC_DPA_W_PH = 149,
  UNSPEC_DPS_W_PH = 150,
  UNSPEC_MADD = 151,
  UNSPEC_MADDU = 152,
  UNSPEC_MSUB = 153,
  UNSPEC_MSUBU = 154,
  UNSPEC_MUL_PH = 155,
  UNSPEC_MUL_S_PH = 156,
  UNSPEC_MULQ_RS_W = 157,
  UNSPEC_MULQ_S_PH = 158,
  UNSPEC_MULQ_S_W = 159,
  UNSPEC_MULSA_W_PH = 160,
  UNSPEC_MULT = 161,
  UNSPEC_MULTU = 162,
  UNSPEC_PRECR_QB_PH = 163,
  UNSPEC_PRECR_SRA_PH_W = 164,
  UNSPEC_PRECR_SRA_R_PH_W = 165,
  UNSPEC_PREPEND = 166,
  UNSPEC_SHRA_QB = 167,
  UNSPEC_SHRA_R_QB = 168,
  UNSPEC_SHRL_PH = 169,
  UNSPEC_SUBU_PH = 170,
  UNSPEC_SUBU_S_PH = 171,
  UNSPEC_SUBUH_QB = 172,
  UNSPEC_SUBUH_R_QB = 173,
  UNSPEC_ADDQH_PH = 174,
  UNSPEC_ADDQH_R_PH = 175,
  UNSPEC_ADDQH_W = 176,
  UNSPEC_ADDQH_R_W = 177,
  UNSPEC_SUBQH_PH = 178,
  UNSPEC_SUBQH_R_PH = 179,
  UNSPEC_SUBQH_W = 180,
  UNSPEC_SUBQH_R_W = 181,
  UNSPEC_DPAX_W_PH = 182,
  UNSPEC_DPSX_W_PH = 183,
  UNSPEC_DPAQX_S_W_PH = 184,
  UNSPEC_DPAQX_SA_W_PH = 185,
  UNSPEC_DPSQX_S_W_PH = 186,
  UNSPEC_DPSQX_SA_W_PH = 187,
  UNSPEC_LOONGSON_PAVG = 188,
  UNSPEC_LOONGSON_PCMPEQ = 189,
  UNSPEC_LOONGSON_PCMPGT = 190,
  UNSPEC_LOONGSON_PEXTR = 191,
  UNSPEC_LOONGSON_PINSR_0 = 192,
  UNSPEC_LOONGSON_PINSR_1 = 193,
  UNSPEC_LOONGSON_PINSR_2 = 194,
  UNSPEC_LOONGSON_PINSR_3 = 195,
  UNSPEC_LOONGSON_PMADD = 196,
  UNSPEC_LOONGSON_PMOVMSK = 197,
  UNSPEC_LOONGSON_PMULHU = 198,
  UNSPEC_LOONGSON_PMULH = 199,
  UNSPEC_LOONGSON_PMULU = 200,
  UNSPEC_LOONGSON_PASUBUB = 201,
  UNSPEC_LOONGSON_BIADD = 202,
  UNSPEC_LOONGSON_PSADBH = 203,
  UNSPEC_LOONGSON_PSHUFH = 204,
  UNSPEC_LOONGSON_PUNPCKH = 205,
  UNSPEC_LOONGSON_PUNPCKL = 206,
  UNSPEC_LOONGSON_PADDD = 207,
  UNSPEC_LOONGSON_PSUBD = 208,
  UNSPEC_ADDRESS_FIRST = 209
};
#define NUM_UNSPEC_VALUES 210
extern const char *const unspec_strings[];

enum processor {
  PROCESSOR_R3000 = 0,
  PROCESSOR_4KC = 1,
  PROCESSOR_4KP = 2,
  PROCESSOR_5KC = 3,
  PROCESSOR_5KF = 4,
  PROCESSOR_20KC = 5,
  PROCESSOR_24KC = 6,
  PROCESSOR_24KF2_1 = 7,
  PROCESSOR_24KF1_1 = 8,
  PROCESSOR_74KC = 9,
  PROCESSOR_74KF2_1 = 10,
  PROCESSOR_74KF1_1 = 11,
  PROCESSOR_74KF3_2 = 12,
  PROCESSOR_LOONGSON_2E = 13,
  PROCESSOR_LOONGSON_2F = 14,
  PROCESSOR_LOONGSON_3A = 15,
  PROCESSOR_M4K = 16,
  PROCESSOR_OCTEON = 17,
  PROCESSOR_R3900 = 18,
  PROCESSOR_R6000 = 19,
  PROCESSOR_R4000 = 20,
  PROCESSOR_R4100 = 21,
  PROCESSOR_R4111 = 22,
  PROCESSOR_R4120 = 23,
  PROCESSOR_R4130 = 24,
  PROCESSOR_R4300 = 25,
  PROCESSOR_R4600 = 26,
  PROCESSOR_R4650 = 27,
  PROCESSOR_R5000 = 28,
  PROCESSOR_R5400 = 29,
  PROCESSOR_R5500 = 30,
  PROCESSOR_R7000 = 31,
  PROCESSOR_R8000 = 32,
  PROCESSOR_R9000 = 33,
  PROCESSOR_R10000 = 34,
  PROCESSOR_SB1 = 35,
  PROCESSOR_SB1A = 36,
  PROCESSOR_SR71000 = 37,
  PROCESSOR_XLR = 38
};
#define NUM_PROCESSOR_VALUES 39
extern const char *const processor_strings[];

#endif /* GCC_INSN_CONSTANTS_H */