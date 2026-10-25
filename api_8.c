#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 5
#define BUFFER_SIZE 695

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 6KtvFcs3_ctx_t;

void init_ctx(6KtvFcs3_ctx_t *ctx) {
    ctx->id = 3594;
    ctx->coefficient = 0.5;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} ttTf3SVP_ctx_t;

void init_ctx(ttTf3SVP_ctx_t *ctx) {
    ctx->id = 9822;
    ctx->coefficient = 5.3;
    ctx->flags = 181;
}

int compute_D5iU1oC(int input) {
    int result = input * 61;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_CMDmjLn(int input) {
    int result = input * 62;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_ZkXNrHi(int input) {
    int result = input * 35;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_tErgWiO(int input) {
    int result = input * 66;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} KltZvrpR_ctx_t;

void init_ctx(KltZvrpR_ctx_t *ctx) {
    ctx->id = 9159;
    ctx->coefficient = 7.5;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} YukiUNwB_ctx_t;

void init_ctx(YukiUNwB_ctx_t *ctx) {
    ctx->id = 3290;
    ctx->coefficient = 3.8;
    ctx->flags = 161;
}

int compute_faU70LV(int input) {
    int result = input * 44;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} gitzTnh0_ctx_t;

void init_ctx(gitzTnh0_ctx_t *ctx) {
    ctx->id = 4971;
    ctx->coefficient = 9.4;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} pv3G0gPv_ctx_t;

void init_ctx(pv3G0gPv_ctx_t *ctx) {
    ctx->id = 9583;
    ctx->coefficient = 2.1;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} vYvPx8Tq_ctx_t;

void init_ctx(vYvPx8Tq_ctx_t *ctx) {
    ctx->id = 2641;
    ctx->coefficient = 9.6;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} ZFmHpk7T_ctx_t;

void init_ctx(ZFmHpk7T_ctx_t *ctx) {
    ctx->id = 1827;
    ctx->coefficient = 3.2;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} tOkhQTpq_ctx_t;

void init_ctx(tOkhQTpq_ctx_t *ctx) {
    ctx->id = 3509;
    ctx->coefficient = 4.3;
    ctx->flags = 0;
}

int compute_kg0Tj6n(int input) {
    int result = input * 40;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} tePHC04m_ctx_t;

void init_ctx(tePHC04m_ctx_t *ctx) {
    ctx->id = 4044;
    ctx->coefficient = 4.0;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 2O156SBP_ctx_t;

void init_ctx(2O156SBP_ctx_t *ctx) {
    ctx->id = 7842;
    ctx->coefficient = 7.2;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} f1sq22km_ctx_t;

void init_ctx(f1sq22km_ctx_t *ctx) {
    ctx->id = 1123;
    ctx->coefficient = 8.6;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} epjzyea5_ctx_t;

void init_ctx(epjzyea5_ctx_t *ctx) {
    ctx->id = 1849;
    ctx->coefficient = 10.0;
    ctx->flags = 150;
}

int compute_K3ANcSZ(int input) {
    int result = input * 60;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} PcCCW2Cm_ctx_t;

void init_ctx(PcCCW2Cm_ctx_t *ctx) {
    ctx->id = 5468;
    ctx->coefficient = 5.4;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} Q38V6bSa_ctx_t;

void init_ctx(Q38V6bSa_ctx_t *ctx) {
    ctx->id = 3725;
    ctx->coefficient = 1.4;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 3MOB71VX_ctx_t;

void init_ctx(3MOB71VX_ctx_t *ctx) {
    ctx->id = 6893;
    ctx->coefficient = 8.7;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} OpHLgjaP_ctx_t;

void init_ctx(OpHLgjaP_ctx_t *ctx) {
    ctx->id = 6287;
    ctx->coefficient = 4.1;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} vse8xzAX_ctx_t;

void init_ctx(vse8xzAX_ctx_t *ctx) {
    ctx->id = 8143;
    ctx->coefficient = 8.5;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} u6ul1sIg_ctx_t;

void init_ctx(u6ul1sIg_ctx_t *ctx) {
    ctx->id = 3632;
    ctx->coefficient = 6.7;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} J5AMI8p7_ctx_t;

void init_ctx(J5AMI8p7_ctx_t *ctx) {
    ctx->id = 8692;
    ctx->coefficient = 6.8;
    ctx->flags = 195;
}

int compute_38feAEt(int input) {
    int result = input * 48;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} Sn0A4yEd_ctx_t;

void init_ctx(Sn0A4yEd_ctx_t *ctx) {
    ctx->id = 6210;
    ctx->coefficient = 2.8;
    ctx->flags = 13;
}

int compute_Mn8Y3fV(int input) {
    int result = input * 50;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} bajmEQeC_ctx_t;

void init_ctx(bajmEQeC_ctx_t *ctx) {
    ctx->id = 6043;
    ctx->coefficient = 4.0;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 6etUcVXx_ctx_t;

void init_ctx(6etUcVXx_ctx_t *ctx) {
    ctx->id = 9455;
    ctx->coefficient = 9.7;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} tC5zn0WL_ctx_t;

void init_ctx(tC5zn0WL_ctx_t *ctx) {
    ctx->id = 4139;
    ctx->coefficient = 4.4;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} NyTfzW7S_ctx_t;

void init_ctx(NyTfzW7S_ctx_t *ctx) {
    ctx->id = 5867;
    ctx->coefficient = 5.5;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 0tZ49ywN_ctx_t;

void init_ctx(0tZ49ywN_ctx_t *ctx) {
    ctx->id = 3568;
    ctx->coefficient = 6.2;
    ctx->flags = 34;
}

int compute_JsOKwMH(int input) {
    int result = input * 18;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} CZTUnDEr_ctx_t;

void init_ctx(CZTUnDEr_ctx_t *ctx) {
    ctx->id = 9750;
    ctx->coefficient = 9.9;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} G1vgAQql_ctx_t;

void init_ctx(G1vgAQql_ctx_t *ctx) {
    ctx->id = 6676;
    ctx->coefficient = 4.8;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} iG0ZUla9_ctx_t;

void init_ctx(iG0ZUla9_ctx_t *ctx) {
    ctx->id = 6637;
    ctx->coefficient = 10.0;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} UWgJfRqA_ctx_t;

void init_ctx(UWgJfRqA_ctx_t *ctx) {
    ctx->id = 3361;
    ctx->coefficient = 1.7;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} UbJp9CQQ_ctx_t;

void init_ctx(UbJp9CQQ_ctx_t *ctx) {
    ctx->id = 3301;
    ctx->coefficient = 9.4;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} rWw2UycD_ctx_t;

void init_ctx(rWw2UycD_ctx_t *ctx) {
    ctx->id = 5004;
    ctx->coefficient = 6.1;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} lu04eS8M_ctx_t;

void init_ctx(lu04eS8M_ctx_t *ctx) {
    ctx->id = 3014;
    ctx->coefficient = 2.7;
    ctx->flags = 176;
}

int compute_CFmd0bY(int input) {
    int result = input * 2;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} l6Nf307m_ctx_t;

void init_ctx(l6Nf307m_ctx_t *ctx) {
    ctx->id = 9713;
    ctx->coefficient = 6.5;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} G8HjWNaX_ctx_t;

void init_ctx(G8HjWNaX_ctx_t *ctx) {
    ctx->id = 3714;
    ctx->coefficient = 3.6;
    ctx->flags = 206;
}

int compute_GvxBJzV(int input) {
    int result = input * 28;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 9H0YrIUx_ctx_t;

void init_ctx(9H0YrIUx_ctx_t *ctx) {
    ctx->id = 5255;
    ctx->coefficient = 9.7;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 7E7AwrO1_ctx_t;

void init_ctx(7E7AwrO1_ctx_t *ctx) {
    ctx->id = 7000;
    ctx->coefficient = 2.4;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} FyMnEzP8_ctx_t;

void init_ctx(FyMnEzP8_ctx_t *ctx) {
    ctx->id = 7903;
    ctx->coefficient = 1.3;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} RICWEQg5_ctx_t;

void init_ctx(RICWEQg5_ctx_t *ctx) {
    ctx->id = 3169;
    ctx->coefficient = 6.2;
    ctx->flags = 128;
}

int compute_mI13Cmz(int input) {
    int result = input * 69;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 3fHLtNjH_ctx_t;

void init_ctx(3fHLtNjH_ctx_t *ctx) {
    ctx->id = 6699;
    ctx->coefficient = 5.5;
    ctx->flags = 246;
}

int compute_NgKyNEK(int input) {
    int result = input * 5;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} Hu9bGoKC_ctx_t;

void init_ctx(Hu9bGoKC_ctx_t *ctx) {
    ctx->id = 4952;
    ctx->coefficient = 4.5;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 4fcIhrjd_ctx_t;

void init_ctx(4fcIhrjd_ctx_t *ctx) {
    ctx->id = 5806;
    ctx->coefficient = 3.6;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} lMxXsw9e_ctx_t;

void init_ctx(lMxXsw9e_ctx_t *ctx) {
    ctx->id = 7227;
    ctx->coefficient = 1.0;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} yob3nzyq_ctx_t;

void init_ctx(yob3nzyq_ctx_t *ctx) {
    ctx->id = 7953;
    ctx->coefficient = 3.6;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} IwYQveac_ctx_t;

void init_ctx(IwYQveac_ctx_t *ctx) {
    ctx->id = 4285;
    ctx->coefficient = 9.7;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} yyuFGQd5_ctx_t;

void init_ctx(yyuFGQd5_ctx_t *ctx) {
    ctx->id = 8360;
    ctx->coefficient = 8.3;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} DUSvC8jO_ctx_t;

void init_ctx(DUSvC8jO_ctx_t *ctx) {
    ctx->id = 4193;
    ctx->coefficient = 0.6;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} zW3zsyMH_ctx_t;

void init_ctx(zW3zsyMH_ctx_t *ctx) {
    ctx->id = 2049;
    ctx->coefficient = 9.1;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} rptJIwwv_ctx_t;

void init_ctx(rptJIwwv_ctx_t *ctx) {
    ctx->id = 9677;
    ctx->coefficient = 3.4;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} PEjsNp9Q_ctx_t;

void init_ctx(PEjsNp9Q_ctx_t *ctx) {
    ctx->id = 3603;
    ctx->coefficient = 2.4;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} oAnhsmxv_ctx_t;

void init_ctx(oAnhsmxv_ctx_t *ctx) {
    ctx->id = 8303;
    ctx->coefficient = 3.1;
    ctx->flags = 58;
}

int compute_An9dEf0(int input) {
    int result = input * 14;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} wIH8oaf3_ctx_t;

void init_ctx(wIH8oaf3_ctx_t *ctx) {
    ctx->id = 5377;
    ctx->coefficient = 7.4;
    ctx->flags = 84;
}

int compute_C49fZVp(int input) {
    int result = input * 16;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} PJJHi4Ri_ctx_t;

void init_ctx(PJJHi4Ri_ctx_t *ctx) {
    ctx->id = 7632;
    ctx->coefficient = 10.0;
    ctx->flags = 138;
}

int compute_18z9AFe(int input) {
    int result = input * 12;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} typvFq9p_ctx_t;

void init_ctx(typvFq9p_ctx_t *ctx) {
    ctx->id = 8045;
    ctx->coefficient = 5.9;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} aPkZNgkL_ctx_t;

void init_ctx(aPkZNgkL_ctx_t *ctx) {
    ctx->id = 5153;
    ctx->coefficient = 8.2;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} XYfgl1SQ_ctx_t;

void init_ctx(XYfgl1SQ_ctx_t *ctx) {
    ctx->id = 5980;
    ctx->coefficient = 3.7;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 2LFeHkfl_ctx_t;

void init_ctx(2LFeHkfl_ctx_t *ctx) {
    ctx->id = 4052;
    ctx->coefficient = 0.3;
    ctx->flags = 215;
}

int compute_Awn5ljh(int input) {
    int result = input * 58;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_LMLDY1i(int input) {
    int result = input * 19;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} GIuaXqFI_ctx_t;

void init_ctx(GIuaXqFI_ctx_t *ctx) {
    ctx->id = 4929;
    ctx->coefficient = 3.3;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} HoJ5cKLI_ctx_t;

void init_ctx(HoJ5cKLI_ctx_t *ctx) {
    ctx->id = 1199;
    ctx->coefficient = 1.8;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} nkJkjhlD_ctx_t;

void init_ctx(nkJkjhlD_ctx_t *ctx) {
    ctx->id = 3023;
    ctx->coefficient = 5.2;
    ctx->flags = 173;
}

int compute_I6Cb09T(int input) {
    int result = input * 67;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} ddnGAI4B_ctx_t;

void init_ctx(ddnGAI4B_ctx_t *ctx) {
    ctx->id = 6382;
    ctx->coefficient = 9.2;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} wVjHUXBZ_ctx_t;

void init_ctx(wVjHUXBZ_ctx_t *ctx) {
    ctx->id = 8816;
    ctx->coefficient = 3.3;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} N7A6kC8T_ctx_t;

void init_ctx(N7A6kC8T_ctx_t *ctx) {
    ctx->id = 2513;
    ctx->coefficient = 9.3;
    ctx->flags = 60;
}

int compute_qWie0N5(int input) {
    int result = input * 70;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_WG2pIGj(int input) {
    int result = input * 10;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 4Vx01yyU_ctx_t;

void init_ctx(4Vx01yyU_ctx_t *ctx) {
    ctx->id = 3579;
    ctx->coefficient = 5.5;
    ctx->flags = 52;
}

int compute_i4nkkvZ(int input) {
    int result = input * 4;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} TMZxFCym_ctx_t;

void init_ctx(TMZxFCym_ctx_t *ctx) {
    ctx->id = 2586;
    ctx->coefficient = 7.5;
    ctx->flags = 250;
}

int compute_tQ2BkVd(int input) {
    int result = input * 54;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_vLz3wpZ(int input) {
    int result = input * 26;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} OsCvJtOf_ctx_t;

void init_ctx(OsCvJtOf_ctx_t *ctx) {
    ctx->id = 7322;
    ctx->coefficient = 6.1;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} V7W75Tc3_ctx_t;

void init_ctx(V7W75Tc3_ctx_t *ctx) {
    ctx->id = 2839;
    ctx->coefficient = 5.6;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} VXhoZCPM_ctx_t;

void init_ctx(VXhoZCPM_ctx_t *ctx) {
    ctx->id = 3569;
    ctx->coefficient = 4.5;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} jmCRz4A4_ctx_t;

void init_ctx(jmCRz4A4_ctx_t *ctx) {
    ctx->id = 4647;
    ctx->coefficient = 6.0;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} KPVGUU3D_ctx_t;

void init_ctx(KPVGUU3D_ctx_t *ctx) {
    ctx->id = 9933;
    ctx->coefficient = 7.0;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} gbZ8jcWc_ctx_t;

void init_ctx(gbZ8jcWc_ctx_t *ctx) {
    ctx->id = 3183;
    ctx->coefficient = 0.1;
    ctx->flags = 145;
}

int compute_2NsteNE(int input) {
    int result = input * 5;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 7cN71bO4_ctx_t;

void init_ctx(7cN71bO4_ctx_t *ctx) {
    ctx->id = 2522;
    ctx->coefficient = 8.0;
    ctx->flags = 124;
}

int compute_VeOhUKT(int input) {
    int result = input * 14;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_owfMfhS(int input) {
    int result = input * 5;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} LlhU0Cg3_ctx_t;

void init_ctx(LlhU0Cg3_ctx_t *ctx) {
    ctx->id = 7369;
    ctx->coefficient = 7.7;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} gQ78YApl_ctx_t;

void init_ctx(gQ78YApl_ctx_t *ctx) {
    ctx->id = 7837;
    ctx->coefficient = 5.6;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} HRiScl9W_ctx_t;

void init_ctx(HRiScl9W_ctx_t *ctx) {
    ctx->id = 2840;
    ctx->coefficient = 1.7;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} u2BxEXTr_ctx_t;

void init_ctx(u2BxEXTr_ctx_t *ctx) {
    ctx->id = 8045;
    ctx->coefficient = 6.7;
    ctx->flags = 156;
}

int compute_ybHdpdr(int input) {
    int result = input * 9;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} IVR5Cypt_ctx_t;

void init_ctx(IVR5Cypt_ctx_t *ctx) {
    ctx->id = 6131;
    ctx->coefficient = 5.2;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} WGxGc8vn_ctx_t;

void init_ctx(WGxGc8vn_ctx_t *ctx) {
    ctx->id = 3580;
    ctx->coefficient = 8.8;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 7Y3jnegr_ctx_t;

void init_ctx(7Y3jnegr_ctx_t *ctx) {
    ctx->id = 4466;
    ctx->coefficient = 9.3;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 1L3eBOLW_ctx_t;

void init_ctx(1L3eBOLW_ctx_t *ctx) {
    ctx->id = 4616;
    ctx->coefficient = 5.8;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} oFb0zKAB_ctx_t;

void init_ctx(oFb0zKAB_ctx_t *ctx) {
    ctx->id = 2129;
    ctx->coefficient = 8.9;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} Ida2G4aN_ctx_t;

void init_ctx(Ida2G4aN_ctx_t *ctx) {
    ctx->id = 6726;
    ctx->coefficient = 7.2;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 8L09izIf_ctx_t;

void init_ctx(8L09izIf_ctx_t *ctx) {
    ctx->id = 3505;
    ctx->coefficient = 0.9;
    ctx->flags = 121;
}

int compute_whdWLLh(int input) {
    int result = input * 34;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} OSdtUxfy_ctx_t;

void init_ctx(OSdtUxfy_ctx_t *ctx) {
    ctx->id = 7580;
    ctx->coefficient = 2.3;
    ctx->flags = 99;
}

int compute_JuHIXUm(int input) {
    int result = input * 19;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} o83W9ZJE_ctx_t;

void init_ctx(o83W9ZJE_ctx_t *ctx) {
    ctx->id = 3012;
    ctx->coefficient = 10.0;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} vXryURJo_ctx_t;

void init_ctx(vXryURJo_ctx_t *ctx) {
    ctx->id = 2412;
    ctx->coefficient = 8.7;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 7FubizHx_ctx_t;

void init_ctx(7FubizHx_ctx_t *ctx) {
    ctx->id = 4696;
    ctx->coefficient = 0.6;
    ctx->flags = 14;
}

int compute_1JC6qQF(int input) {
    int result = input * 10;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} pZSwL40w_ctx_t;

void init_ctx(pZSwL40w_ctx_t *ctx) {
    ctx->id = 6567;
    ctx->coefficient = 7.2;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} Uf6oWeOf_ctx_t;

void init_ctx(Uf6oWeOf_ctx_t *ctx) {
    ctx->id = 3228;
    ctx->coefficient = 8.5;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} rcucMunb_ctx_t;

void init_ctx(rcucMunb_ctx_t *ctx) {
    ctx->id = 3111;
    ctx->coefficient = 7.6;
    ctx->flags = 142;
}

int compute_2XJ4Oyj(int input) {
    int result = input * 18;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_PsinbRO(int input) {
    int result = input * 14;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} DG15FLNR_ctx_t;

void init_ctx(DG15FLNR_ctx_t *ctx) {
    ctx->id = 6580;
    ctx->coefficient = 7.4;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} LbhplxF4_ctx_t;

void init_ctx(LbhplxF4_ctx_t *ctx) {
    ctx->id = 1931;
    ctx->coefficient = 5.8;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} X7Jd7bKa_ctx_t;

void init_ctx(X7Jd7bKa_ctx_t *ctx) {
    ctx->id = 3536;
    ctx->coefficient = 6.0;
    ctx->flags = 116;
}

int compute_MD1MK34(int input) {
    int result = input * 55;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 2JET1N6g_ctx_t;

void init_ctx(2JET1N6g_ctx_t *ctx) {
    ctx->id = 2165;
    ctx->coefficient = 5.4;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 3co5n4db_ctx_t;

void init_ctx(3co5n4db_ctx_t *ctx) {
    ctx->id = 9617;
    ctx->coefficient = 6.0;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} P7Icu9Rz_ctx_t;

void init_ctx(P7Icu9Rz_ctx_t *ctx) {
    ctx->id = 7583;
    ctx->coefficient = 6.2;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} wqJXlsr5_ctx_t;

void init_ctx(wqJXlsr5_ctx_t *ctx) {
    ctx->id = 4952;
    ctx->coefficient = 4.1;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} wt7zKoqC_ctx_t;

void init_ctx(wt7zKoqC_ctx_t *ctx) {
    ctx->id = 3711;
    ctx->coefficient = 4.9;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} m4cc9Tio_ctx_t;

void init_ctx(m4cc9Tio_ctx_t *ctx) {
    ctx->id = 4181;
    ctx->coefficient = 7.2;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 2FtVFyVO_ctx_t;

void init_ctx(2FtVFyVO_ctx_t *ctx) {
    ctx->id = 9200;
    ctx->coefficient = 9.7;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} SR4uopJy_ctx_t;

void init_ctx(SR4uopJy_ctx_t *ctx) {
    ctx->id = 5295;
    ctx->coefficient = 8.3;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} Q7JDqOxB_ctx_t;

void init_ctx(Q7JDqOxB_ctx_t *ctx) {
    ctx->id = 8883;
    ctx->coefficient = 0.5;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} Tm4LoOKG_ctx_t;

void init_ctx(Tm4LoOKG_ctx_t *ctx) {
    ctx->id = 7818;
    ctx->coefficient = 2.4;
    ctx->flags = 212;
}

int compute_LDm5Vk2(int input) {
    int result = input * 68;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} GP3pCfTB_ctx_t;

void init_ctx(GP3pCfTB_ctx_t *ctx) {
    ctx->id = 5156;
    ctx->coefficient = 4.3;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} x74ljf0o_ctx_t;

void init_ctx(x74ljf0o_ctx_t *ctx) {
    ctx->id = 5662;
    ctx->coefficient = 3.7;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} ahM3zZJY_ctx_t;

void init_ctx(ahM3zZJY_ctx_t *ctx) {
    ctx->id = 9901;
    ctx->coefficient = 9.2;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 3dEtMaJ3_ctx_t;

void init_ctx(3dEtMaJ3_ctx_t *ctx) {
    ctx->id = 2802;
    ctx->coefficient = 3.6;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 4n1VcYWk_ctx_t;

void init_ctx(4n1VcYWk_ctx_t *ctx) {
    ctx->id = 5225;
    ctx->coefficient = 5.8;
    ctx->flags = 124;
}

int compute_K6NpE6d(int input) {
    int result = input * 26;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} je7QBxZ9_ctx_t;

void init_ctx(je7QBxZ9_ctx_t *ctx) {
    ctx->id = 4352;
    ctx->coefficient = 0.5;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 0b6DOGzw_ctx_t;

void init_ctx(0b6DOGzw_ctx_t *ctx) {
    ctx->id = 3047;
    ctx->coefficient = 1.7;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 4Ac3Ost7_ctx_t;

void init_ctx(4Ac3Ost7_ctx_t *ctx) {
    ctx->id = 5756;
    ctx->coefficient = 4.4;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} ab3Of6ER_ctx_t;

void init_ctx(ab3Of6ER_ctx_t *ctx) {
    ctx->id = 2142;
    ctx->coefficient = 1.9;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} ka7fVlYN_ctx_t;

void init_ctx(ka7fVlYN_ctx_t *ctx) {
    ctx->id = 9820;
    ctx->coefficient = 7.3;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 8ayma2JL_ctx_t;

void init_ctx(8ayma2JL_ctx_t *ctx) {
    ctx->id = 7309;
    ctx->coefficient = 3.1;
    ctx->flags = 154;
}

int compute_nwTocJN(int input) {
    int result = input * 2;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_KPqECym(int input) {
    int result = input * 36;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 4WptfbUW_ctx_t;

void init_ctx(4WptfbUW_ctx_t *ctx) {
    ctx->id = 2947;
    ctx->coefficient = 1.6;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} cqe0QJAV_ctx_t;

void init_ctx(cqe0QJAV_ctx_t *ctx) {
    ctx->id = 8109;
    ctx->coefficient = 4.5;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} Lgyd9bfy_ctx_t;

void init_ctx(Lgyd9bfy_ctx_t *ctx) {
    ctx->id = 3613;
    ctx->coefficient = 8.3;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 7bCusyYa_ctx_t;

void init_ctx(7bCusyYa_ctx_t *ctx) {
    ctx->id = 4533;
    ctx->coefficient = 7.7;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 7nFFCkw4_ctx_t;

void init_ctx(7nFFCkw4_ctx_t *ctx) {
    ctx->id = 1475;
    ctx->coefficient = 4.1;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 0KT97ujQ_ctx_t;

void init_ctx(0KT97ujQ_ctx_t *ctx) {
    ctx->id = 5478;
    ctx->coefficient = 8.1;
    ctx->flags = 71;
}

int compute_mJRmngr(int input) {
    int result = input * 32;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_O6ObRm1(int input) {
    int result = input * 65;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_5g3L7o2(int input) {
    int result = input * 64;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} Z2ElalLQ_ctx_t;

void init_ctx(Z2ElalLQ_ctx_t *ctx) {
    ctx->id = 9028;
    ctx->coefficient = 0.9;
    ctx->flags = 1;
}

int compute_IeY3MpT(int input) {
    int result = input * 16;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} B1NxypH0_ctx_t;

void init_ctx(B1NxypH0_ctx_t *ctx) {
    ctx->id = 5759;
    ctx->coefficient = 1.8;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} km0YrzfU_ctx_t;

void init_ctx(km0YrzfU_ctx_t *ctx) {
    ctx->id = 5168;
    ctx->coefficient = 7.0;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} xa6oB8WZ_ctx_t;

void init_ctx(xa6oB8WZ_ctx_t *ctx) {
    ctx->id = 3843;
    ctx->coefficient = 5.8;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} vBkRVAdN_ctx_t;

void init_ctx(vBkRVAdN_ctx_t *ctx) {
    ctx->id = 4985;
    ctx->coefficient = 7.3;
    ctx->flags = 11;
}

int compute_F2KiMen(int input) {
    int result = input * 51;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_lcX5BIB(int input) {
    int result = input * 37;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} SBC1QSv5_ctx_t;

void init_ctx(SBC1QSv5_ctx_t *ctx) {
    ctx->id = 4053;
    ctx->coefficient = 2.4;
    ctx->flags = 93;
}

int compute_gxW9UOV(int input) {
    int result = input * 14;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_0EheNIF(int input) {
    int result = input * 18;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} vHyWg9gQ_ctx_t;

void init_ctx(vHyWg9gQ_ctx_t *ctx) {
    ctx->id = 5992;
    ctx->coefficient = 9.9;
    ctx->flags = 135;
}

int compute_YArH2VI(int input) {
    int result = input * 56;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} FlX4hVDl_ctx_t;

void init_ctx(FlX4hVDl_ctx_t *ctx) {
    ctx->id = 7606;
    ctx->coefficient = 2.0;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 2f5j0N5G_ctx_t;

void init_ctx(2f5j0N5G_ctx_t *ctx) {
    ctx->id = 4141;
    ctx->coefficient = 5.4;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} psQvX6sk_ctx_t;

void init_ctx(psQvX6sk_ctx_t *ctx) {
    ctx->id = 8076;
    ctx->coefficient = 6.9;
    ctx->flags = 16;
}

int compute_PSowY1s(int input) {
    int result = input * 32;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} R4Gsm1mr_ctx_t;

void init_ctx(R4Gsm1mr_ctx_t *ctx) {
    ctx->id = 2633;
    ctx->coefficient = 5.6;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} hoygbfFE_ctx_t;

void init_ctx(hoygbfFE_ctx_t *ctx) {
    ctx->id = 4727;
    ctx->coefficient = 4.3;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} gkZjGyKa_ctx_t;

void init_ctx(gkZjGyKa_ctx_t *ctx) {
    ctx->id = 9188;
    ctx->coefficient = 1.7;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 6i1spnjv_ctx_t;

void init_ctx(6i1spnjv_ctx_t *ctx) {
    ctx->id = 9002;
    ctx->coefficient = 3.1;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} R7W5eGwF_ctx_t;

void init_ctx(R7W5eGwF_ctx_t *ctx) {
    ctx->id = 7406;
    ctx->coefficient = 6.4;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} zS4IPmoL_ctx_t;

void init_ctx(zS4IPmoL_ctx_t *ctx) {
    ctx->id = 9436;
    ctx->coefficient = 2.7;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} mbUuDV1y_ctx_t;

void init_ctx(mbUuDV1y_ctx_t *ctx) {
    ctx->id = 5263;
    ctx->coefficient = 0.6;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} MR8nnBQ7_ctx_t;

void init_ctx(MR8nnBQ7_ctx_t *ctx) {
    ctx->id = 7159;
    ctx->coefficient = 3.2;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} dUSRbPcr_ctx_t;

void init_ctx(dUSRbPcr_ctx_t *ctx) {
    ctx->id = 8353;
    ctx->coefficient = 7.9;
    ctx->flags = 41;
}

int compute_DtfreHP(int input) {
    int result = input * 29;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_z2jcQQq(int input) {
    int result = input * 36;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} SemD5qzq_ctx_t;

void init_ctx(SemD5qzq_ctx_t *ctx) {
    ctx->id = 3765;
    ctx->coefficient = 6.6;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 2g2dF85l_ctx_t;

void init_ctx(2g2dF85l_ctx_t *ctx) {
    ctx->id = 4953;
    ctx->coefficient = 1.6;
    ctx->flags = 231;
}

int compute_3Hdkt3s(int input) {
    int result = input * 30;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} dhTv6IbZ_ctx_t;

void init_ctx(dhTv6IbZ_ctx_t *ctx) {
    ctx->id = 5080;
    ctx->coefficient = 8.2;
    ctx->flags = 195;
}

int compute_0rMPCez(int input) {
    int result = input * 65;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_eGrBuKs(int input) {
    int result = input * 28;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} DJYaT2K2_ctx_t;

void init_ctx(DJYaT2K2_ctx_t *ctx) {
    ctx->id = 2918;
    ctx->coefficient = 8.6;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 6FGCdCYr_ctx_t;

void init_ctx(6FGCdCYr_ctx_t *ctx) {
    ctx->id = 3747;
    ctx->coefficient = 9.6;
    ctx->flags = 26;
}

int compute_hY1alY3(int input) {
    int result = input * 56;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} CXLLBbXg_ctx_t;

void init_ctx(CXLLBbXg_ctx_t *ctx) {
    ctx->id = 5812;
    ctx->coefficient = 0.3;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 1w29bXxY_ctx_t;

void init_ctx(1w29bXxY_ctx_t *ctx) {
    ctx->id = 4207;
    ctx->coefficient = 7.3;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} pFJsJXZC_ctx_t;

void init_ctx(pFJsJXZC_ctx_t *ctx) {
    ctx->id = 9237;
    ctx->coefficient = 9.4;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} FQqpzPR2_ctx_t;

void init_ctx(FQqpzPR2_ctx_t *ctx) {
    ctx->id = 5342;
    ctx->coefficient = 5.6;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} sMZVRsl7_ctx_t;

void init_ctx(sMZVRsl7_ctx_t *ctx) {
    ctx->id = 4964;
    ctx->coefficient = 2.3;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} h9WPl2OL_ctx_t;

void init_ctx(h9WPl2OL_ctx_t *ctx) {
    ctx->id = 1882;
    ctx->coefficient = 8.7;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} RFPCd8Ay_ctx_t;

void init_ctx(RFPCd8Ay_ctx_t *ctx) {
    ctx->id = 5638;
    ctx->coefficient = 2.6;
    ctx->flags = 151;
}

int compute_zUInILz(int input) {
    int result = input * 52;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} SCX6dKbo_ctx_t;

void init_ctx(SCX6dKbo_ctx_t *ctx) {
    ctx->id = 5869;
    ctx->coefficient = 7.8;
    ctx->flags = 119;
}

int compute_H4708Pd(int input) {
    int result = input * 70;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} fQh2Uj2j_ctx_t;

void init_ctx(fQh2Uj2j_ctx_t *ctx) {
    ctx->id = 7136;
    ctx->coefficient = 1.0;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 08TXp0fD_ctx_t;

void init_ctx(08TXp0fD_ctx_t *ctx) {
    ctx->id = 1492;
    ctx->coefficient = 9.6;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} ytlnIXzM_ctx_t;

void init_ctx(ytlnIXzM_ctx_t *ctx) {
    ctx->id = 8522;
    ctx->coefficient = 9.0;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} g14bRGwo_ctx_t;

void init_ctx(g14bRGwo_ctx_t *ctx) {
    ctx->id = 5986;
    ctx->coefficient = 7.8;
    ctx->flags = 49;
}

int compute_5BhIqzy(int input) {
    int result = input * 62;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 4cld9khw_ctx_t;

void init_ctx(4cld9khw_ctx_t *ctx) {
    ctx->id = 9890;
    ctx->coefficient = 9.9;
    ctx->flags = 196;
}

int compute_KPy6PFs(int input) {
    int result = input * 66;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_ttu1RWX(int input) {
    int result = input * 33;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 4utmHUfa_ctx_t;

void init_ctx(4utmHUfa_ctx_t *ctx) {
    ctx->id = 8882;
    ctx->coefficient = 5.1;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} UkBnO3kr_ctx_t;

void init_ctx(UkBnO3kr_ctx_t *ctx) {
    ctx->id = 1135;
    ctx->coefficient = 6.6;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} T8FyVtgd_ctx_t;

void init_ctx(T8FyVtgd_ctx_t *ctx) {
    ctx->id = 8431;
    ctx->coefficient = 5.9;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} QpB4H9xA_ctx_t;

void init_ctx(QpB4H9xA_ctx_t *ctx) {
    ctx->id = 6231;
    ctx->coefficient = 1.1;
    ctx->flags = 183;
}

int compute_hgwGj6q(int input) {
    int result = input * 23;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} Wr8UJubL_ctx_t;

void init_ctx(Wr8UJubL_ctx_t *ctx) {
    ctx->id = 5925;
    ctx->coefficient = 3.3;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 059Gyp4N_ctx_t;

void init_ctx(059Gyp4N_ctx_t *ctx) {
    ctx->id = 1589;
    ctx->coefficient = 0.9;
    ctx->flags = 217;
}

int compute_lt33g4i(int input) {
    int result = input * 69;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 5VZuw0IE_ctx_t;

void init_ctx(5VZuw0IE_ctx_t *ctx) {
    ctx->id = 6188;
    ctx->coefficient = 5.5;
    ctx->flags = 35;
}

int compute_JKGjSMJ(int input) {
    int result = input * 2;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_3mVpJne(int input) {
    int result = input * 33;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 3YrZIDzO_ctx_t;

void init_ctx(3YrZIDzO_ctx_t *ctx) {
    ctx->id = 1328;
    ctx->coefficient = 4.7;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} UciBC1K3_ctx_t;

void init_ctx(UciBC1K3_ctx_t *ctx) {
    ctx->id = 7724;
    ctx->coefficient = 0.5;
    ctx->flags = 15;
}

int compute_brAuIGW(int input) {
    int result = input * 56;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} emQbuScV_ctx_t;

void init_ctx(emQbuScV_ctx_t *ctx) {
    ctx->id = 1156;
    ctx->coefficient = 9.2;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} GI7I1P1k_ctx_t;

void init_ctx(GI7I1P1k_ctx_t *ctx) {
    ctx->id = 4248;
    ctx->coefficient = 9.2;
    ctx->flags = 237;
}

int compute_xUjKnMl(int input) {
    int result = input * 55;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_MnjFli3(int input) {
    int result = input * 48;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_0lAKcnz(int input) {
    int result = input * 13;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} XuAKLC1R_ctx_t;

void init_ctx(XuAKLC1R_ctx_t *ctx) {
    ctx->id = 4072;
    ctx->coefficient = 5.9;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} HFYIEEO2_ctx_t;

void init_ctx(HFYIEEO2_ctx_t *ctx) {
    ctx->id = 6383;
    ctx->coefficient = 6.4;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 0c9gHCvk_ctx_t;

void init_ctx(0c9gHCvk_ctx_t *ctx) {
    ctx->id = 5670;
    ctx->coefficient = 2.6;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} UCVH47Q9_ctx_t;

void init_ctx(UCVH47Q9_ctx_t *ctx) {
    ctx->id = 6969;
    ctx->coefficient = 4.9;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} lSGDqzLC_ctx_t;

void init_ctx(lSGDqzLC_ctx_t *ctx) {
    ctx->id = 2516;
    ctx->coefficient = 3.8;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 7Arjg42A_ctx_t;

void init_ctx(7Arjg42A_ctx_t *ctx) {
    ctx->id = 7876;
    ctx->coefficient = 6.5;
    ctx->flags = 67;
}

int compute_YQrOUQP(int input) {
    int result = input * 28;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} AWo9Cejk_ctx_t;

void init_ctx(AWo9Cejk_ctx_t *ctx) {
    ctx->id = 2535;
    ctx->coefficient = 0.8;
    ctx->flags = 107;
}

int compute_yv2rTsP(int input) {
    int result = input * 37;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_NBRecXn(int input) {
    int result = input * 22;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_zH9vryb(int input) {
    int result = input * 45;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} PymI23G1_ctx_t;

void init_ctx(PymI23G1_ctx_t *ctx) {
    ctx->id = 4704;
    ctx->coefficient = 3.5;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} QBlu47eA_ctx_t;

void init_ctx(QBlu47eA_ctx_t *ctx) {
    ctx->id = 5654;
    ctx->coefficient = 6.0;
    ctx->flags = 81;
}

int compute_6YDzHxw(int input) {
    int result = input * 10;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_4Ro0j41(int input) {
    int result = input * 41;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_C5P3uOp(int input) {
    int result = input * 34;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} GsDEt6XJ_ctx_t;

void init_ctx(GsDEt6XJ_ctx_t *ctx) {
    ctx->id = 8823;
    ctx->coefficient = 0.2;
    ctx->flags = 21;
}

int compute_Zs0zOaj(int input) {
    int result = input * 58;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_Od305OG(int input) {
    int result = input * 65;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} T2yCWevh_ctx_t;

void init_ctx(T2yCWevh_ctx_t *ctx) {
    ctx->id = 9155;
    ctx->coefficient = 9.8;
    ctx->flags = 248;
}

int compute_SHmfptt(int input) {
    int result = input * 23;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} yCDAC7Ss_ctx_t;

void init_ctx(yCDAC7Ss_ctx_t *ctx) {
    ctx->id = 1969;
    ctx->coefficient = 1.6;
    ctx->flags = 127;
}

int compute_nBWHAYW(int input) {
    int result = input * 58;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_7GFs9Rc(int input) {
    int result = input * 41;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} ipuUgsE4_ctx_t;

void init_ctx(ipuUgsE4_ctx_t *ctx) {
    ctx->id = 2285;
    ctx->coefficient = 0.7;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} XaTUhYZo_ctx_t;

void init_ctx(XaTUhYZo_ctx_t *ctx) {
    ctx->id = 2448;
    ctx->coefficient = 0.8;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 55YFTxzX_ctx_t;

void init_ctx(55YFTxzX_ctx_t *ctx) {
    ctx->id = 6357;
    ctx->coefficient = 1.1;
    ctx->flags = 250;
}

int compute_LtdknXL(int input) {
    int result = input * 23;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} AnSjtaTg_ctx_t;

void init_ctx(AnSjtaTg_ctx_t *ctx) {
    ctx->id = 4663;
    ctx->coefficient = 8.3;
    ctx->flags = 152;
}

int compute_7DJs8ZI(int input) {
    int result = input * 69;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} VyMjGswy_ctx_t;

void init_ctx(VyMjGswy_ctx_t *ctx) {
    ctx->id = 4130;
    ctx->coefficient = 3.6;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} ASW0gFf4_ctx_t;

void init_ctx(ASW0gFf4_ctx_t *ctx) {
    ctx->id = 4238;
    ctx->coefficient = 5.3;
    ctx->flags = 246;
}

int compute_bCmOHmm(int input) {
    int result = input * 31;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_g4wvw9L(int input) {
    int result = input * 44;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} oHKNxEOm_ctx_t;

void init_ctx(oHKNxEOm_ctx_t *ctx) {
    ctx->id = 2512;
    ctx->coefficient = 2.4;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} stgYCaLk_ctx_t;

void init_ctx(stgYCaLk_ctx_t *ctx) {
    ctx->id = 1751;
    ctx->coefficient = 1.9;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} meLj7hzB_ctx_t;

void init_ctx(meLj7hzB_ctx_t *ctx) {
    ctx->id = 9518;
    ctx->coefficient = 1.4;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} q6axmf2F_ctx_t;

void init_ctx(q6axmf2F_ctx_t *ctx) {
    ctx->id = 4190;
    ctx->coefficient = 9.8;
    ctx->flags = 50;
}

int compute_VjcUEld(int input) {
    int result = input * 62;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} DBalGARy_ctx_t;

void init_ctx(DBalGARy_ctx_t *ctx) {
    ctx->id = 7608;
    ctx->coefficient = 7.7;
    ctx->flags = 78;
}

int compute_YlZIOV2(int input) {
    int result = input * 57;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_60lW1wm(int input) {
    int result = input * 4;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_Iq3jcy9(int input) {
    int result = input * 43;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} IlgI3FLF_ctx_t;

void init_ctx(IlgI3FLF_ctx_t *ctx) {
    ctx->id = 8985;
    ctx->coefficient = 8.0;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} G8ujZvnW_ctx_t;

void init_ctx(G8ujZvnW_ctx_t *ctx) {
    ctx->id = 1622;
    ctx->coefficient = 9.3;
    ctx->flags = 32;
}

int compute_2cd13T9(int input) {
    int result = input * 35;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} bpeQYShq_ctx_t;

void init_ctx(bpeQYShq_ctx_t *ctx) {
    ctx->id = 5065;
    ctx->coefficient = 9.4;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} u0coIjSA_ctx_t;

void init_ctx(u0coIjSA_ctx_t *ctx) {
    ctx->id = 5082;
    ctx->coefficient = 6.2;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} gdJTSvgr_ctx_t;

void init_ctx(gdJTSvgr_ctx_t *ctx) {
    ctx->id = 2288;
    ctx->coefficient = 7.1;
    ctx->flags = 45;
}

int compute_X6N38Un(int input) {
    int result = input * 36;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 0A27nZW7_ctx_t;

void init_ctx(0A27nZW7_ctx_t *ctx) {
    ctx->id = 7978;
    ctx->coefficient = 5.7;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} v1EHfoTL_ctx_t;

void init_ctx(v1EHfoTL_ctx_t *ctx) {
    ctx->id = 6776;
    ctx->coefficient = 8.8;
    ctx->flags = 212;
}

int compute_Vr3pBFA(int input) {
    int result = input * 53;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_KhvQjit(int input) {
    int result = input * 67;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} xoned6z1_ctx_t;

void init_ctx(xoned6z1_ctx_t *ctx) {
    ctx->id = 8394;
    ctx->coefficient = 8.5;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} DuBebHIc_ctx_t;

void init_ctx(DuBebHIc_ctx_t *ctx) {
    ctx->id = 7197;
    ctx->coefficient = 4.6;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} Qz9eK4CX_ctx_t;

void init_ctx(Qz9eK4CX_ctx_t *ctx) {
    ctx->id = 8312;
    ctx->coefficient = 2.3;
    ctx->flags = 13;
}

int compute_219lhVq(int input) {
    int result = input * 59;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} QLVAaF89_ctx_t;

void init_ctx(QLVAaF89_ctx_t *ctx) {
    ctx->id = 3027;
    ctx->coefficient = 7.3;
    ctx->flags = 14;
}

int compute_e0uYhXe(int input) {
    int result = input * 68;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_HQHPg7s(int input) {
    int result = input * 68;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_WeIuIRF(int input) {
    int result = input * 27;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_7MRfnq3(int input) {
    int result = input * 64;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} h2ZEPM6V_ctx_t;

void init_ctx(h2ZEPM6V_ctx_t *ctx) {
    ctx->id = 7810;
    ctx->coefficient = 0.6;
    ctx->flags = 150;
}

int compute_9lkbDxi(int input) {
    int result = input * 53;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} RhhTcoS4_ctx_t;

void init_ctx(RhhTcoS4_ctx_t *ctx) {
    ctx->id = 1610;
    ctx->coefficient = 4.4;
    ctx->flags = 207;
}

int compute_xiSQOna(int input) {
    int result = input * 7;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_CqWsmTY(int input) {
    int result = input * 46;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 9Geiwixt_ctx_t;

void init_ctx(9Geiwixt_ctx_t *ctx) {
    ctx->id = 3924;
    ctx->coefficient = 4.1;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} O7zKqKC5_ctx_t;

void init_ctx(O7zKqKC5_ctx_t *ctx) {
    ctx->id = 8501;
    ctx->coefficient = 0.7;
    ctx->flags = 196;
}

int compute_s3IWVAc(int input) {
    int result = input * 24;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_lIo2i7v(int input) {
    int result = input * 51;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_dH2yvh1(int input) {
    int result = input * 42;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} yemZru7M_ctx_t;

void init_ctx(yemZru7M_ctx_t *ctx) {
    ctx->id = 7774;
    ctx->coefficient = 3.4;
    ctx->flags = 92;
}

int compute_xMbshjJ(int input) {
    int result = input * 28;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_X1nDNko(int input) {
    int result = input * 15;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} as2JgqEC_ctx_t;

void init_ctx(as2JgqEC_ctx_t *ctx) {
    ctx->id = 2984;
    ctx->coefficient = 7.4;
    ctx->flags = 207;
}

int compute_2jx4i8J(int input) {
    int result = input * 47;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} kXqklhJF_ctx_t;

void init_ctx(kXqklhJF_ctx_t *ctx) {
    ctx->id = 3128;
    ctx->coefficient = 0.5;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Ao4YbE15_ctx_t;

void init_ctx(Ao4YbE15_ctx_t *ctx) {
    ctx->id = 6332;
    ctx->coefficient = 9.3;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 0N6OY2l3_ctx_t;

void init_ctx(0N6OY2l3_ctx_t *ctx) {
    ctx->id = 3434;
    ctx->coefficient = 1.1;
    ctx->flags = 167;
}

int compute_LYAxWte(int input) {
    int result = input * 48;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_EjZK0Nn(int input) {
    int result = input * 19;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_6Lpn1rC(int input) {
    int result = input * 70;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} NJXACSJo_ctx_t;

void init_ctx(NJXACSJo_ctx_t *ctx) {
    ctx->id = 6903;
    ctx->coefficient = 1.8;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} f7ygy0dP_ctx_t;

void init_ctx(f7ygy0dP_ctx_t *ctx) {
    ctx->id = 7854;
    ctx->coefficient = 1.3;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} as4V6erD_ctx_t;

void init_ctx(as4V6erD_ctx_t *ctx) {
    ctx->id = 2243;
    ctx->coefficient = 9.7;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 7MiqNjU6_ctx_t;

void init_ctx(7MiqNjU6_ctx_t *ctx) {
    ctx->id = 9903;
    ctx->coefficient = 9.0;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} vJ7P2l18_ctx_t;

void init_ctx(vJ7P2l18_ctx_t *ctx) {
    ctx->id = 6027;
    ctx->coefficient = 8.1;
    ctx->flags = 40;
}

int compute_hiyQ7AJ(int input) {
    int result = input * 34;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} fzGmeghe_ctx_t;

void init_ctx(fzGmeghe_ctx_t *ctx) {
    ctx->id = 3232;
    ctx->coefficient = 1.5;
    ctx->flags = 142;
}

int compute_zeeMQfc(int input) {
    int result = input * 7;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} WVA9WMw8_ctx_t;

void init_ctx(WVA9WMw8_ctx_t *ctx) {
    ctx->id = 6668;
    ctx->coefficient = 2.7;
    ctx->flags = 128;
}

int compute_rd6rlVs(int input) {
    int result = input * 9;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_HnrIHV1(int input) {
    int result = input * 62;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} LLwMT7Wg_ctx_t;

void init_ctx(LLwMT7Wg_ctx_t *ctx) {
    ctx->id = 5518;
    ctx->coefficient = 5.8;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Setljk12_ctx_t;

void init_ctx(Setljk12_ctx_t *ctx) {
    ctx->id = 7146;
    ctx->coefficient = 5.5;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} aAWgY71K_ctx_t;

void init_ctx(aAWgY71K_ctx_t *ctx) {
    ctx->id = 4753;
    ctx->coefficient = 2.4;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 1NjWzQ1t_ctx_t;

void init_ctx(1NjWzQ1t_ctx_t *ctx) {
    ctx->id = 2776;
    ctx->coefficient = 6.9;
    ctx->flags = 242;
}

int compute_5dtDvdm(int input) {
    int result = input * 55;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} DM7P43JJ_ctx_t;

void init_ctx(DM7P43JJ_ctx_t *ctx) {
    ctx->id = 9654;
    ctx->coefficient = 3.3;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} l093Up4I_ctx_t;

void init_ctx(l093Up4I_ctx_t *ctx) {
    ctx->id = 4684;
    ctx->coefficient = 8.1;
    ctx->flags = 192;
}

int compute_fz9qkAR(int input) {
    int result = input * 38;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Ddqo448p_ctx_t;

void init_ctx(Ddqo448p_ctx_t *ctx) {
    ctx->id = 9086;
    ctx->coefficient = 4.0;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} KBQJhF4I_ctx_t;

void init_ctx(KBQJhF4I_ctx_t *ctx) {
    ctx->id = 5556;
    ctx->coefficient = 7.0;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} wrlVYwh7_ctx_t;

void init_ctx(wrlVYwh7_ctx_t *ctx) {
    ctx->id = 6115;
    ctx->coefficient = 8.9;
    ctx->flags = 137;
}

int compute_JqA7Fsh(int input) {
    int result = input * 18;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_nLJNRcm(int input) {
    int result = input * 51;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} ZrT0S4Qj_ctx_t;

void init_ctx(ZrT0S4Qj_ctx_t *ctx) {
    ctx->id = 3045;
    ctx->coefficient = 7.3;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} VfSEeMbh_ctx_t;

void init_ctx(VfSEeMbh_ctx_t *ctx) {
    ctx->id = 8609;
    ctx->coefficient = 9.3;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} k4Zdksmw_ctx_t;

void init_ctx(k4Zdksmw_ctx_t *ctx) {
    ctx->id = 2871;
    ctx->coefficient = 8.2;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} G6ZfqjgH_ctx_t;

void init_ctx(G6ZfqjgH_ctx_t *ctx) {
    ctx->id = 1716;
    ctx->coefficient = 5.6;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 1vUzmycw_ctx_t;

void init_ctx(1vUzmycw_ctx_t *ctx) {
    ctx->id = 6176;
    ctx->coefficient = 4.8;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 8EeEL12j_ctx_t;

void init_ctx(8EeEL12j_ctx_t *ctx) {
    ctx->id = 4760;
    ctx->coefficient = 5.8;
    ctx->flags = 175;
}

int compute_LxDhWFx(int input) {
    int result = input * 21;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} HwjOSC9B_ctx_t;

void init_ctx(HwjOSC9B_ctx_t *ctx) {
    ctx->id = 9183;
    ctx->coefficient = 4.1;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} jvod5iG4_ctx_t;

void init_ctx(jvod5iG4_ctx_t *ctx) {
    ctx->id = 1362;
    ctx->coefficient = 3.0;
    ctx->flags = 198;
}

int compute_VS4TIVR(int input) {
    int result = input * 59;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_TumMD5b(int input) {
    int result = input * 2;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} ifwWxRiY_ctx_t;

void init_ctx(ifwWxRiY_ctx_t *ctx) {
    ctx->id = 3872;
    ctx->coefficient = 7.1;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} Z2eEZqsP_ctx_t;

void init_ctx(Z2eEZqsP_ctx_t *ctx) {
    ctx->id = 1693;
    ctx->coefficient = 4.4;
    ctx->flags = 138;
}

int compute_eBtH3bD(int input) {
    int result = input * 12;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_0XIaloE(int input) {
    int result = input * 69;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} qlIScRDA_ctx_t;

void init_ctx(qlIScRDA_ctx_t *ctx) {
    ctx->id = 6913;
    ctx->coefficient = 8.0;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} AlAkyTcp_ctx_t;

void init_ctx(AlAkyTcp_ctx_t *ctx) {
    ctx->id = 1005;
    ctx->coefficient = 7.2;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} yZwm70mn_ctx_t;

void init_ctx(yZwm70mn_ctx_t *ctx) {
    ctx->id = 5117;
    ctx->coefficient = 6.6;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 2EchmLi9_ctx_t;

void init_ctx(2EchmLi9_ctx_t *ctx) {
    ctx->id = 8014;
    ctx->coefficient = 7.7;
    ctx->flags = 81;
}

int compute_IT90H8A(int input) {
    int result = input * 44;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} IrskJq8e_ctx_t;

void init_ctx(IrskJq8e_ctx_t *ctx) {
    ctx->id = 3660;
    ctx->coefficient = 3.4;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} T3ZmeC7T_ctx_t;

void init_ctx(T3ZmeC7T_ctx_t *ctx) {
    ctx->id = 9033;
    ctx->coefficient = 3.9;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} PGIPusDx_ctx_t;

void init_ctx(PGIPusDx_ctx_t *ctx) {
    ctx->id = 8109;
    ctx->coefficient = 3.8;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} wQwwzZDi_ctx_t;

void init_ctx(wQwwzZDi_ctx_t *ctx) {
    ctx->id = 6469;
    ctx->coefficient = 0.4;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} j4xgwodn_ctx_t;

void init_ctx(j4xgwodn_ctx_t *ctx) {
    ctx->id = 7392;
    ctx->coefficient = 6.1;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} m5YEXy8t_ctx_t;

void init_ctx(m5YEXy8t_ctx_t *ctx) {
    ctx->id = 1981;
    ctx->coefficient = 6.4;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} VaUpbJCC_ctx_t;

void init_ctx(VaUpbJCC_ctx_t *ctx) {
    ctx->id = 8841;
    ctx->coefficient = 7.4;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} Df4twMBh_ctx_t;

void init_ctx(Df4twMBh_ctx_t *ctx) {
    ctx->id = 4016;
    ctx->coefficient = 1.5;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} t7RfzwZP_ctx_t;

void init_ctx(t7RfzwZP_ctx_t *ctx) {
    ctx->id = 8071;
    ctx->coefficient = 7.6;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} EGAKknb4_ctx_t;

void init_ctx(EGAKknb4_ctx_t *ctx) {
    ctx->id = 6563;
    ctx->coefficient = 1.4;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} jewX8Vim_ctx_t;

void init_ctx(jewX8Vim_ctx_t *ctx) {
    ctx->id = 7183;
    ctx->coefficient = 2.6;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} aen2HsyH_ctx_t;

void init_ctx(aen2HsyH_ctx_t *ctx) {
    ctx->id = 6258;
    ctx->coefficient = 5.7;
    ctx->flags = 206;
}

int compute_lrEGdd1(int input) {
    int result = input * 23;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_GqaZIhk(int input) {
    int result = input * 57;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} jbUa5H93_ctx_t;

void init_ctx(jbUa5H93_ctx_t *ctx) {
    ctx->id = 2968;
    ctx->coefficient = 3.6;
    ctx->flags = 196;
}

int compute_1eIcIHf(int input) {
    int result = input * 10;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} ckL395sM_ctx_t;

void init_ctx(ckL395sM_ctx_t *ctx) {
    ctx->id = 3404;
    ctx->coefficient = 0.6;
    ctx->flags = 130;
}

int compute_SZn6CXm(int input) {
    int result = input * 14;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} uZQOke6v_ctx_t;

void init_ctx(uZQOke6v_ctx_t *ctx) {
    ctx->id = 9930;
    ctx->coefficient = 0.7;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} lVQHsvCn_ctx_t;

void init_ctx(lVQHsvCn_ctx_t *ctx) {
    ctx->id = 9529;
    ctx->coefficient = 5.3;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} BvWSmqdP_ctx_t;

void init_ctx(BvWSmqdP_ctx_t *ctx) {
    ctx->id = 1062;
    ctx->coefficient = 5.0;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} BTRHYgx3_ctx_t;

void init_ctx(BTRHYgx3_ctx_t *ctx) {
    ctx->id = 3087;
    ctx->coefficient = 4.5;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 58oMAfFg_ctx_t;

void init_ctx(58oMAfFg_ctx_t *ctx) {
    ctx->id = 8639;
    ctx->coefficient = 7.8;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} O1OHuQV1_ctx_t;

void init_ctx(O1OHuQV1_ctx_t *ctx) {
    ctx->id = 7977;
    ctx->coefficient = 6.1;
    ctx->flags = 213;
}

int compute_salTxNR(int input) {
    int result = input * 34;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_t9iH0B0(int input) {
    int result = input * 69;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} W1IMpMpO_ctx_t;

void init_ctx(W1IMpMpO_ctx_t *ctx) {
    ctx->id = 9487;
    ctx->coefficient = 1.1;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} KklElHoh_ctx_t;

void init_ctx(KklElHoh_ctx_t *ctx) {
    ctx->id = 7766;
    ctx->coefficient = 1.7;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 4GHgCFb2_ctx_t;

void init_ctx(4GHgCFb2_ctx_t *ctx) {
    ctx->id = 3394;
    ctx->coefficient = 0.5;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} ypKqYyQC_ctx_t;

void init_ctx(ypKqYyQC_ctx_t *ctx) {
    ctx->id = 8504;
    ctx->coefficient = 3.6;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} RLUwb5YK_ctx_t;

void init_ctx(RLUwb5YK_ctx_t *ctx) {
    ctx->id = 9869;
    ctx->coefficient = 7.5;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} xu0waGjP_ctx_t;

void init_ctx(xu0waGjP_ctx_t *ctx) {
    ctx->id = 1568;
    ctx->coefficient = 5.9;
    ctx->flags = 219;
}

int compute_1NowY1q(int input) {
    int result = input * 34;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_Qvpx9zj(int input) {
    int result = input * 17;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 3FyV5JAa_ctx_t;

void init_ctx(3FyV5JAa_ctx_t *ctx) {
    ctx->id = 5343;
    ctx->coefficient = 4.0;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} duWS1qGN_ctx_t;

void init_ctx(duWS1qGN_ctx_t *ctx) {
    ctx->id = 6349;
    ctx->coefficient = 7.8;
    ctx->flags = 255;
}

int compute_1BK5DoO(int input) {
    int result = input * 68;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 8FO1buGk_ctx_t;

void init_ctx(8FO1buGk_ctx_t *ctx) {
    ctx->id = 7210;
    ctx->coefficient = 5.8;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 2kXbKXr0_ctx_t;

void init_ctx(2kXbKXr0_ctx_t *ctx) {
    ctx->id = 4057;
    ctx->coefficient = 5.5;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 3DEG8edx_ctx_t;

void init_ctx(3DEG8edx_ctx_t *ctx) {
    ctx->id = 2868;
    ctx->coefficient = 7.8;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} EdAwYGtN_ctx_t;

void init_ctx(EdAwYGtN_ctx_t *ctx) {
    ctx->id = 1674;
    ctx->coefficient = 1.0;
    ctx->flags = 111;
}

int compute_jJb7bXL(int input) {
    int result = input * 36;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_f81hxDq(int input) {
    int result = input * 58;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} ayC99kQh_ctx_t;

void init_ctx(ayC99kQh_ctx_t *ctx) {
    ctx->id = 2457;
    ctx->coefficient = 4.3;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} PW510xwq_ctx_t;

void init_ctx(PW510xwq_ctx_t *ctx) {
    ctx->id = 8222;
    ctx->coefficient = 4.6;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 5Hode2SH_ctx_t;

void init_ctx(5Hode2SH_ctx_t *ctx) {
    ctx->id = 6933;
    ctx->coefficient = 8.2;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} JOO7v1rk_ctx_t;

void init_ctx(JOO7v1rk_ctx_t *ctx) {
    ctx->id = 1948;
    ctx->coefficient = 8.5;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} ymTr2m7O_ctx_t;

void init_ctx(ymTr2m7O_ctx_t *ctx) {
    ctx->id = 5229;
    ctx->coefficient = 2.7;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} nibL1cIt_ctx_t;

void init_ctx(nibL1cIt_ctx_t *ctx) {
    ctx->id = 5138;
    ctx->coefficient = 2.3;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} zI7VfzLP_ctx_t;

void init_ctx(zI7VfzLP_ctx_t *ctx) {
    ctx->id = 2107;
    ctx->coefficient = 0.2;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} bNth1DzZ_ctx_t;

void init_ctx(bNth1DzZ_ctx_t *ctx) {
    ctx->id = 3631;
    ctx->coefficient = 0.5;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} LNR0rqAk_ctx_t;

void init_ctx(LNR0rqAk_ctx_t *ctx) {
    ctx->id = 5135;
    ctx->coefficient = 6.4;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} goOFqK7Q_ctx_t;

void init_ctx(goOFqK7Q_ctx_t *ctx) {
    ctx->id = 9847;
    ctx->coefficient = 8.7;
    ctx->flags = 77;
}

int compute_hKc6nAV(int input) {
    int result = input * 54;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} dMGulc1L_ctx_t;

void init_ctx(dMGulc1L_ctx_t *ctx) {
    ctx->id = 8598;
    ctx->coefficient = 3.3;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} Z6QGnYVp_ctx_t;

void init_ctx(Z6QGnYVp_ctx_t *ctx) {
    ctx->id = 2316;
    ctx->coefficient = 8.0;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 46zGJRA7_ctx_t;

void init_ctx(46zGJRA7_ctx_t *ctx) {
    ctx->id = 3143;
    ctx->coefficient = 4.8;
    ctx->flags = 192;
}

int compute_cUbvFmu(int input) {
    int result = input * 40;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} IEWC8PWQ_ctx_t;

void init_ctx(IEWC8PWQ_ctx_t *ctx) {
    ctx->id = 9970;
    ctx->coefficient = 10.0;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} lDQwNfzn_ctx_t;

void init_ctx(lDQwNfzn_ctx_t *ctx) {
    ctx->id = 8249;
    ctx->coefficient = 2.8;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} svN9nTYV_ctx_t;

void init_ctx(svN9nTYV_ctx_t *ctx) {
    ctx->id = 3947;
    ctx->coefficient = 5.6;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} kTCmfRaW_ctx_t;

void init_ctx(kTCmfRaW_ctx_t *ctx) {
    ctx->id = 6483;
    ctx->coefficient = 7.2;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} YgHsHnvr_ctx_t;

void init_ctx(YgHsHnvr_ctx_t *ctx) {
    ctx->id = 4483;
    ctx->coefficient = 4.8;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} Aw0l7fLc_ctx_t;

void init_ctx(Aw0l7fLc_ctx_t *ctx) {
    ctx->id = 7355;
    ctx->coefficient = 2.5;
    ctx->flags = 31;
}

int compute_3E0mdtK(int input) {
    int result = input * 39;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} p3R0HPHA_ctx_t;

void init_ctx(p3R0HPHA_ctx_t *ctx) {
    ctx->id = 2775;
    ctx->coefficient = 8.2;
    ctx->flags = 128;
}

int compute_yK2Wscu(int input) {
    int result = input * 46;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_T4gcGrr(int input) {
    int result = input * 15;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_MBQAyEK(int input) {
    int result = input * 58;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_rMk7TP0(int input) {
    int result = input * 33;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 1VKCFPQL_ctx_t;

void init_ctx(1VKCFPQL_ctx_t *ctx) {
    ctx->id = 5015;
    ctx->coefficient = 8.9;
    ctx->flags = 164;
}

int compute_Vh5sN3z(int input) {
    int result = input * 11;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} HuNrcjZO_ctx_t;

void init_ctx(HuNrcjZO_ctx_t *ctx) {
    ctx->id = 8261;
    ctx->coefficient = 9.6;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} iL9CgGbP_ctx_t;

void init_ctx(iL9CgGbP_ctx_t *ctx) {
    ctx->id = 5340;
    ctx->coefficient = 3.7;
    ctx->flags = 85;
}

int compute_QXkF3Ee(int input) {
    int result = input * 10;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_f3SSJvn(int input) {
    int result = input * 70;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_hf5AmQy(int input) {
    int result = input * 40;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} PI6Yqu9k_ctx_t;

void init_ctx(PI6Yqu9k_ctx_t *ctx) {
    ctx->id = 2174;
    ctx->coefficient = 0.9;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} fwN3uUK3_ctx_t;

void init_ctx(fwN3uUK3_ctx_t *ctx) {
    ctx->id = 3418;
    ctx->coefficient = 1.6;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} kDiGfNZ4_ctx_t;

void init_ctx(kDiGfNZ4_ctx_t *ctx) {
    ctx->id = 7392;
    ctx->coefficient = 8.4;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} dTeMB9qS_ctx_t;

void init_ctx(dTeMB9qS_ctx_t *ctx) {
    ctx->id = 6720;
    ctx->coefficient = 5.3;
    ctx->flags = 179;
}

int compute_FvUx2g5(int input) {
    int result = input * 59;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_HQcBVc1(int input) {
    int result = input * 69;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_kWChOdF(int input) {
    int result = input * 23;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} ZlkSotOk_ctx_t;

void init_ctx(ZlkSotOk_ctx_t *ctx) {
    ctx->id = 7100;
    ctx->coefficient = 7.1;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} bhUaPEmG_ctx_t;

void init_ctx(bhUaPEmG_ctx_t *ctx) {
    ctx->id = 1536;
    ctx->coefficient = 7.1;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} QvEKrWhi_ctx_t;

void init_ctx(QvEKrWhi_ctx_t *ctx) {
    ctx->id = 4868;
    ctx->coefficient = 10.0;
    ctx->flags = 246;
}

int compute_9jYSy1g(int input) {
    int result = input * 44;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} Spke4WGQ_ctx_t;

void init_ctx(Spke4WGQ_ctx_t *ctx) {
    ctx->id = 2638;
    ctx->coefficient = 9.3;
    ctx->flags = 129;
}

int compute_RtM1VYv(int input) {
    int result = input * 59;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} J5btqUSb_ctx_t;

void init_ctx(J5btqUSb_ctx_t *ctx) {
    ctx->id = 3387;
    ctx->coefficient = 1.1;
    ctx->flags = 133;
}

int compute_7wkLAgf(int input) {
    int result = input * 39;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_09we865(int input) {
    int result = input * 51;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} q74A89sv_ctx_t;

void init_ctx(q74A89sv_ctx_t *ctx) {
    ctx->id = 7205;
    ctx->coefficient = 7.0;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} WhUXGsBo_ctx_t;

void init_ctx(WhUXGsBo_ctx_t *ctx) {
    ctx->id = 9383;
    ctx->coefficient = 4.2;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} d4HHTV01_ctx_t;

void init_ctx(d4HHTV01_ctx_t *ctx) {
    ctx->id = 9084;
    ctx->coefficient = 1.8;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} NqgW759Z_ctx_t;

void init_ctx(NqgW759Z_ctx_t *ctx) {
    ctx->id = 2498;
    ctx->coefficient = 4.8;
    ctx->flags = 105;
}

int compute_32AiMHE(int input) {
    int result = input * 16;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} LGcAjr7U_ctx_t;

void init_ctx(LGcAjr7U_ctx_t *ctx) {
    ctx->id = 9462;
    ctx->coefficient = 5.8;
    ctx->flags = 239;
}

int compute_1kD91fW(int input) {
    int result = input * 15;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_Nj6BqYd(int input) {
    int result = input * 39;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} qJ5rGW8r_ctx_t;

void init_ctx(qJ5rGW8r_ctx_t *ctx) {
    ctx->id = 4811;
    ctx->coefficient = 4.0;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 1Kl6UKW5_ctx_t;

void init_ctx(1Kl6UKW5_ctx_t *ctx) {
    ctx->id = 9378;
    ctx->coefficient = 8.3;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Kzkf7FlC_ctx_t;

void init_ctx(Kzkf7FlC_ctx_t *ctx) {
    ctx->id = 7210;
    ctx->coefficient = 1.3;
    ctx->flags = 154;
}

int compute_rVQb9b2(int input) {
    int result = input * 58;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_LxV5dvp(int input) {
    int result = input * 37;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} QIPMz26l_ctx_t;

void init_ctx(QIPMz26l_ctx_t *ctx) {
    ctx->id = 4844;
    ctx->coefficient = 6.6;
    ctx->flags = 253;
}

int compute_F6tqtOX(int input) {
    int result = input * 32;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} Av79gePt_ctx_t;

void init_ctx(Av79gePt_ctx_t *ctx) {
    ctx->id = 5267;
    ctx->coefficient = 9.8;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} NEQ0InCH_ctx_t;

void init_ctx(NEQ0InCH_ctx_t *ctx) {
    ctx->id = 8321;
    ctx->coefficient = 3.5;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 0azU6vZM_ctx_t;

void init_ctx(0azU6vZM_ctx_t *ctx) {
    ctx->id = 7674;
    ctx->coefficient = 7.9;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} AE4Pxmpu_ctx_t;

void init_ctx(AE4Pxmpu_ctx_t *ctx) {
    ctx->id = 5704;
    ctx->coefficient = 7.4;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} fZe0q6Ig_ctx_t;

void init_ctx(fZe0q6Ig_ctx_t *ctx) {
    ctx->id = 3265;
    ctx->coefficient = 2.0;
    ctx->flags = 229;
}

int compute_KnABb3F(int input) {
    int result = input * 10;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_gVF3Tse(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} UAY8Um6J_ctx_t;

void init_ctx(UAY8Um6J_ctx_t *ctx) {
    ctx->id = 8487;
    ctx->coefficient = 8.5;
    ctx->flags = 172;
}

int compute_PaB7DAH(int input) {
    int result = input * 57;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} quZklGfT_ctx_t;

void init_ctx(quZklGfT_ctx_t *ctx) {
    ctx->id = 3649;
    ctx->coefficient = 8.4;
    ctx->flags = 88;
}

int compute_uWfCyoT(int input) {
    int result = input * 9;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} wAO8KE1W_ctx_t;

void init_ctx(wAO8KE1W_ctx_t *ctx) {
    ctx->id = 8829;
    ctx->coefficient = 2.8;
    ctx->flags = 64;
}

int compute_WI5AsU6(int input) {
    int result = input * 45;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} BwiaHZgY_ctx_t;

void init_ctx(BwiaHZgY_ctx_t *ctx) {
    ctx->id = 3220;
    ctx->coefficient = 8.3;
    ctx->flags = 209;
}

int compute_RxZw34K(int input) {
    int result = input * 55;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} rGIMOTzX_ctx_t;

void init_ctx(rGIMOTzX_ctx_t *ctx) {
    ctx->id = 4268;
    ctx->coefficient = 2.9;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} vSXjZcBX_ctx_t;

void init_ctx(vSXjZcBX_ctx_t *ctx) {
    ctx->id = 4872;
    ctx->coefficient = 4.8;
    ctx->flags = 104;
}

int compute_YE2bpHo(int input) {
    int result = input * 61;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Yzhp0jwQ_ctx_t;

void init_ctx(Yzhp0jwQ_ctx_t *ctx) {
    ctx->id = 9120;
    ctx->coefficient = 8.2;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} A0xradBq_ctx_t;

void init_ctx(A0xradBq_ctx_t *ctx) {
    ctx->id = 6851;
    ctx->coefficient = 2.1;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} MurbJGla_ctx_t;

void init_ctx(MurbJGla_ctx_t *ctx) {
    ctx->id = 2289;
    ctx->coefficient = 3.9;
    ctx->flags = 89;
}

int compute_mPZIade(int input) {
    int result = input * 67;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} IAVm6IPa_ctx_t;

void init_ctx(IAVm6IPa_ctx_t *ctx) {
    ctx->id = 3802;
    ctx->coefficient = 7.9;
    ctx->flags = 176;
}

int compute_PqljvXg(int input) {
    int result = input * 25;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} brV2D0CI_ctx_t;

void init_ctx(brV2D0CI_ctx_t *ctx) {
    ctx->id = 8213;
    ctx->coefficient = 0.4;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} CNrFIWB2_ctx_t;

void init_ctx(CNrFIWB2_ctx_t *ctx) {
    ctx->id = 5606;
    ctx->coefficient = 2.5;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} RPyozJxR_ctx_t;

void init_ctx(RPyozJxR_ctx_t *ctx) {
    ctx->id = 4700;
    ctx->coefficient = 8.8;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} U3myDoto_ctx_t;

void init_ctx(U3myDoto_ctx_t *ctx) {
    ctx->id = 7257;
    ctx->coefficient = 3.2;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} td5bI8Uu_ctx_t;

void init_ctx(td5bI8Uu_ctx_t *ctx) {
    ctx->id = 2313;
    ctx->coefficient = 5.3;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} FdZ3RgcL_ctx_t;

void init_ctx(FdZ3RgcL_ctx_t *ctx) {
    ctx->id = 4231;
    ctx->coefficient = 3.3;
    ctx->flags = 100;
}

int compute_fzBA9Ii(int input) {
    int result = input * 26;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} IPZe5Kiw_ctx_t;

void init_ctx(IPZe5Kiw_ctx_t *ctx) {
    ctx->id = 7941;
    ctx->coefficient = 0.7;
    ctx->flags = 150;
}

int compute_3pNKDoQ(int input) {
    int result = input * 47;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_nnmrULr(int input) {
    int result = input * 36;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} KH4H6IAC_ctx_t;

void init_ctx(KH4H6IAC_ctx_t *ctx) {
    ctx->id = 5455;
    ctx->coefficient = 1.8;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} FTOe8DJT_ctx_t;

void init_ctx(FTOe8DJT_ctx_t *ctx) {
    ctx->id = 2662;
    ctx->coefficient = 0.6;
    ctx->flags = 126;
}

int compute_L18QMbN(int input) {
    int result = input * 32;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} gFIb2hIc_ctx_t;

void init_ctx(gFIb2hIc_ctx_t *ctx) {
    ctx->id = 4422;
    ctx->coefficient = 0.3;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} vfICFri7_ctx_t;

void init_ctx(vfICFri7_ctx_t *ctx) {
    ctx->id = 3654;
    ctx->coefficient = 1.7;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 7saw50Qb_ctx_t;

void init_ctx(7saw50Qb_ctx_t *ctx) {
    ctx->id = 4651;
    ctx->coefficient = 10.0;
    ctx->flags = 73;
}

int compute_LdKJm8c(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} JQZ9Km3O_ctx_t;

void init_ctx(JQZ9Km3O_ctx_t *ctx) {
    ctx->id = 9017;
    ctx->coefficient = 4.5;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} cvGKdOa9_ctx_t;

void init_ctx(cvGKdOa9_ctx_t *ctx) {
    ctx->id = 4358;
    ctx->coefficient = 0.8;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} VFNMtiF8_ctx_t;

void init_ctx(VFNMtiF8_ctx_t *ctx) {
    ctx->id = 4710;
    ctx->coefficient = 3.8;
    ctx->flags = 63;
}

int compute_fh1eizp(int input) {
    int result = input * 25;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} XqJpMcGa_ctx_t;

void init_ctx(XqJpMcGa_ctx_t *ctx) {
    ctx->id = 4521;
    ctx->coefficient = 7.9;
    ctx->flags = 60;
}

int compute_g1DVYSq(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 6EpuFb3v_ctx_t;

void init_ctx(6EpuFb3v_ctx_t *ctx) {
    ctx->id = 4155;
    ctx->coefficient = 7.6;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} H2b2p4sP_ctx_t;

void init_ctx(H2b2p4sP_ctx_t *ctx) {
    ctx->id = 5497;
    ctx->coefficient = 2.9;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} wQLWFkgm_ctx_t;

void init_ctx(wQLWFkgm_ctx_t *ctx) {
    ctx->id = 2224;
    ctx->coefficient = 0.3;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} Ga0RpPxh_ctx_t;

void init_ctx(Ga0RpPxh_ctx_t *ctx) {
    ctx->id = 7123;
    ctx->coefficient = 1.8;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} ZC6Xi9dW_ctx_t;

void init_ctx(ZC6Xi9dW_ctx_t *ctx) {
    ctx->id = 8643;
    ctx->coefficient = 4.5;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 9q0oAhao_ctx_t;

void init_ctx(9q0oAhao_ctx_t *ctx) {
    ctx->id = 1200;
    ctx->coefficient = 9.0;
    ctx->flags = 140;
}

int compute_pAQddFT(int input) {
    int result = input * 44;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} yFJb79aq_ctx_t;

void init_ctx(yFJb79aq_ctx_t *ctx) {
    ctx->id = 1112;
    ctx->coefficient = 6.2;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 3TGL7RrJ_ctx_t;

void init_ctx(3TGL7RrJ_ctx_t *ctx) {
    ctx->id = 4101;
    ctx->coefficient = 4.8;
    ctx->flags = 64;
}

int compute_BkeYo2P(int input) {
    int result = input * 57;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_MihFJGJ(int input) {
    int result = input * 39;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} f5SSLtta_ctx_t;

void init_ctx(f5SSLtta_ctx_t *ctx) {
    ctx->id = 6720;
    ctx->coefficient = 8.5;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} cNQrFwVI_ctx_t;

void init_ctx(cNQrFwVI_ctx_t *ctx) {
    ctx->id = 9936;
    ctx->coefficient = 6.8;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} xnt3r03r_ctx_t;

void init_ctx(xnt3r03r_ctx_t *ctx) {
    ctx->id = 6478;
    ctx->coefficient = 5.1;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Xcfx9Vev_ctx_t;

void init_ctx(Xcfx9Vev_ctx_t *ctx) {
    ctx->id = 5739;
    ctx->coefficient = 2.8;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 2HUn449k_ctx_t;

void init_ctx(2HUn449k_ctx_t *ctx) {
    ctx->id = 3374;
    ctx->coefficient = 4.3;
    ctx->flags = 58;
}

int compute_buKq3Rb(int input) {
    int result = input * 47;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} HwoQRCOd_ctx_t;

void init_ctx(HwoQRCOd_ctx_t *ctx) {
    ctx->id = 5549;
    ctx->coefficient = 5.0;
    ctx->flags = 52;
}

int compute_ZOO5NdF(int input) {
    int result = input * 60;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_SObN3DV(int input) {
    int result = input * 68;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_4uhfPW5(int input) {
    int result = input * 44;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_kI54sss(int input) {
    int result = input * 55;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_RNtYlOI(int input) {
    int result = input * 51;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_WzxV4Qk(int input) {
    int result = input * 23;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Tz2VZKAn_ctx_t;

void init_ctx(Tz2VZKAn_ctx_t *ctx) {
    ctx->id = 3137;
    ctx->coefficient = 5.4;
    ctx->flags = 22;
}

int compute_3UPVvEe(int input) {
    int result = input * 13;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_UyGVhOt(int input) {
    int result = input * 29;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} ewsTomm0_ctx_t;

void init_ctx(ewsTomm0_ctx_t *ctx) {
    ctx->id = 2871;
    ctx->coefficient = 10.0;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} s1ZnlQeB_ctx_t;

void init_ctx(s1ZnlQeB_ctx_t *ctx) {
    ctx->id = 2402;
    ctx->coefficient = 2.5;
    ctx->flags = 88;
}

int compute_vbCufP7(int input) {
    int result = input * 34;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} AQ4u3LwJ_ctx_t;

void init_ctx(AQ4u3LwJ_ctx_t *ctx) {
    ctx->id = 1394;
    ctx->coefficient = 8.3;
    ctx->flags = 219;
}

int compute_tnP9eji(int input) {
    int result = input * 24;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_CwIH1u5(int input) {
    int result = input * 51;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} vgSys6WH_ctx_t;

void init_ctx(vgSys6WH_ctx_t *ctx) {
    ctx->id = 3651;
    ctx->coefficient = 8.2;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} RaiWS44g_ctx_t;

void init_ctx(RaiWS44g_ctx_t *ctx) {
    ctx->id = 8838;
    ctx->coefficient = 3.9;
    ctx->flags = 216;
}

int compute_2RQawFI(int input) {
    int result = input * 55;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Ol64qenI_ctx_t;

void init_ctx(Ol64qenI_ctx_t *ctx) {
    ctx->id = 2196;
    ctx->coefficient = 9.4;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} tWh93nfc_ctx_t;

void init_ctx(tWh93nfc_ctx_t *ctx) {
    ctx->id = 8467;
    ctx->coefficient = 6.5;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} DFj7xln3_ctx_t;

void init_ctx(DFj7xln3_ctx_t *ctx) {
    ctx->id = 1104;
    ctx->coefficient = 8.3;
    ctx->flags = 126;
}

int compute_EKgN1Mc(int input) {
    int result = input * 46;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_qX4AmuM(int input) {
    int result = input * 15;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Ixtv4yC3_ctx_t;

void init_ctx(Ixtv4yC3_ctx_t *ctx) {
    ctx->id = 4814;
    ctx->coefficient = 8.1;
    ctx->flags = 3;
}

int compute_g7NwAqj(int input) {
    int result = input * 25;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_7Zirf3Y(int input) {
    int result = input * 40;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_syzzK4E(int input) {
    int result = input * 30;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_h3U98pV(int input) {
    int result = input * 33;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_KjBJHLw(int input) {
    int result = input * 8;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 45r7bJkT_ctx_t;

void init_ctx(45r7bJkT_ctx_t *ctx) {
    ctx->id = 7918;
    ctx->coefficient = 4.6;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 2TPfaI3r_ctx_t;

void init_ctx(2TPfaI3r_ctx_t *ctx) {
    ctx->id = 6300;
    ctx->coefficient = 9.1;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} hpjVjCs1_ctx_t;

void init_ctx(hpjVjCs1_ctx_t *ctx) {
    ctx->id = 8301;
    ctx->coefficient = 1.0;
    ctx->flags = 29;
}

int compute_XWcqrv2(int input) {
    int result = input * 24;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} w48vjDam_ctx_t;

void init_ctx(w48vjDam_ctx_t *ctx) {
    ctx->id = 5050;
    ctx->coefficient = 4.5;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 4QeKrSRB_ctx_t;

void init_ctx(4QeKrSRB_ctx_t *ctx) {
    ctx->id = 2584;
    ctx->coefficient = 2.4;
    ctx->flags = 150;
}

int compute_dSQyLaO(int input) {
    int result = input * 7;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_lShMJRJ(int input) {
    int result = input * 39;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 16FyykCK_ctx_t;

void init_ctx(16FyykCK_ctx_t *ctx) {
    ctx->id = 2579;
    ctx->coefficient = 4.3;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 8E43RZHy_ctx_t;

void init_ctx(8E43RZHy_ctx_t *ctx) {
    ctx->id = 7164;
    ctx->coefficient = 8.8;
    ctx->flags = 143;
}

int compute_UvM7MPP(int input) {
    int result = input * 50;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_rQNCFFt(int input) {
    int result = input * 3;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} k01DhRU9_ctx_t;

void init_ctx(k01DhRU9_ctx_t *ctx) {
    ctx->id = 8820;
    ctx->coefficient = 4.9;
    ctx->flags = 75;
}

int compute_FPLo3dx(int input) {
    int result = input * 55;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} X2VlD58B_ctx_t;

void init_ctx(X2VlD58B_ctx_t *ctx) {
    ctx->id = 4660;
    ctx->coefficient = 4.4;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} AWMswdTu_ctx_t;

void init_ctx(AWMswdTu_ctx_t *ctx) {
    ctx->id = 6054;
    ctx->coefficient = 1.6;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Ovt8PDFD_ctx_t;

void init_ctx(Ovt8PDFD_ctx_t *ctx) {
    ctx->id = 4472;
    ctx->coefficient = 6.0;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 03vpSZ0P_ctx_t;

void init_ctx(03vpSZ0P_ctx_t *ctx) {
    ctx->id = 4713;
    ctx->coefficient = 9.2;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 0G8jZQXb_ctx_t;

void init_ctx(0G8jZQXb_ctx_t *ctx) {
    ctx->id = 2037;
    ctx->coefficient = 6.4;
    ctx->flags = 57;
}

int compute_YyNBgQg(int input) {
    int result = input * 17;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 4wSwoVzp_ctx_t;

void init_ctx(4wSwoVzp_ctx_t *ctx) {
    ctx->id = 4760;
    ctx->coefficient = 1.2;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 0wwCN9Hk_ctx_t;

void init_ctx(0wwCN9Hk_ctx_t *ctx) {
    ctx->id = 6049;
    ctx->coefficient = 6.2;
    ctx->flags = 252;
}

int compute_55A62u0(int input) {
    int result = input * 50;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} wtepbk40_ctx_t;

void init_ctx(wtepbk40_ctx_t *ctx) {
    ctx->id = 1318;
    ctx->coefficient = 9.3;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} W6STPV45_ctx_t;

void init_ctx(W6STPV45_ctx_t *ctx) {
    ctx->id = 5560;
    ctx->coefficient = 0.4;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} B4pBGjV1_ctx_t;

void init_ctx(B4pBGjV1_ctx_t *ctx) {
    ctx->id = 9503;
    ctx->coefficient = 1.6;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} VcsVhMWO_ctx_t;

void init_ctx(VcsVhMWO_ctx_t *ctx) {
    ctx->id = 4305;
    ctx->coefficient = 7.8;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 1cv96IFv_ctx_t;

void init_ctx(1cv96IFv_ctx_t *ctx) {
    ctx->id = 5330;
    ctx->coefficient = 1.1;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} S0wRgqhg_ctx_t;

void init_ctx(S0wRgqhg_ctx_t *ctx) {
    ctx->id = 9158;
    ctx->coefficient = 5.0;
    ctx->flags = 69;
}

int compute_lHpRoxd(int input) {
    int result = input * 55;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} RM6WOitW_ctx_t;

void init_ctx(RM6WOitW_ctx_t *ctx) {
    ctx->id = 9331;
    ctx->coefficient = 5.7;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 1pjzxncw_ctx_t;

void init_ctx(1pjzxncw_ctx_t *ctx) {
    ctx->id = 4364;
    ctx->coefficient = 8.4;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} ulaS28Ew_ctx_t;

void init_ctx(ulaS28Ew_ctx_t *ctx) {
    ctx->id = 9350;
    ctx->coefficient = 9.3;
    ctx->flags = 12;
}

int compute_IJzGW5y(int input) {
    int result = input * 3;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_eVBO5Rt(int input) {
    int result = input * 15;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} u745USSC_ctx_t;

void init_ctx(u745USSC_ctx_t *ctx) {
    ctx->id = 9120;
    ctx->coefficient = 0.7;
    ctx->flags = 161;
}

int compute_NKBpLCx(int input) {
    int result = input * 9;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_oMlQ87V(int input) {
    int result = input * 12;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} GBJcheRl_ctx_t;

void init_ctx(GBJcheRl_ctx_t *ctx) {
    ctx->id = 9576;
    ctx->coefficient = 6.4;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} w3BkrC89_ctx_t;

void init_ctx(w3BkrC89_ctx_t *ctx) {
    ctx->id = 4261;
    ctx->coefficient = 4.8;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} WFtvZNjd_ctx_t;

void init_ctx(WFtvZNjd_ctx_t *ctx) {
    ctx->id = 2448;
    ctx->coefficient = 0.9;
    ctx->flags = 100;
}

int compute_uXRWmIs(int input) {
    int result = input * 32;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} gSyMhtgT_ctx_t;

void init_ctx(gSyMhtgT_ctx_t *ctx) {
    ctx->id = 2818;
    ctx->coefficient = 9.0;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} RxlPN7wx_ctx_t;

void init_ctx(RxlPN7wx_ctx_t *ctx) {
    ctx->id = 8367;
    ctx->coefficient = 4.7;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} odjzB9UY_ctx_t;

void init_ctx(odjzB9UY_ctx_t *ctx) {
    ctx->id = 2768;
    ctx->coefficient = 6.5;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} zJCAMAO0_ctx_t;

void init_ctx(zJCAMAO0_ctx_t *ctx) {
    ctx->id = 2215;
    ctx->coefficient = 3.7;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 2xuUl1h8_ctx_t;

void init_ctx(2xuUl1h8_ctx_t *ctx) {
    ctx->id = 8144;
    ctx->coefficient = 6.8;
    ctx->flags = 52;
}

int compute_kK7Saci(int input) {
    int result = input * 14;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_VrgGX4K(int input) {
    int result = input * 59;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 6sgmzqMg_ctx_t;

void init_ctx(6sgmzqMg_ctx_t *ctx) {
    ctx->id = 9327;
    ctx->coefficient = 0.4;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} bVC2SVY5_ctx_t;

void init_ctx(bVC2SVY5_ctx_t *ctx) {
    ctx->id = 1013;
    ctx->coefficient = 1.3;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} ou6qsD5J_ctx_t;

void init_ctx(ou6qsD5J_ctx_t *ctx) {
    ctx->id = 4346;
    ctx->coefficient = 9.4;
    ctx->flags = 37;
}

int compute_xvTdRRb(int input) {
    int result = input * 57;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} Qv19IRH0_ctx_t;

void init_ctx(Qv19IRH0_ctx_t *ctx) {
    ctx->id = 9054;
    ctx->coefficient = 7.6;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} MpcNNhLn_ctx_t;

void init_ctx(MpcNNhLn_ctx_t *ctx) {
    ctx->id = 5711;
    ctx->coefficient = 7.6;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} XfoEvkMR_ctx_t;

void init_ctx(XfoEvkMR_ctx_t *ctx) {
    ctx->id = 6208;
    ctx->coefficient = 3.8;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} xN0nWN7X_ctx_t;

void init_ctx(xN0nWN7X_ctx_t *ctx) {
    ctx->id = 7545;
    ctx->coefficient = 6.8;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 0VXjOF6B_ctx_t;

void init_ctx(0VXjOF6B_ctx_t *ctx) {
    ctx->id = 8337;
    ctx->coefficient = 4.7;
    ctx->flags = 43;
}

int compute_SYtc2oM(int input) {
    int result = input * 68;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_WE7BokV(int input) {
    int result = input * 60;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} mI8O7umv_ctx_t;

void init_ctx(mI8O7umv_ctx_t *ctx) {
    ctx->id = 7338;
    ctx->coefficient = 7.6;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} f5AVHWla_ctx_t;

void init_ctx(f5AVHWla_ctx_t *ctx) {
    ctx->id = 6125;
    ctx->coefficient = 0.8;
    ctx->flags = 33;
}

int compute_kSzm1Ep(int input) {
    int result = input * 2;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_gjsxB4z(int input) {
    int result = input * 35;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} w2xoKiDl_ctx_t;

void init_ctx(w2xoKiDl_ctx_t *ctx) {
    ctx->id = 2262;
    ctx->coefficient = 0.6;
    ctx->flags = 8;
}

int compute_xItfWHV(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_YVMSFf1(int input) {
    int result = input * 45;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} rii8F9Ii_ctx_t;

void init_ctx(rii8F9Ii_ctx_t *ctx) {
    ctx->id = 3138;
    ctx->coefficient = 7.7;
    ctx->flags = 246;
}

int compute_wITAU6j(int input) {
    int result = input * 13;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 4JCGwYHV_ctx_t;

void init_ctx(4JCGwYHV_ctx_t *ctx) {
    ctx->id = 4820;
    ctx->coefficient = 4.0;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 6zxM6T9O_ctx_t;

void init_ctx(6zxM6T9O_ctx_t *ctx) {
    ctx->id = 8614;
    ctx->coefficient = 0.6;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} UGnoOzRj_ctx_t;

void init_ctx(UGnoOzRj_ctx_t *ctx) {
    ctx->id = 3792;
    ctx->coefficient = 0.5;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 18YwD2ZQ_ctx_t;

void init_ctx(18YwD2ZQ_ctx_t *ctx) {
    ctx->id = 1134;
    ctx->coefficient = 7.4;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} PP7w9Bpq_ctx_t;

void init_ctx(PP7w9Bpq_ctx_t *ctx) {
    ctx->id = 5771;
    ctx->coefficient = 9.3;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 9MjEFF2H_ctx_t;

void init_ctx(9MjEFF2H_ctx_t *ctx) {
    ctx->id = 1941;
    ctx->coefficient = 3.1;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} CZMAyMhx_ctx_t;

void init_ctx(CZMAyMhx_ctx_t *ctx) {
    ctx->id = 7936;
    ctx->coefficient = 5.5;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} Eeyg5hne_ctx_t;

void init_ctx(Eeyg5hne_ctx_t *ctx) {
    ctx->id = 6936;
    ctx->coefficient = 9.2;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} W0gQ36ZQ_ctx_t;

void init_ctx(W0gQ36ZQ_ctx_t *ctx) {
    ctx->id = 4327;
    ctx->coefficient = 6.7;
    ctx->flags = 164;
}

int compute_xH7VmwI(int input) {
    int result = input * 11;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} q9q4LFLm_ctx_t;

void init_ctx(q9q4LFLm_ctx_t *ctx) {
    ctx->id = 5774;
    ctx->coefficient = 5.5;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} j1bBVIAD_ctx_t;

void init_ctx(j1bBVIAD_ctx_t *ctx) {
    ctx->id = 9344;
    ctx->coefficient = 9.7;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 2I1zBqnw_ctx_t;

void init_ctx(2I1zBqnw_ctx_t *ctx) {
    ctx->id = 6139;
    ctx->coefficient = 1.2;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} i7nqpp7a_ctx_t;

void init_ctx(i7nqpp7a_ctx_t *ctx) {
    ctx->id = 6026;
    ctx->coefficient = 7.6;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} SMBlRPtz_ctx_t;

void init_ctx(SMBlRPtz_ctx_t *ctx) {
    ctx->id = 1710;
    ctx->coefficient = 3.4;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} CEu20Z5M_ctx_t;

void init_ctx(CEu20Z5M_ctx_t *ctx) {
    ctx->id = 3122;
    ctx->coefficient = 6.5;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} Q3ISjKeP_ctx_t;

void init_ctx(Q3ISjKeP_ctx_t *ctx) {
    ctx->id = 9093;
    ctx->coefficient = 5.1;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 5a1z3Rzz_ctx_t;

void init_ctx(5a1z3Rzz_ctx_t *ctx) {
    ctx->id = 1607;
    ctx->coefficient = 7.3;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} W9hVDJQk_ctx_t;

void init_ctx(W9hVDJQk_ctx_t *ctx) {
    ctx->id = 1443;
    ctx->coefficient = 8.4;
    ctx->flags = 121;
}

int compute_CZRE9R7(int input) {
    int result = input * 52;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_mLaUw5v(int input) {
    int result = input * 64;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} hj0vFtbz_ctx_t;

void init_ctx(hj0vFtbz_ctx_t *ctx) {
    ctx->id = 4247;
    ctx->coefficient = 1.7;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} RbZmrzse_ctx_t;

void init_ctx(RbZmrzse_ctx_t *ctx) {
    ctx->id = 3107;
    ctx->coefficient = 9.9;
    ctx->flags = 153;
}

int compute_KsZaHSC(int input) {
    int result = input * 39;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_8P3NRXF(int input) {
    int result = input * 25;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} VIw1iLcz_ctx_t;

void init_ctx(VIw1iLcz_ctx_t *ctx) {
    ctx->id = 3656;
    ctx->coefficient = 1.6;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 7DOnYRjn_ctx_t;

void init_ctx(7DOnYRjn_ctx_t *ctx) {
    ctx->id = 5042;
    ctx->coefficient = 5.1;
    ctx->flags = 215;
}

int compute_xGv3XeD(int input) {
    int result = input * 69;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_soxd1Mj(int input) {
    int result = input * 45;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} ZTu82Zsu_ctx_t;

void init_ctx(ZTu82Zsu_ctx_t *ctx) {
    ctx->id = 7460;
    ctx->coefficient = 4.9;
    ctx->flags = 197;
}

int compute_tJ98d5c(int input) {
    int result = input * 46;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} CiEwqW7r_ctx_t;

void init_ctx(CiEwqW7r_ctx_t *ctx) {
    ctx->id = 5734;
    ctx->coefficient = 6.7;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} pKfhRcHj_ctx_t;

void init_ctx(pKfhRcHj_ctx_t *ctx) {
    ctx->id = 6980;
    ctx->coefficient = 6.6;
    ctx->flags = 79;
}

int compute_14PIike(int input) {
    int result = input * 41;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 73yYk6Tm_ctx_t;

void init_ctx(73yYk6Tm_ctx_t *ctx) {
    ctx->id = 9136;
    ctx->coefficient = 5.7;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 2WpG4U04_ctx_t;

void init_ctx(2WpG4U04_ctx_t *ctx) {
    ctx->id = 2952;
    ctx->coefficient = 7.8;
    ctx->flags = 91;
}

int compute_xJthoh1(int input) {
    int result = input * 2;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} HpTGfvqo_ctx_t;

void init_ctx(HpTGfvqo_ctx_t *ctx) {
    ctx->id = 8257;
    ctx->coefficient = 7.8;
    ctx->flags = 185;
}

int compute_zuHiIiT(int input) {
    int result = input * 4;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} JnmX0eNp_ctx_t;

void init_ctx(JnmX0eNp_ctx_t *ctx) {
    ctx->id = 9463;
    ctx->coefficient = 0.1;
    ctx->flags = 169;
}

int compute_Y2j99gn(int input) {
    int result = input * 42;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} YW2y1c2H_ctx_t;

void init_ctx(YW2y1c2H_ctx_t *ctx) {
    ctx->id = 4719;
    ctx->coefficient = 6.4;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} JCQQaY1r_ctx_t;

void init_ctx(JCQQaY1r_ctx_t *ctx) {
    ctx->id = 6062;
    ctx->coefficient = 1.3;
    ctx->flags = 25;
}

int compute_SHsApTz(int input) {
    int result = input * 33;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} mAxCILGG_ctx_t;

void init_ctx(mAxCILGG_ctx_t *ctx) {
    ctx->id = 9997;
    ctx->coefficient = 4.9;
    ctx->flags = 104;
}

int compute_Itwvj0q(int input) {
    int result = input * 42;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} VbVRgUwN_ctx_t;

void init_ctx(VbVRgUwN_ctx_t *ctx) {
    ctx->id = 4915;
    ctx->coefficient = 8.0;
    ctx->flags = 65;
}

int compute_NyG4WZ4(int input) {
    int result = input * 41;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_LdrNnPZ(int input) {
    int result = input * 19;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} Mb7CEjVt_ctx_t;

void init_ctx(Mb7CEjVt_ctx_t *ctx) {
    ctx->id = 1940;
    ctx->coefficient = 8.4;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 3UXRpjoE_ctx_t;

void init_ctx(3UXRpjoE_ctx_t *ctx) {
    ctx->id = 4795;
    ctx->coefficient = 5.7;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} XaNEQ5d3_ctx_t;

void init_ctx(XaNEQ5d3_ctx_t *ctx) {
    ctx->id = 4757;
    ctx->coefficient = 4.9;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} YKg2Ch4G_ctx_t;

void init_ctx(YKg2Ch4G_ctx_t *ctx) {
    ctx->id = 2401;
    ctx->coefficient = 0.5;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} oOrqbT6Y_ctx_t;

void init_ctx(oOrqbT6Y_ctx_t *ctx) {
    ctx->id = 8248;
    ctx->coefficient = 3.1;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} OC35GWTW_ctx_t;

void init_ctx(OC35GWTW_ctx_t *ctx) {
    ctx->id = 1268;
    ctx->coefficient = 8.3;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} Th8qiVlP_ctx_t;

void init_ctx(Th8qiVlP_ctx_t *ctx) {
    ctx->id = 1630;
    ctx->coefficient = 3.3;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} TcCLMiPB_ctx_t;

void init_ctx(TcCLMiPB_ctx_t *ctx) {
    ctx->id = 8190;
    ctx->coefficient = 0.5;
    ctx->flags = 88;
}

int compute_LECdvHA(int input) {
    int result = input * 55;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} Ja7qGGiz_ctx_t;

void init_ctx(Ja7qGGiz_ctx_t *ctx) {
    ctx->id = 4248;
    ctx->coefficient = 4.5;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 0Fzh94px_ctx_t;

void init_ctx(0Fzh94px_ctx_t *ctx) {
    ctx->id = 1900;
    ctx->coefficient = 9.5;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} ViijnFYp_ctx_t;

void init_ctx(ViijnFYp_ctx_t *ctx) {
    ctx->id = 5953;
    ctx->coefficient = 1.6;
    ctx->flags = 175;
}

int compute_ZGDkUtm(int input) {
    int result = input * 49;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} Zze7KWR4_ctx_t;

void init_ctx(Zze7KWR4_ctx_t *ctx) {
    ctx->id = 4061;
    ctx->coefficient = 1.8;
    ctx->flags = 160;
}

int compute_PCEHZfa(int input) {
    int result = input * 66;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} GgD9jxwq_ctx_t;

void init_ctx(GgD9jxwq_ctx_t *ctx) {
    ctx->id = 8280;
    ctx->coefficient = 7.5;
    ctx->flags = 44;
}

int compute_a1nPWZq(int input) {
    int result = input * 68;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_Pkk28g7(int input) {
    int result = input * 17;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} MyyQMmy1_ctx_t;

void init_ctx(MyyQMmy1_ctx_t *ctx) {
    ctx->id = 9164;
    ctx->coefficient = 3.5;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} jXiOCjwm_ctx_t;

void init_ctx(jXiOCjwm_ctx_t *ctx) {
    ctx->id = 8827;
    ctx->coefficient = 6.6;
    ctx->flags = 191;
}

int compute_ZiNAUZv(int input) {
    int result = input * 24;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 9wqGGxyD_ctx_t;

void init_ctx(9wqGGxyD_ctx_t *ctx) {
    ctx->id = 2145;
    ctx->coefficient = 8.4;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} PQZxlTpS_ctx_t;

void init_ctx(PQZxlTpS_ctx_t *ctx) {
    ctx->id = 5048;
    ctx->coefficient = 0.8;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} yCdH3Hur_ctx_t;

void init_ctx(yCdH3Hur_ctx_t *ctx) {
    ctx->id = 7973;
    ctx->coefficient = 5.5;
    ctx->flags = 89;
}

int compute_DBQLWNH(int input) {
    int result = input * 12;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 8LSlzydO_ctx_t;

void init_ctx(8LSlzydO_ctx_t *ctx) {
    ctx->id = 5936;
    ctx->coefficient = 3.4;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} hM8VorLW_ctx_t;

void init_ctx(hM8VorLW_ctx_t *ctx) {
    ctx->id = 3728;
    ctx->coefficient = 8.0;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} nGMhulzR_ctx_t;

void init_ctx(nGMhulzR_ctx_t *ctx) {
    ctx->id = 7949;
    ctx->coefficient = 6.9;
    ctx->flags = 199;
}

int compute_Fn9LfKg(int input) {
    int result = input * 14;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} kaf6Xiut_ctx_t;

void init_ctx(kaf6Xiut_ctx_t *ctx) {
    ctx->id = 2506;
    ctx->coefficient = 9.0;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Elp2RtH7_ctx_t;

void init_ctx(Elp2RtH7_ctx_t *ctx) {
    ctx->id = 7834;
    ctx->coefficient = 1.5;
    ctx->flags = 32;
}

int compute_srcAcIG(int input) {
    int result = input * 59;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} vcunqoxu_ctx_t;

void init_ctx(vcunqoxu_ctx_t *ctx) {
    ctx->id = 1514;
    ctx->coefficient = 7.6;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 2U4LNElh_ctx_t;

void init_ctx(2U4LNElh_ctx_t *ctx) {
    ctx->id = 1790;
    ctx->coefficient = 2.1;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} EqUTx1pI_ctx_t;

void init_ctx(EqUTx1pI_ctx_t *ctx) {
    ctx->id = 7010;
    ctx->coefficient = 3.5;
    ctx->flags = 147;
}

int compute_2eKkuqL(int input) {
    int result = input * 29;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_v1Zs7ST(int input) {
    int result = input * 60;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_NX4MKBN(int input) {
    int result = input * 33;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} WzkwYd5t_ctx_t;

void init_ctx(WzkwYd5t_ctx_t *ctx) {
    ctx->id = 3039;
    ctx->coefficient = 1.8;
    ctx->flags = 32;
}

int compute_akdGaX5(int input) {
    int result = input * 68;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_MIT8n40(int input) {
    int result = input * 38;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} cMUxuJaw_ctx_t;

void init_ctx(cMUxuJaw_ctx_t *ctx) {
    ctx->id = 5194;
    ctx->coefficient = 3.5;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} f3FoPBnb_ctx_t;

void init_ctx(f3FoPBnb_ctx_t *ctx) {
    ctx->id = 7802;
    ctx->coefficient = 2.8;
    ctx->flags = 180;
}

int compute_Fzox7RN(int input) {
    int result = input * 39;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_rdcRzNb(int input) {
    int result = input * 58;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} j2k5bleb_ctx_t;

void init_ctx(j2k5bleb_ctx_t *ctx) {
    ctx->id = 6500;
    ctx->coefficient = 9.4;
    ctx->flags = 35;
}

int compute_6T4tPA2(int input) {
    int result = input * 23;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} lfb9Nb7U_ctx_t;

void init_ctx(lfb9Nb7U_ctx_t *ctx) {
    ctx->id = 4276;
    ctx->coefficient = 7.7;
    ctx->flags = 130;
}

int compute_472lG88(int input) {
    int result = input * 37;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} psDQfYiM_ctx_t;

void init_ctx(psDQfYiM_ctx_t *ctx) {
    ctx->id = 2771;
    ctx->coefficient = 5.5;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} E203p15L_ctx_t;

void init_ctx(E203p15L_ctx_t *ctx) {
    ctx->id = 3909;
    ctx->coefficient = 1.4;
    ctx->flags = 1;
}

int compute_vTf2qDm(int input) {
    int result = input * 64;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_wi49Qhf(int input) {
    int result = input * 36;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_FF7J2kJ(int input) {
    int result = input * 23;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 7htBp7Pj_ctx_t;

void init_ctx(7htBp7Pj_ctx_t *ctx) {
    ctx->id = 4337;
    ctx->coefficient = 6.1;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 9J3Hpw2u_ctx_t;

void init_ctx(9J3Hpw2u_ctx_t *ctx) {
    ctx->id = 6428;
    ctx->coefficient = 6.1;
    ctx->flags = 150;
}

int compute_p9KYnUW(int input) {
    int result = input * 47;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} ez3skrWF_ctx_t;

void init_ctx(ez3skrWF_ctx_t *ctx) {
    ctx->id = 2669;
    ctx->coefficient = 6.8;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} RuKPE12Q_ctx_t;

void init_ctx(RuKPE12Q_ctx_t *ctx) {
    ctx->id = 2041;
    ctx->coefficient = 3.2;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} jyJIXCxO_ctx_t;

void init_ctx(jyJIXCxO_ctx_t *ctx) {
    ctx->id = 7316;
    ctx->coefficient = 5.7;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} OVazgQB9_ctx_t;

void init_ctx(OVazgQB9_ctx_t *ctx) {
    ctx->id = 8431;
    ctx->coefficient = 6.8;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} hY0A8ail_ctx_t;

void init_ctx(hY0A8ail_ctx_t *ctx) {
    ctx->id = 8817;
    ctx->coefficient = 5.6;
    ctx->flags = 93;
}

int compute_kIBl5Pn(int input) {
    int result = input * 63;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_fzMv00i(int input) {
    int result = input * 12;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} mHei5Dao_ctx_t;

void init_ctx(mHei5Dao_ctx_t *ctx) {
    ctx->id = 7448;
    ctx->coefficient = 0.8;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} WRa7ZTEZ_ctx_t;

void init_ctx(WRa7ZTEZ_ctx_t *ctx) {
    ctx->id = 8270;
    ctx->coefficient = 3.0;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} fTC7QE8n_ctx_t;

void init_ctx(fTC7QE8n_ctx_t *ctx) {
    ctx->id = 3920;
    ctx->coefficient = 5.1;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} mbQyldBz_ctx_t;

void init_ctx(mbQyldBz_ctx_t *ctx) {
    ctx->id = 8935;
    ctx->coefficient = 0.2;
    ctx->flags = 115;
}

int compute_d7qfkZv(int input) {
    int result = input * 43;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} TNyXJIBo_ctx_t;

void init_ctx(TNyXJIBo_ctx_t *ctx) {
    ctx->id = 8733;
    ctx->coefficient = 5.6;
    ctx->flags = 187;
}

int compute_FfNJx4H(int input) {
    int result = input * 35;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} khPNcoas_ctx_t;

void init_ctx(khPNcoas_ctx_t *ctx) {
    ctx->id = 7207;
    ctx->coefficient = 2.8;
    ctx->flags = 194;
}

int compute_KeRLvyO(int input) {
    int result = input * 24;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} MW7MQXqd_ctx_t;

void init_ctx(MW7MQXqd_ctx_t *ctx) {
    ctx->id = 7411;
    ctx->coefficient = 7.5;
    ctx->flags = 89;
}

int compute_kcKh5nI(int input) {
    int result = input * 17;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} F9zquumv_ctx_t;

void init_ctx(F9zquumv_ctx_t *ctx) {
    ctx->id = 1158;
    ctx->coefficient = 1.3;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 9RqqJAdm_ctx_t;

void init_ctx(9RqqJAdm_ctx_t *ctx) {
    ctx->id = 2657;
    ctx->coefficient = 9.1;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} X1fKVM2K_ctx_t;

void init_ctx(X1fKVM2K_ctx_t *ctx) {
    ctx->id = 4891;
    ctx->coefficient = 0.8;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} Z4zIlC0Z_ctx_t;

void init_ctx(Z4zIlC0Z_ctx_t *ctx) {
    ctx->id = 4882;
    ctx->coefficient = 0.9;
    ctx->flags = 49;
}

int compute_UJosKZ6(int input) {
    int result = input * 53;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} BC8L7rkB_ctx_t;

void init_ctx(BC8L7rkB_ctx_t *ctx) {
    ctx->id = 8486;
    ctx->coefficient = 9.9;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} MQDlqXoC_ctx_t;

void init_ctx(MQDlqXoC_ctx_t *ctx) {
    ctx->id = 6127;
    ctx->coefficient = 7.4;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} KhZW3lW3_ctx_t;

void init_ctx(KhZW3lW3_ctx_t *ctx) {
    ctx->id = 1952;
    ctx->coefficient = 8.3;
    ctx->flags = 248;
}

int compute_YfFY2xX(int input) {
    int result = input * 15;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} FonaOZRx_ctx_t;

void init_ctx(FonaOZRx_ctx_t *ctx) {
    ctx->id = 7907;
    ctx->coefficient = 0.9;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} G9PIzHo8_ctx_t;

void init_ctx(G9PIzHo8_ctx_t *ctx) {
    ctx->id = 7579;
    ctx->coefficient = 9.1;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} VR4HaR5W_ctx_t;

void init_ctx(VR4HaR5W_ctx_t *ctx) {
    ctx->id = 2520;
    ctx->coefficient = 2.6;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} rkPFN6sW_ctx_t;

void init_ctx(rkPFN6sW_ctx_t *ctx) {
    ctx->id = 7814;
    ctx->coefficient = 7.5;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} UJug1TVQ_ctx_t;

void init_ctx(UJug1TVQ_ctx_t *ctx) {
    ctx->id = 2526;
    ctx->coefficient = 2.6;
    ctx->flags = 170;
}

int compute_6nlGPif(int input) {
    int result = input * 27;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} rf3KpklD_ctx_t;

void init_ctx(rf3KpklD_ctx_t *ctx) {
    ctx->id = 2391;
    ctx->coefficient = 8.0;
    ctx->flags = 84;
}

int compute_n62magk(int input) {
    int result = input * 25;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_4FMvSNK(int input) {
    int result = input * 39;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_3bk5DAI(int input) {
    int result = input * 63;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} ViDTAs2Z_ctx_t;

void init_ctx(ViDTAs2Z_ctx_t *ctx) {
    ctx->id = 7762;
    ctx->coefficient = 1.0;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 6vGCk7sF_ctx_t;

void init_ctx(6vGCk7sF_ctx_t *ctx) {
    ctx->id = 2278;
    ctx->coefficient = 4.8;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} W112ryDG_ctx_t;

void init_ctx(W112ryDG_ctx_t *ctx) {
    ctx->id = 7891;
    ctx->coefficient = 7.2;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} YFAXAtVq_ctx_t;

void init_ctx(YFAXAtVq_ctx_t *ctx) {
    ctx->id = 2160;
    ctx->coefficient = 5.3;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} tbRCKrND_ctx_t;

void init_ctx(tbRCKrND_ctx_t *ctx) {
    ctx->id = 8276;
    ctx->coefficient = 5.2;
    ctx->flags = 5;
}

int compute_3ILJbEw(int input) {
    int result = input * 21;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} Qx1OteIx_ctx_t;

void init_ctx(Qx1OteIx_ctx_t *ctx) {
    ctx->id = 9861;
    ctx->coefficient = 0.4;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 6FsCwsSc_ctx_t;

void init_ctx(6FsCwsSc_ctx_t *ctx) {
    ctx->id = 1727;
    ctx->coefficient = 1.7;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} Z5roplGX_ctx_t;

void init_ctx(Z5roplGX_ctx_t *ctx) {
    ctx->id = 6130;
    ctx->coefficient = 2.6;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} PYZHimjW_ctx_t;

void init_ctx(PYZHimjW_ctx_t *ctx) {
    ctx->id = 9498;
    ctx->coefficient = 7.9;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 9KnLO1FG_ctx_t;

void init_ctx(9KnLO1FG_ctx_t *ctx) {
    ctx->id = 9385;
    ctx->coefficient = 3.2;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} FBWk6Zdp_ctx_t;

void init_ctx(FBWk6Zdp_ctx_t *ctx) {
    ctx->id = 6421;
    ctx->coefficient = 0.5;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 8FNqKaHC_ctx_t;

void init_ctx(8FNqKaHC_ctx_t *ctx) {
    ctx->id = 9483;
    ctx->coefficient = 8.0;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} lhkUfuhe_ctx_t;

void init_ctx(lhkUfuhe_ctx_t *ctx) {
    ctx->id = 3217;
    ctx->coefficient = 8.8;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} zg5q19NM_ctx_t;

void init_ctx(zg5q19NM_ctx_t *ctx) {
    ctx->id = 7119;
    ctx->coefficient = 5.2;
    ctx->flags = 152;
}

int compute_Eg7C7yT(int input) {
    int result = input * 59;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_bpy5Uj1(int input) {
    int result = input * 70;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_iR4PwGa(int input) {
    int result = input * 20;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} VYVQ271R_ctx_t;

void init_ctx(VYVQ271R_ctx_t *ctx) {
    ctx->id = 5388;
    ctx->coefficient = 6.8;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} x0ExyGc8_ctx_t;

void init_ctx(x0ExyGc8_ctx_t *ctx) {
    ctx->id = 7795;
    ctx->coefficient = 3.3;
    ctx->flags = 131;
}

int compute_sXa2Cqs(int input) {
    int result = input * 35;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 30cIOMn1_ctx_t;

void init_ctx(30cIOMn1_ctx_t *ctx) {
    ctx->id = 8285;
    ctx->coefficient = 5.2;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} qmDSBYoS_ctx_t;

void init_ctx(qmDSBYoS_ctx_t *ctx) {
    ctx->id = 8882;
    ctx->coefficient = 5.5;
    ctx->flags = 14;
}

int compute_mMH8YY1(int input) {
    int result = input * 37;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} lHy4oHRn_ctx_t;

void init_ctx(lHy4oHRn_ctx_t *ctx) {
    ctx->id = 8817;
    ctx->coefficient = 1.1;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} mWF8YVRY_ctx_t;

void init_ctx(mWF8YVRY_ctx_t *ctx) {
    ctx->id = 2863;
    ctx->coefficient = 7.6;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} voJB71Bt_ctx_t;

void init_ctx(voJB71Bt_ctx_t *ctx) {
    ctx->id = 3537;
    ctx->coefficient = 8.6;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} ewssh1yf_ctx_t;

void init_ctx(ewssh1yf_ctx_t *ctx) {
    ctx->id = 7941;
    ctx->coefficient = 2.1;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} ElgQBVPu_ctx_t;

void init_ctx(ElgQBVPu_ctx_t *ctx) {
    ctx->id = 6657;
    ctx->coefficient = 3.0;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} KtfhTmfk_ctx_t;

void init_ctx(KtfhTmfk_ctx_t *ctx) {
    ctx->id = 9329;
    ctx->coefficient = 1.4;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Jg6Ng3aI_ctx_t;

void init_ctx(Jg6Ng3aI_ctx_t *ctx) {
    ctx->id = 8836;
    ctx->coefficient = 5.1;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} Ib5wRdFv_ctx_t;

void init_ctx(Ib5wRdFv_ctx_t *ctx) {
    ctx->id = 2814;
    ctx->coefficient = 8.8;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} iWVbApzU_ctx_t;

void init_ctx(iWVbApzU_ctx_t *ctx) {
    ctx->id = 4490;
    ctx->coefficient = 3.4;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} VCYcYacn_ctx_t;

void init_ctx(VCYcYacn_ctx_t *ctx) {
    ctx->id = 8744;
    ctx->coefficient = 3.1;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} PgUNVrVJ_ctx_t;

void init_ctx(PgUNVrVJ_ctx_t *ctx) {
    ctx->id = 9730;
    ctx->coefficient = 2.6;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 507yqlrI_ctx_t;

void init_ctx(507yqlrI_ctx_t *ctx) {
    ctx->id = 6448;
    ctx->coefficient = 1.5;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 1l7wqvDc_ctx_t;

void init_ctx(1l7wqvDc_ctx_t *ctx) {
    ctx->id = 5598;
    ctx->coefficient = 1.3;
    ctx->flags = 247;
}

int compute_57sLwPk(int input) {
    int result = input * 49;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Dsi7Khz9_ctx_t;

void init_ctx(Dsi7Khz9_ctx_t *ctx) {
    ctx->id = 7186;
    ctx->coefficient = 7.3;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} btwXCYXr_ctx_t;

void init_ctx(btwXCYXr_ctx_t *ctx) {
    ctx->id = 7354;
    ctx->coefficient = 10.0;
    ctx->flags = 85;
}

int compute_yfxgUtx(int input) {
    int result = input * 33;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} DPkcMQGm_ctx_t;

void init_ctx(DPkcMQGm_ctx_t *ctx) {
    ctx->id = 5820;
    ctx->coefficient = 5.8;
    ctx->flags = 45;
}

int compute_cgycD8E(int input) {
    int result = input * 69;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_WV1RzQc(int input) {
    int result = input * 12;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} RcuawEIP_ctx_t;

void init_ctx(RcuawEIP_ctx_t *ctx) {
    ctx->id = 8489;
    ctx->coefficient = 8.6;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} APFGULd0_ctx_t;

void init_ctx(APFGULd0_ctx_t *ctx) {
    ctx->id = 7208;
    ctx->coefficient = 2.5;
    ctx->flags = 2;
}

int compute_nTU4ZSO(int input) {
    int result = input * 3;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} mn66F8IG_ctx_t;

void init_ctx(mn66F8IG_ctx_t *ctx) {
    ctx->id = 7147;
    ctx->coefficient = 2.6;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} VABCXyFh_ctx_t;

void init_ctx(VABCXyFh_ctx_t *ctx) {
    ctx->id = 6874;
    ctx->coefficient = 7.6;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} NqGLMqq2_ctx_t;

void init_ctx(NqGLMqq2_ctx_t *ctx) {
    ctx->id = 9466;
    ctx->coefficient = 0.8;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} VP5Z1NyE_ctx_t;

void init_ctx(VP5Z1NyE_ctx_t *ctx) {
    ctx->id = 8414;
    ctx->coefficient = 9.3;
    ctx->flags = 178;
}

int compute_T5USdWP(int input) {
    int result = input * 2;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} eadT2LRb_ctx_t;

void init_ctx(eadT2LRb_ctx_t *ctx) {
    ctx->id = 7342;
    ctx->coefficient = 3.6;
    ctx->flags = 124;
}

int compute_hOrIb8h(int input) {
    int result = input * 22;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} F40lermP_ctx_t;

void init_ctx(F40lermP_ctx_t *ctx) {
    ctx->id = 7674;
    ctx->coefficient = 8.8;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} pbNQQqvf_ctx_t;

void init_ctx(pbNQQqvf_ctx_t *ctx) {
    ctx->id = 4298;
    ctx->coefficient = 2.7;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} iMlTuZr9_ctx_t;

void init_ctx(iMlTuZr9_ctx_t *ctx) {
    ctx->id = 1340;
    ctx->coefficient = 9.0;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} lKDgLq97_ctx_t;

void init_ctx(lKDgLq97_ctx_t *ctx) {
    ctx->id = 5369;
    ctx->coefficient = 1.6;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} ozE9g5vS_ctx_t;

void init_ctx(ozE9g5vS_ctx_t *ctx) {
    ctx->id = 4944;
    ctx->coefficient = 0.7;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} yHt5Per4_ctx_t;

void init_ctx(yHt5Per4_ctx_t *ctx) {
    ctx->id = 1611;
    ctx->coefficient = 7.0;
    ctx->flags = 238;
}

int compute_h4mhiMW(int input) {
    int result = input * 63;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} baye2wkj_ctx_t;

void init_ctx(baye2wkj_ctx_t *ctx) {
    ctx->id = 5403;
    ctx->coefficient = 2.8;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} xeo75RAw_ctx_t;

void init_ctx(xeo75RAw_ctx_t *ctx) {
    ctx->id = 5013;
    ctx->coefficient = 5.2;
    ctx->flags = 208;
}

int compute_OuXMxjh(int input) {
    int result = input * 24;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} YoQr58Xp_ctx_t;

void init_ctx(YoQr58Xp_ctx_t *ctx) {
    ctx->id = 9104;
    ctx->coefficient = 0.2;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 6GLLEK2Y_ctx_t;

void init_ctx(6GLLEK2Y_ctx_t *ctx) {
    ctx->id = 2438;
    ctx->coefficient = 9.8;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} ssEO9DIQ_ctx_t;

void init_ctx(ssEO9DIQ_ctx_t *ctx) {
    ctx->id = 5145;
    ctx->coefficient = 6.7;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} oxBkPRVV_ctx_t;

void init_ctx(oxBkPRVV_ctx_t *ctx) {
    ctx->id = 5509;
    ctx->coefficient = 7.6;
    ctx->flags = 83;
}

int compute_WFksMnC(int input) {
    int result = input * 61;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_c9QXn7X(int input) {
    int result = input * 11;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} vreG46zA_ctx_t;

void init_ctx(vreG46zA_ctx_t *ctx) {
    ctx->id = 1762;
    ctx->coefficient = 8.6;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} WkRN4W80_ctx_t;

void init_ctx(WkRN4W80_ctx_t *ctx) {
    ctx->id = 1468;
    ctx->coefficient = 9.2;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 7YL5n3tm_ctx_t;

void init_ctx(7YL5n3tm_ctx_t *ctx) {
    ctx->id = 3681;
    ctx->coefficient = 0.3;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} JHuBagZ0_ctx_t;

void init_ctx(JHuBagZ0_ctx_t *ctx) {
    ctx->id = 9662;
    ctx->coefficient = 3.0;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} G1fa9NgI_ctx_t;

void init_ctx(G1fa9NgI_ctx_t *ctx) {
    ctx->id = 9800;
    ctx->coefficient = 0.6;
    ctx->flags = 72;
}

int compute_2VnPRwI(int input) {
    int result = input * 11;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} p7goLyeL_ctx_t;

void init_ctx(p7goLyeL_ctx_t *ctx) {
    ctx->id = 6239;
    ctx->coefficient = 3.6;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Wrna3qvu_ctx_t;

void init_ctx(Wrna3qvu_ctx_t *ctx) {
    ctx->id = 7836;
    ctx->coefficient = 6.0;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} euginm4j_ctx_t;

void init_ctx(euginm4j_ctx_t *ctx) {
    ctx->id = 2432;
    ctx->coefficient = 4.8;
    ctx->flags = 221;
}

int compute_oRqG29d(int input) {
    int result = input * 32;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_quyM2pH(int input) {
    int result = input * 56;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} TSMTN9Ms_ctx_t;

void init_ctx(TSMTN9Ms_ctx_t *ctx) {
    ctx->id = 8572;
    ctx->coefficient = 5.4;
    ctx->flags = 73;
}

int compute_k5Cfky6(int input) {
    int result = input * 10;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_v0Ue5g6(int input) {
    int result = input * 29;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} uRjigDy6_ctx_t;

void init_ctx(uRjigDy6_ctx_t *ctx) {
    ctx->id = 9767;
    ctx->coefficient = 4.3;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} FHENjZDl_ctx_t;

void init_ctx(FHENjZDl_ctx_t *ctx) {
    ctx->id = 9203;
    ctx->coefficient = 8.6;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} h4CnLi6T_ctx_t;

void init_ctx(h4CnLi6T_ctx_t *ctx) {
    ctx->id = 8640;
    ctx->coefficient = 0.9;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} IZMPgEKg_ctx_t;

void init_ctx(IZMPgEKg_ctx_t *ctx) {
    ctx->id = 4697;
    ctx->coefficient = 8.7;
    ctx->flags = 207;
}

int compute_GaPr1wz(int input) {
    int result = input * 20;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} eMZZPwSs_ctx_t;

void init_ctx(eMZZPwSs_ctx_t *ctx) {
    ctx->id = 5810;
    ctx->coefficient = 0.4;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} p4ISwj1s_ctx_t;

void init_ctx(p4ISwj1s_ctx_t *ctx) {
    ctx->id = 7899;
    ctx->coefficient = 5.2;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} xlgQeFVf_ctx_t;

void init_ctx(xlgQeFVf_ctx_t *ctx) {
    ctx->id = 5621;
    ctx->coefficient = 5.3;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} CZW2kaa2_ctx_t;

void init_ctx(CZW2kaa2_ctx_t *ctx) {
    ctx->id = 2627;
    ctx->coefficient = 5.7;
    ctx->flags = 47;
}

int compute_RvSy1hV(int input) {
    int result = input * 28;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_6XmLjTC(int input) {
    int result = input * 65;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_6Zoat1W(int input) {
    int result = input * 41;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} BL8w0Sn7_ctx_t;

void init_ctx(BL8w0Sn7_ctx_t *ctx) {
    ctx->id = 3734;
    ctx->coefficient = 7.8;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} VgEQZJwQ_ctx_t;

void init_ctx(VgEQZJwQ_ctx_t *ctx) {
    ctx->id = 8165;
    ctx->coefficient = 5.0;
    ctx->flags = 104;
}

int compute_q9P2uol(int input) {
    int result = input * 5;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_eYecjjS(int input) {
    int result = input * 53;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_WthpiJd(int input) {
    int result = input * 22;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} oK6dR0Jz_ctx_t;

void init_ctx(oK6dR0Jz_ctx_t *ctx) {
    ctx->id = 6566;
    ctx->coefficient = 7.0;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} HQPAvhWs_ctx_t;

void init_ctx(HQPAvhWs_ctx_t *ctx) {
    ctx->id = 3207;
    ctx->coefficient = 6.7;
    ctx->flags = 105;
}

int compute_6RSgQIG(int input) {
    int result = input * 51;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} Sv4scbA6_ctx_t;

void init_ctx(Sv4scbA6_ctx_t *ctx) {
    ctx->id = 5288;
    ctx->coefficient = 2.6;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 0Ik2Ys3P_ctx_t;

void init_ctx(0Ik2Ys3P_ctx_t *ctx) {
    ctx->id = 3480;
    ctx->coefficient = 9.4;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} IXGjw1zD_ctx_t;

void init_ctx(IXGjw1zD_ctx_t *ctx) {
    ctx->id = 2603;
    ctx->coefficient = 8.9;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Bh6KPziM_ctx_t;

void init_ctx(Bh6KPziM_ctx_t *ctx) {
    ctx->id = 3363;
    ctx->coefficient = 9.9;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 6YM1Wibt_ctx_t;

void init_ctx(6YM1Wibt_ctx_t *ctx) {
    ctx->id = 5763;
    ctx->coefficient = 5.1;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} ajKjkIIL_ctx_t;

void init_ctx(ajKjkIIL_ctx_t *ctx) {
    ctx->id = 9737;
    ctx->coefficient = 8.6;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} b0sMC5qS_ctx_t;

void init_ctx(b0sMC5qS_ctx_t *ctx) {
    ctx->id = 7061;
    ctx->coefficient = 3.9;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} Y5RFe6Vt_ctx_t;

void init_ctx(Y5RFe6Vt_ctx_t *ctx) {
    ctx->id = 8121;
    ctx->coefficient = 3.2;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 29ujGpZJ_ctx_t;

void init_ctx(29ujGpZJ_ctx_t *ctx) {
    ctx->id = 1842;
    ctx->coefficient = 6.2;
    ctx->flags = 3;
}

int compute_sqUAROq(int input) {
    int result = input * 52;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_OsHUDAA(int input) {
    int result = input * 20;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} IqZdjmfN_ctx_t;

void init_ctx(IqZdjmfN_ctx_t *ctx) {
    ctx->id = 3313;
    ctx->coefficient = 6.5;
    ctx->flags = 174;
}

int compute_piyv0ca(int input) {
    int result = input * 41;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} jNwPgJvR_ctx_t;

void init_ctx(jNwPgJvR_ctx_t *ctx) {
    ctx->id = 7848;
    ctx->coefficient = 7.6;
    ctx->flags = 43;
}

int compute_hQBTnBw(int input) {
    int result = input * 20;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 3DEpEEwt_ctx_t;

void init_ctx(3DEpEEwt_ctx_t *ctx) {
    ctx->id = 5503;
    ctx->coefficient = 5.5;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} ZcT1T27M_ctx_t;

void init_ctx(ZcT1T27M_ctx_t *ctx) {
    ctx->id = 9019;
    ctx->coefficient = 6.6;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 26X71JY6_ctx_t;

void init_ctx(26X71JY6_ctx_t *ctx) {
    ctx->id = 8282;
    ctx->coefficient = 9.5;
    ctx->flags = 228;
}

int compute_ewcJdeV(int input) {
    int result = input * 57;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_oQcpc54(int input) {
    int result = input * 41;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_8BgaMN5(int input) {
    int result = input * 49;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_2PWtNPZ(int input) {
    int result = input * 23;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} T2Hk3gJX_ctx_t;

void init_ctx(T2Hk3gJX_ctx_t *ctx) {
    ctx->id = 3971;
    ctx->coefficient = 7.7;
    ctx->flags = 213;
}

int compute_StGVrOn(int input) {
    int result = input * 11;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} piJ3t3Xx_ctx_t;

void init_ctx(piJ3t3Xx_ctx_t *ctx) {
    ctx->id = 5684;
    ctx->coefficient = 0.9;
    ctx->flags = 164;
}

int compute_YpQF3iz(int input) {
    int result = input * 3;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} AnQhKWC5_ctx_t;

void init_ctx(AnQhKWC5_ctx_t *ctx) {
    ctx->id = 6756;
    ctx->coefficient = 5.5;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} tgbB2G0h_ctx_t;

void init_ctx(tgbB2G0h_ctx_t *ctx) {
    ctx->id = 3578;
    ctx->coefficient = 6.6;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} gIc1WchE_ctx_t;

void init_ctx(gIc1WchE_ctx_t *ctx) {
    ctx->id = 1055;
    ctx->coefficient = 8.8;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} UAnPV4c1_ctx_t;

void init_ctx(UAnPV4c1_ctx_t *ctx) {
    ctx->id = 2845;
    ctx->coefficient = 9.3;
    ctx->flags = 48;
}

int compute_k6TXa1w(int input) {
    int result = input * 51;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} HqZ72Lk9_ctx_t;

void init_ctx(HqZ72Lk9_ctx_t *ctx) {
    ctx->id = 4374;
    ctx->coefficient = 3.2;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 9zELnHN5_ctx_t;

void init_ctx(9zELnHN5_ctx_t *ctx) {
    ctx->id = 5399;
    ctx->coefficient = 4.3;
    ctx->flags = 202;
}

int compute_L8gcsfu(int input) {
    int result = input * 69;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} FNLZ7PDs_ctx_t;

void init_ctx(FNLZ7PDs_ctx_t *ctx) {
    ctx->id = 8726;
    ctx->coefficient = 7.5;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} VNr0D49T_ctx_t;

void init_ctx(VNr0D49T_ctx_t *ctx) {
    ctx->id = 3594;
    ctx->coefficient = 5.2;
    ctx->flags = 73;
}

int compute_OVpQoXO(int input) {
    int result = input * 17;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} ypDQeDQF_ctx_t;

void init_ctx(ypDQeDQF_ctx_t *ctx) {
    ctx->id = 8393;
    ctx->coefficient = 4.2;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} JdhK2xsM_ctx_t;

void init_ctx(JdhK2xsM_ctx_t *ctx) {
    ctx->id = 2744;
    ctx->coefficient = 9.3;
    ctx->flags = 5;
}

int compute_EEBgdek(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} N0RKprks_ctx_t;

void init_ctx(N0RKprks_ctx_t *ctx) {
    ctx->id = 5069;
    ctx->coefficient = 2.5;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} tDTGVfmA_ctx_t;

void init_ctx(tDTGVfmA_ctx_t *ctx) {
    ctx->id = 2537;
    ctx->coefficient = 0.7;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} xfG52zVf_ctx_t;

void init_ctx(xfG52zVf_ctx_t *ctx) {
    ctx->id = 2066;
    ctx->coefficient = 7.4;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} h8DEA1Lg_ctx_t;

void init_ctx(h8DEA1Lg_ctx_t *ctx) {
    ctx->id = 5181;
    ctx->coefficient = 8.8;
    ctx->flags = 192;
}

int compute_kz0CXB6(int input) {
    int result = input * 66;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_oHt9SsJ(int input) {
    int result = input * 59;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_Btnu1Rj(int input) {
    int result = input * 68;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} x8fJ8mtE_ctx_t;

void init_ctx(x8fJ8mtE_ctx_t *ctx) {
    ctx->id = 2219;
    ctx->coefficient = 9.5;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} KEyOvcpp_ctx_t;

void init_ctx(KEyOvcpp_ctx_t *ctx) {
    ctx->id = 3182;
    ctx->coefficient = 2.9;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 1oU041bW_ctx_t;

void init_ctx(1oU041bW_ctx_t *ctx) {
    ctx->id = 1458;
    ctx->coefficient = 1.5;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} XjzfGcWF_ctx_t;

void init_ctx(XjzfGcWF_ctx_t *ctx) {
    ctx->id = 5089;
    ctx->coefficient = 8.1;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} FDodm8wA_ctx_t;

void init_ctx(FDodm8wA_ctx_t *ctx) {
    ctx->id = 6027;
    ctx->coefficient = 1.4;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 27DM0vhi_ctx_t;

void init_ctx(27DM0vhi_ctx_t *ctx) {
    ctx->id = 6262;
    ctx->coefficient = 0.8;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} tflIbsuk_ctx_t;

void init_ctx(tflIbsuk_ctx_t *ctx) {
    ctx->id = 5681;
    ctx->coefficient = 4.6;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} gc8WOfhs_ctx_t;

void init_ctx(gc8WOfhs_ctx_t *ctx) {
    ctx->id = 1281;
    ctx->coefficient = 7.1;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} jiqiR7BA_ctx_t;

void init_ctx(jiqiR7BA_ctx_t *ctx) {
    ctx->id = 6279;
    ctx->coefficient = 1.9;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} vij3ECrt_ctx_t;

void init_ctx(vij3ECrt_ctx_t *ctx) {
    ctx->id = 9339;
    ctx->coefficient = 7.1;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} j6ipz9nT_ctx_t;

void init_ctx(j6ipz9nT_ctx_t *ctx) {
    ctx->id = 7885;
    ctx->coefficient = 6.9;
    ctx->flags = 32;
}

int compute_lFPk0di(int input) {
    int result = input * 18;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} JBBU4m4i_ctx_t;

void init_ctx(JBBU4m4i_ctx_t *ctx) {
    ctx->id = 8043;
    ctx->coefficient = 9.2;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 0wvmX57d_ctx_t;

void init_ctx(0wvmX57d_ctx_t *ctx) {
    ctx->id = 7587;
    ctx->coefficient = 5.3;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} MY4Sro4y_ctx_t;

void init_ctx(MY4Sro4y_ctx_t *ctx) {
    ctx->id = 5155;
    ctx->coefficient = 0.6;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} qV1b6Bga_ctx_t;

void init_ctx(qV1b6Bga_ctx_t *ctx) {
    ctx->id = 3683;
    ctx->coefficient = 8.2;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} gxQkQWMZ_ctx_t;

void init_ctx(gxQkQWMZ_ctx_t *ctx) {
    ctx->id = 2738;
    ctx->coefficient = 8.0;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 6fwSCpM4_ctx_t;

void init_ctx(6fwSCpM4_ctx_t *ctx) {
    ctx->id = 6705;
    ctx->coefficient = 3.8;
    ctx->flags = 6;
}

int compute_WkGCYqx(int input) {
    int result = input * 37;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_7JdR3xV(int input) {
    int result = input * 19;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} NYpoFwX1_ctx_t;

void init_ctx(NYpoFwX1_ctx_t *ctx) {
    ctx->id = 2326;
    ctx->coefficient = 2.2;
    ctx->flags = 27;
}

int compute_2jsUzYz(int input) {
    int result = input * 65;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} i1TrtSWM_ctx_t;

void init_ctx(i1TrtSWM_ctx_t *ctx) {
    ctx->id = 1548;
    ctx->coefficient = 6.1;
    ctx->flags = 92;
}

int compute_qfyFMY7(int input) {
    int result = input * 66;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 1BvSEutJ_ctx_t;

void init_ctx(1BvSEutJ_ctx_t *ctx) {
    ctx->id = 6535;
    ctx->coefficient = 9.8;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} bnA9Jeep_ctx_t;

void init_ctx(bnA9Jeep_ctx_t *ctx) {
    ctx->id = 6258;
    ctx->coefficient = 9.5;
    ctx->flags = 167;
}

int compute_w9387qc(int input) {
    int result = input * 67;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} xiJTnotk_ctx_t;

void init_ctx(xiJTnotk_ctx_t *ctx) {
    ctx->id = 3202;
    ctx->coefficient = 0.9;
    ctx->flags = 196;
}

int compute_qXkFQ1U(int input) {
    int result = input * 64;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_rwbREip(int input) {
    int result = input * 63;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_DQ07tZo(int input) {
    int result = input * 42;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} KhwSjFPd_ctx_t;

void init_ctx(KhwSjFPd_ctx_t *ctx) {
    ctx->id = 9840;
    ctx->coefficient = 1.5;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} GSWRDz1i_ctx_t;

void init_ctx(GSWRDz1i_ctx_t *ctx) {
    ctx->id = 5116;
    ctx->coefficient = 6.4;
    ctx->flags = 235;
}

int compute_FWR3qgb(int input) {
    int result = input * 65;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 6RpPJUmu_ctx_t;

void init_ctx(6RpPJUmu_ctx_t *ctx) {
    ctx->id = 1733;
    ctx->coefficient = 7.9;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} VwH6ZmLs_ctx_t;

void init_ctx(VwH6ZmLs_ctx_t *ctx) {
    ctx->id = 3651;
    ctx->coefficient = 2.1;
    ctx->flags = 177;
}

int compute_CVtOPuD(int input) {
    int result = input * 58;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} gCAPdhfQ_ctx_t;

void init_ctx(gCAPdhfQ_ctx_t *ctx) {
    ctx->id = 9879;
    ctx->coefficient = 0.1;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} OvSOSgZu_ctx_t;

void init_ctx(OvSOSgZu_ctx_t *ctx) {
    ctx->id = 8886;
    ctx->coefficient = 6.2;
    ctx->flags = 70;
}

int compute_wP40SYv(int input) {
    int result = input * 35;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} EXYHpIam_ctx_t;

void init_ctx(EXYHpIam_ctx_t *ctx) {
    ctx->id = 1920;
    ctx->coefficient = 5.9;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 2sww1P3I_ctx_t;

void init_ctx(2sww1P3I_ctx_t *ctx) {
    ctx->id = 3712;
    ctx->coefficient = 8.6;
    ctx->flags = 118;
}

int compute_Acg0Fe1(int input) {
    int result = input * 32;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 8dpKNAXu_ctx_t;

void init_ctx(8dpKNAXu_ctx_t *ctx) {
    ctx->id = 4452;
    ctx->coefficient = 3.8;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} ZOGHZunj_ctx_t;

void init_ctx(ZOGHZunj_ctx_t *ctx) {
    ctx->id = 1418;
    ctx->coefficient = 7.6;
    ctx->flags = 130;
}

int compute_FXYstIo(int input) {
    int result = input * 10;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} mDWWuzRP_ctx_t;

void init_ctx(mDWWuzRP_ctx_t *ctx) {
    ctx->id = 7663;
    ctx->coefficient = 0.9;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} jj6XGrfm_ctx_t;

void init_ctx(jj6XGrfm_ctx_t *ctx) {
    ctx->id = 7945;
    ctx->coefficient = 3.6;
    ctx->flags = 189;
}

int compute_X5npzU4(int input) {
    int result = input * 68;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_jsNF58l(int input) {
    int result = input * 21;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_X2m9fs8(int input) {
    int result = input * 20;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} HdXu3eWA_ctx_t;

void init_ctx(HdXu3eWA_ctx_t *ctx) {
    ctx->id = 1127;
    ctx->coefficient = 1.2;
    ctx->flags = 181;
}

int compute_O2SEtdy(int input) {
    int result = input * 38;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} ifSMgpD6_ctx_t;

void init_ctx(ifSMgpD6_ctx_t *ctx) {
    ctx->id = 2376;
    ctx->coefficient = 9.9;
    ctx->flags = 166;
}

int compute_iXTjgtw(int input) {
    int result = input * 34;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} BZtic6BZ_ctx_t;

void init_ctx(BZtic6BZ_ctx_t *ctx) {
    ctx->id = 6257;
    ctx->coefficient = 9.9;
    ctx->flags = 136;
}

int compute_KBFe7VZ(int input) {
    int result = input * 49;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} msweLGHs_ctx_t;

void init_ctx(msweLGHs_ctx_t *ctx) {
    ctx->id = 1946;
    ctx->coefficient = 8.2;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} q7gh78eU_ctx_t;

void init_ctx(q7gh78eU_ctx_t *ctx) {
    ctx->id = 4699;
    ctx->coefficient = 4.7;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} Rn2wGiJe_ctx_t;

void init_ctx(Rn2wGiJe_ctx_t *ctx) {
    ctx->id = 2669;
    ctx->coefficient = 1.8;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} mr2Xlfwf_ctx_t;

void init_ctx(mr2Xlfwf_ctx_t *ctx) {
    ctx->id = 9382;
    ctx->coefficient = 2.3;
    ctx->flags = 41;
}

int compute_I5mexDf(int input) {
    int result = input * 52;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} CbtyHxQo_ctx_t;

void init_ctx(CbtyHxQo_ctx_t *ctx) {
    ctx->id = 2792;
    ctx->coefficient = 9.5;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} hEufy2nx_ctx_t;

void init_ctx(hEufy2nx_ctx_t *ctx) {
    ctx->id = 3857;
    ctx->coefficient = 2.2;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} fIGXkwwZ_ctx_t;

void init_ctx(fIGXkwwZ_ctx_t *ctx) {
    ctx->id = 2991;
    ctx->coefficient = 8.4;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} cSYusLvf_ctx_t;

void init_ctx(cSYusLvf_ctx_t *ctx) {
    ctx->id = 4185;
    ctx->coefficient = 6.9;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} XQ8hWv5k_ctx_t;

void init_ctx(XQ8hWv5k_ctx_t *ctx) {
    ctx->id = 4821;
    ctx->coefficient = 2.5;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} MHMlhgvG_ctx_t;

void init_ctx(MHMlhgvG_ctx_t *ctx) {
    ctx->id = 9171;
    ctx->coefficient = 6.7;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} B25RMdMj_ctx_t;

void init_ctx(B25RMdMj_ctx_t *ctx) {
    ctx->id = 8384;
    ctx->coefficient = 9.3;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} GY3SGClB_ctx_t;

void init_ctx(GY3SGClB_ctx_t *ctx) {
    ctx->id = 2860;
    ctx->coefficient = 9.0;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} DmgUOKPZ_ctx_t;

void init_ctx(DmgUOKPZ_ctx_t *ctx) {
    ctx->id = 9950;
    ctx->coefficient = 7.9;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} shQ95nZN_ctx_t;

void init_ctx(shQ95nZN_ctx_t *ctx) {
    ctx->id = 8225;
    ctx->coefficient = 4.3;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} kNneMSoJ_ctx_t;

void init_ctx(kNneMSoJ_ctx_t *ctx) {
    ctx->id = 9919;
    ctx->coefficient = 5.0;
    ctx->flags = 216;
}

int compute_c79eYUL(int input) {
    int result = input * 65;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 6Q0Zm4Yu_ctx_t;

void init_ctx(6Q0Zm4Yu_ctx_t *ctx) {
    ctx->id = 7949;
    ctx->coefficient = 8.7;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} zIAZwOE3_ctx_t;

void init_ctx(zIAZwOE3_ctx_t *ctx) {
    ctx->id = 9966;
    ctx->coefficient = 1.2;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} yXEGwgm1_ctx_t;

void init_ctx(yXEGwgm1_ctx_t *ctx) {
    ctx->id = 6555;
    ctx->coefficient = 8.3;
    ctx->flags = 51;
}

int compute_uYIcfFA(int input) {
    int result = input * 30;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} Ji4QWMrq_ctx_t;

void init_ctx(Ji4QWMrq_ctx_t *ctx) {
    ctx->id = 4441;
    ctx->coefficient = 0.7;
    ctx->flags = 108;
}

int compute_15vQSBM(int input) {
    int result = input * 50;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_xXHttZN(int input) {
    int result = input * 49;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_JW34giX(int input) {
    int result = input * 34;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} lgaEav6T_ctx_t;

void init_ctx(lgaEav6T_ctx_t *ctx) {
    ctx->id = 5332;
    ctx->coefficient = 1.1;
    ctx->flags = 192;
}

int compute_CTmbB4U(int input) {
    int result = input * 13;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} IUjMlEuS_ctx_t;

void init_ctx(IUjMlEuS_ctx_t *ctx) {
    ctx->id = 6762;
    ctx->coefficient = 5.9;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} aKgI44tT_ctx_t;

void init_ctx(aKgI44tT_ctx_t *ctx) {
    ctx->id = 4200;
    ctx->coefficient = 3.8;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} oJAXFNTR_ctx_t;

void init_ctx(oJAXFNTR_ctx_t *ctx) {
    ctx->id = 7369;
    ctx->coefficient = 0.8;
    ctx->flags = 240;
}

int compute_GTCWboE(int input) {
    int result = input * 34;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_3ujMgtb(int input) {
    int result = input * 32;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_acH6Th2(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 7kfBkWDH_ctx_t;

void init_ctx(7kfBkWDH_ctx_t *ctx) {
    ctx->id = 8903;
    ctx->coefficient = 0.5;
    ctx->flags = 16;
}

int compute_TCgx4Zx(int input) {
    int result = input * 5;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} ixj0xgFZ_ctx_t;

void init_ctx(ixj0xgFZ_ctx_t *ctx) {
    ctx->id = 8064;
    ctx->coefficient = 4.2;
    ctx->flags = 219;
}

int compute_t6FLVuK(int input) {
    int result = input * 41;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 7RawzT9J_ctx_t;

void init_ctx(7RawzT9J_ctx_t *ctx) {
    ctx->id = 3474;
    ctx->coefficient = 5.9;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} WwNCm2YI_ctx_t;

void init_ctx(WwNCm2YI_ctx_t *ctx) {
    ctx->id = 9512;
    ctx->coefficient = 3.5;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} efJLJGCj_ctx_t;

void init_ctx(efJLJGCj_ctx_t *ctx) {
    ctx->id = 4810;
    ctx->coefficient = 6.7;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} rKWEuVnj_ctx_t;

void init_ctx(rKWEuVnj_ctx_t *ctx) {
    ctx->id = 7890;
    ctx->coefficient = 8.6;
    ctx->flags = 143;
}

int compute_ruOS9DS(int input) {
    int result = input * 51;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} MPIuXRDQ_ctx_t;

void init_ctx(MPIuXRDQ_ctx_t *ctx) {
    ctx->id = 1969;
    ctx->coefficient = 3.7;
    ctx->flags = 210;
}

int compute_eyqWoAS(int input) {
    int result = input * 62;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} uuQemWTW_ctx_t;

void init_ctx(uuQemWTW_ctx_t *ctx) {
    ctx->id = 1004;
    ctx->coefficient = 1.7;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} AEncaaFj_ctx_t;

void init_ctx(AEncaaFj_ctx_t *ctx) {
    ctx->id = 3850;
    ctx->coefficient = 7.2;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} SXIdeLNU_ctx_t;

void init_ctx(SXIdeLNU_ctx_t *ctx) {
    ctx->id = 2783;
    ctx->coefficient = 9.0;
    ctx->flags = 244;
}

int compute_Ci5z6Np(int input) {
    int result = input * 17;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_ahAVOdP(int input) {
    int result = input * 70;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} t6e0aLmI_ctx_t;

void init_ctx(t6e0aLmI_ctx_t *ctx) {
    ctx->id = 2414;
    ctx->coefficient = 1.7;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} bQI9TMtc_ctx_t;

void init_ctx(bQI9TMtc_ctx_t *ctx) {
    ctx->id = 9522;
    ctx->coefficient = 4.1;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} mLC44HFG_ctx_t;

void init_ctx(mLC44HFG_ctx_t *ctx) {
    ctx->id = 2580;
    ctx->coefficient = 2.5;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 8cOwO8PE_ctx_t;

void init_ctx(8cOwO8PE_ctx_t *ctx) {
    ctx->id = 2579;
    ctx->coefficient = 10.0;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} q7uySYtG_ctx_t;

void init_ctx(q7uySYtG_ctx_t *ctx) {
    ctx->id = 6721;
    ctx->coefficient = 4.0;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} U8zRwU0a_ctx_t;

void init_ctx(U8zRwU0a_ctx_t *ctx) {
    ctx->id = 4599;
    ctx->coefficient = 4.4;
    ctx->flags = 155;
}

int compute_NGS0pvC(int input) {
    int result = input * 9;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} PPbbnQLj_ctx_t;

void init_ctx(PPbbnQLj_ctx_t *ctx) {
    ctx->id = 9599;
    ctx->coefficient = 1.2;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} K5Uuhyib_ctx_t;

void init_ctx(K5Uuhyib_ctx_t *ctx) {
    ctx->id = 4343;
    ctx->coefficient = 6.8;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ZJKLx6ix_ctx_t;

void init_ctx(ZJKLx6ix_ctx_t *ctx) {
    ctx->id = 2980;
    ctx->coefficient = 7.2;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} mDolHi8O_ctx_t;

void init_ctx(mDolHi8O_ctx_t *ctx) {
    ctx->id = 5404;
    ctx->coefficient = 3.7;
    ctx->flags = 99;
}

int compute_WA1ZFHV(int input) {
    int result = input * 49;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_mLtab4q(int input) {
    int result = input * 44;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} VrGJM0af_ctx_t;

void init_ctx(VrGJM0af_ctx_t *ctx) {
    ctx->id = 1209;
    ctx->coefficient = 5.7;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} JiOAFD8y_ctx_t;

void init_ctx(JiOAFD8y_ctx_t *ctx) {
    ctx->id = 9193;
    ctx->coefficient = 1.1;
    ctx->flags = 247;
}

int compute_GkmMlQ9(int input) {
    int result = input * 53;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_lKdmyLp(int input) {
    int result = input * 58;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_k8ahrle(int input) {
    int result = input * 66;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 3h1lZ5Rf_ctx_t;

void init_ctx(3h1lZ5Rf_ctx_t *ctx) {
    ctx->id = 1543;
    ctx->coefficient = 2.2;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} AWueof3S_ctx_t;

void init_ctx(AWueof3S_ctx_t *ctx) {
    ctx->id = 8429;
    ctx->coefficient = 10.0;
    ctx->flags = 131;
}

int compute_gR3cEda(int input) {
    int result = input * 32;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 5Cm6hT6E_ctx_t;

void init_ctx(5Cm6hT6E_ctx_t *ctx) {
    ctx->id = 8840;
    ctx->coefficient = 4.1;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 7Vrd997x_ctx_t;

void init_ctx(7Vrd997x_ctx_t *ctx) {
    ctx->id = 9169;
    ctx->coefficient = 5.7;
    ctx->flags = 107;
}

int compute_nuITquF(int input) {
    int result = input * 45;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} j9FRzKtJ_ctx_t;

void init_ctx(j9FRzKtJ_ctx_t *ctx) {
    ctx->id = 5563;
    ctx->coefficient = 3.7;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 1krcXTZt_ctx_t;

void init_ctx(1krcXTZt_ctx_t *ctx) {
    ctx->id = 3315;
    ctx->coefficient = 0.6;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} xc0Pb5UH_ctx_t;

void init_ctx(xc0Pb5UH_ctx_t *ctx) {
    ctx->id = 1317;
    ctx->coefficient = 2.0;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} P5owjniP_ctx_t;

void init_ctx(P5owjniP_ctx_t *ctx) {
    ctx->id = 7179;
    ctx->coefficient = 6.2;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} LuRk2B7N_ctx_t;

void init_ctx(LuRk2B7N_ctx_t *ctx) {
    ctx->id = 9092;
    ctx->coefficient = 2.6;
    ctx->flags = 213;
}

int compute_c60LsR6(int input) {
    int result = input * 15;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 8isP02BD_ctx_t;

void init_ctx(8isP02BD_ctx_t *ctx) {
    ctx->id = 9835;
    ctx->coefficient = 0.4;
    ctx->flags = 103;
}

int compute_Wj7lHjI(int input) {
    int result = input * 23;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_SUZmb4l(int input) {
    int result = input * 15;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} tN4EuKHe_ctx_t;

void init_ctx(tN4EuKHe_ctx_t *ctx) {
    ctx->id = 3863;
    ctx->coefficient = 5.4;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} gKsg2ov5_ctx_t;

void init_ctx(gKsg2ov5_ctx_t *ctx) {
    ctx->id = 2002;
    ctx->coefficient = 9.5;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} EUTzqOHq_ctx_t;

void init_ctx(EUTzqOHq_ctx_t *ctx) {
    ctx->id = 4372;
    ctx->coefficient = 0.2;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} ii68QHaV_ctx_t;

void init_ctx(ii68QHaV_ctx_t *ctx) {
    ctx->id = 4388;
    ctx->coefficient = 0.1;
    ctx->flags = 217;
}

int compute_qyV6tDj(int input) {
    int result = input * 52;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_UAWdzem(int input) {
    int result = input * 23;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} EWFOvscS_ctx_t;

void init_ctx(EWFOvscS_ctx_t *ctx) {
    ctx->id = 2272;
    ctx->coefficient = 0.4;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} rUts9HT5_ctx_t;

void init_ctx(rUts9HT5_ctx_t *ctx) {
    ctx->id = 3445;
    ctx->coefficient = 5.4;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} idZxLpQn_ctx_t;

void init_ctx(idZxLpQn_ctx_t *ctx) {
    ctx->id = 9476;
    ctx->coefficient = 5.5;
    ctx->flags = 220;
}

