/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) bluerov2_cost_ext_cost_0_fun_jac_hess_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_s6 CASADI_PREFIX(s6)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[16] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
static const casadi_int casadi_s1[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s2[3] = {0, 0, 0};
static const casadi_int casadi_s3[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s4[20] = {16, 1, 0, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
static const casadi_int casadi_s5[35] = {16, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
static const casadi_int casadi_s6[19] = {0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

/* bluerov2_cost_ext_cost_0_fun_jac_hess:(i0[12],i1[4],i2[],i3[])->(o0,o1[16],o2[16x16,16nz],o3[],o4[0x16]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a4, a5, a6, a7, a8, a9;
  a0=100.;
  a1=arg[0]? arg[0][0] : 0;
  a2=(a0*a1);
  a3=(a2*a1);
  a4=arg[0]? arg[0][1] : 0;
  a5=(a0*a4);
  a6=(a5*a4);
  a3=(a3+a6);
  a6=arg[0]? arg[0][2] : 0;
  a7=(a0*a6);
  a8=(a7*a6);
  a3=(a3+a8);
  a8=10.;
  a9=arg[0]? arg[0][3] : 0;
  a10=(a8*a9);
  a11=(a10*a9);
  a3=(a3+a11);
  a11=arg[0]? arg[0][4] : 0;
  a12=(a8*a11);
  a13=(a12*a11);
  a3=(a3+a13);
  a13=arg[0]? arg[0][5] : 0;
  a14=(a0*a13);
  a15=(a14*a13);
  a3=(a3+a15);
  a15=arg[0]? arg[0][6] : 0;
  a16=(a8*a15);
  a17=(a16*a15);
  a3=(a3+a17);
  a17=arg[0]? arg[0][7] : 0;
  a18=(a8*a17);
  a19=(a18*a17);
  a3=(a3+a19);
  a19=arg[0]? arg[0][8] : 0;
  a20=(a8*a19);
  a21=(a20*a19);
  a3=(a3+a21);
  a21=arg[0]? arg[0][9] : 0;
  a22=(a8*a21);
  a23=(a22*a21);
  a3=(a3+a23);
  a23=arg[0]? arg[0][10] : 0;
  a24=(a8*a23);
  a25=(a24*a23);
  a3=(a3+a25);
  a25=arg[0]? arg[0][11] : 0;
  a26=(a8*a25);
  a27=(a26*a25);
  a3=(a3+a27);
  a27=1.0000000000000000e-02;
  a28=arg[1]? arg[1][0] : 0;
  a29=(a27*a28);
  a30=(a29*a28);
  a31=arg[1]? arg[1][1] : 0;
  a32=(a27*a31);
  a33=(a32*a31);
  a30=(a30+a33);
  a33=arg[1]? arg[1][2] : 0;
  a34=(a27*a33);
  a35=(a34*a33);
  a30=(a30+a35);
  a35=5.0000000000000001e-03;
  a36=arg[1]? arg[1][3] : 0;
  a37=(a35*a36);
  a38=(a37*a36);
  a30=(a30+a38);
  a3=(a3+a30);
  if (res[0]!=0) res[0][0]=a3;
  a28=(a27*a28);
  a29=(a29+a28);
  if (res[1]!=0) res[1][0]=a29;
  a31=(a27*a31);
  a32=(a32+a31);
  if (res[1]!=0) res[1][1]=a32;
  a33=(a27*a33);
  a34=(a34+a33);
  if (res[1]!=0) res[1][2]=a34;
  a35=(a35*a36);
  a37=(a37+a35);
  if (res[1]!=0) res[1][3]=a37;
  a1=(a0*a1);
  a2=(a2+a1);
  if (res[1]!=0) res[1][4]=a2;
  a4=(a0*a4);
  a5=(a5+a4);
  if (res[1]!=0) res[1][5]=a5;
  a6=(a0*a6);
  a7=(a7+a6);
  if (res[1]!=0) res[1][6]=a7;
  a9=(a8*a9);
  a10=(a10+a9);
  if (res[1]!=0) res[1][7]=a10;
  a11=(a8*a11);
  a12=(a12+a11);
  if (res[1]!=0) res[1][8]=a12;
  a0=(a0*a13);
  a14=(a14+a0);
  if (res[1]!=0) res[1][9]=a14;
  a15=(a8*a15);
  a16=(a16+a15);
  if (res[1]!=0) res[1][10]=a16;
  a17=(a8*a17);
  a18=(a18+a17);
  if (res[1]!=0) res[1][11]=a18;
  a19=(a8*a19);
  a20=(a20+a19);
  if (res[1]!=0) res[1][12]=a20;
  a21=(a8*a21);
  a22=(a22+a21);
  if (res[1]!=0) res[1][13]=a22;
  a23=(a8*a23);
  a24=(a24+a23);
  if (res[1]!=0) res[1][14]=a24;
  a8=(a8*a25);
  a26=(a26+a8);
  if (res[1]!=0) res[1][15]=a26;
  a26=2.0000000000000000e-02;
  if (res[2]!=0) res[2][0]=a26;
  if (res[2]!=0) res[2][1]=a26;
  if (res[2]!=0) res[2][2]=a26;
  if (res[2]!=0) res[2][3]=a27;
  a27=200.;
  if (res[2]!=0) res[2][4]=a27;
  if (res[2]!=0) res[2][5]=a27;
  if (res[2]!=0) res[2][6]=a27;
  a26=20.;
  if (res[2]!=0) res[2][7]=a26;
  if (res[2]!=0) res[2][8]=a26;
  if (res[2]!=0) res[2][9]=a27;
  if (res[2]!=0) res[2][10]=a26;
  if (res[2]!=0) res[2][11]=a26;
  if (res[2]!=0) res[2][12]=a26;
  if (res[2]!=0) res[2][13]=a26;
  if (res[2]!=0) res[2][14]=a26;
  if (res[2]!=0) res[2][15]=a26;
  return 0;
}

CASADI_SYMBOL_EXPORT int bluerov2_cost_ext_cost_0_fun_jac_hess(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int bluerov2_cost_ext_cost_0_fun_jac_hess_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int bluerov2_cost_ext_cost_0_fun_jac_hess_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void bluerov2_cost_ext_cost_0_fun_jac_hess_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int bluerov2_cost_ext_cost_0_fun_jac_hess_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void bluerov2_cost_ext_cost_0_fun_jac_hess_release(int mem) {
}

CASADI_SYMBOL_EXPORT void bluerov2_cost_ext_cost_0_fun_jac_hess_incref(void) {
}

CASADI_SYMBOL_EXPORT void bluerov2_cost_ext_cost_0_fun_jac_hess_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int bluerov2_cost_ext_cost_0_fun_jac_hess_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int bluerov2_cost_ext_cost_0_fun_jac_hess_n_out(void) { return 5;}

CASADI_SYMBOL_EXPORT casadi_real bluerov2_cost_ext_cost_0_fun_jac_hess_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* bluerov2_cost_ext_cost_0_fun_jac_hess_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* bluerov2_cost_ext_cost_0_fun_jac_hess_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    case 3: return "o3";
    case 4: return "o4";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* bluerov2_cost_ext_cost_0_fun_jac_hess_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* bluerov2_cost_ext_cost_0_fun_jac_hess_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    case 1: return casadi_s4;
    case 2: return casadi_s5;
    case 3: return casadi_s2;
    case 4: return casadi_s6;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int bluerov2_cost_ext_cost_0_fun_jac_hess_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 5;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
