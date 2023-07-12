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
  #define CASADI_PREFIX(ID) bluerov2_expl_vde_adj_ ## ID
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
static const casadi_int casadi_s2[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s3[20] = {16, 1, 0, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

/* bluerov2_expl_vde_adj:(i0[12],i1[12],i2[4],i3[6])->(o0[16]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a6, a7, a8, a9;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0]? arg[0][3] : 0;
  a1=cos(a0);
  a2=-6.6000000000000003e-01;
  a3=arg[0]? arg[0][4] : 0;
  a4=cos(a3);
  a4=(a2*a4);
  a5=9.0163602939496948e-02;
  a6=arg[1]? arg[1][7] : 0;
  a5=(a5*a6);
  a4=(a4*a5);
  a1=(a1*a4);
  a4=cos(a0);
  a6=2.2092120000000004e+00;
  a7=cos(a3);
  a7=(a6*a7);
  a8=3.3841405636624526e+00;
  a9=arg[1]? arg[1][9] : 0;
  a8=(a8*a9);
  a7=(a7*a8);
  a4=(a4*a7);
  a7=sin(a0);
  a9=cos(a3);
  a9=(a2*a9);
  a10=5.9780009564801527e-02;
  a11=arg[1]? arg[1][8] : 0;
  a10=(a10*a11);
  a9=(a9*a10);
  a7=(a7*a9);
  a4=(a4+a7);
  a1=(a1-a4);
  a4=sin(a0);
  a7=arg[0]? arg[0][11] : 0;
  a9=arg[1]? arg[1][5] : 0;
  a11=(a7*a9);
  a12=cos(a3);
  a13=(a11/a12);
  a4=(a4*a13);
  a1=(a1-a4);
  a4=cos(a0);
  a13=arg[0]? arg[0][10] : 0;
  a14=(a13*a9);
  a15=cos(a3);
  a16=(a14/a15);
  a4=(a4*a16);
  a1=(a1+a4);
  a4=cos(a0);
  a16=arg[1]? arg[1][4] : 0;
  a17=(a7*a16);
  a4=(a4*a17);
  a1=(a1+a4);
  a4=sin(a0);
  a17=(a13*a16);
  a4=(a4*a17);
  a1=(a1-a4);
  a4=sin(a0);
  a17=sin(a3);
  a18=arg[1]? arg[1][3] : 0;
  a19=(a7*a18);
  a20=cos(a3);
  a21=(a19/a20);
  a22=(a17*a21);
  a4=(a4*a22);
  a1=(a1-a4);
  a4=sin(a0);
  a22=cos(a3);
  a23=arg[0]? arg[0][8] : 0;
  a24=arg[1]? arg[1][2] : 0;
  a25=(a23*a24);
  a26=(a22*a25);
  a4=(a4*a26);
  a1=(a1-a4);
  a4=cos(a0);
  a26=cos(a3);
  a27=arg[0]? arg[0][7] : 0;
  a28=(a27*a24);
  a29=(a26*a28);
  a4=(a4*a29);
  a1=(a1+a4);
  a4=cos(a0);
  a29=arg[0]? arg[0][5] : 0;
  a30=cos(a29);
  a31=arg[1]? arg[1][1] : 0;
  a32=(a23*a31);
  a33=(a30*a32);
  a4=(a4*a33);
  a1=(a1-a4);
  a4=sin(a0);
  a33=sin(a3);
  a34=sin(a29);
  a35=(a33*a34);
  a36=(a35*a32);
  a4=(a4*a36);
  a1=(a1-a4);
  a4=cos(a0);
  a36=sin(a3);
  a37=sin(a29);
  a38=(a27*a31);
  a39=(a37*a38);
  a40=(a36*a39);
  a4=(a4*a40);
  a1=(a1+a4);
  a4=sin(a0);
  a40=cos(a29);
  a41=(a40*a38);
  a4=(a4*a41);
  a1=(a1-a4);
  a4=sin(a0);
  a41=cos(a29);
  a42=sin(a3);
  a43=arg[1]? arg[1][0] : 0;
  a44=(a23*a43);
  a45=(a42*a44);
  a46=(a41*a45);
  a4=(a4*a46);
  a1=(a1-a4);
  a4=cos(a0);
  a46=sin(a29);
  a47=(a46*a44);
  a4=(a4*a47);
  a1=(a1+a4);
  a4=sin(a0);
  a47=sin(a29);
  a48=(a27*a43);
  a49=(a47*a48);
  a4=(a4*a49);
  a1=(a1+a4);
  a4=cos(a0);
  a49=cos(a29);
  a50=sin(a3);
  a51=(a49*a50);
  a52=(a51*a48);
  a4=(a4*a52);
  a1=(a1+a4);
  if (res[0]!=0) res[0][3]=a1;
  a1=sin(a3);
  a4=sin(a0);
  a4=(a4*a8);
  a4=(a6*a4);
  a1=(a1*a4);
  a4=cos(a3);
  a52=5.3356318092685262e-01;
  a53=arg[1]? arg[1][10] : 0;
  a52=(a52*a53);
  a6=(a6*a52);
  a4=(a4*a6);
  a1=(a1-a4);
  a4=sin(a3);
  a6=cos(a0);
  a6=(a6*a10);
  a6=(a2*a6);
  a4=(a4*a6);
  a1=(a1-a4);
  a4=sin(a3);
  a6=sin(a0);
  a6=(a6*a5);
  a6=(a2*a6);
  a4=(a4*a6);
  a1=(a1-a4);
  a4=cos(a3);
  a6=7.7212942480368779e-02;
  a53=arg[1]? arg[1][6] : 0;
  a6=(a6*a53);
  a2=(a2*a6);
  a4=(a4*a2);
  a1=(a1-a4);
  a4=sin(a3);
  a2=cos(a0);
  a2=(a2/a12);
  a12=(a2/a12);
  a12=(a12*a11);
  a4=(a4*a12);
  a1=(a1+a4);
  a4=sin(a3);
  a12=sin(a0);
  a12=(a12/a15);
  a15=(a12/a15);
  a15=(a15*a14);
  a4=(a4*a15);
  a1=(a1+a4);
  a4=sin(a3);
  a15=cos(a0);
  a17=(a15*a17);
  a17=(a17/a20);
  a20=(a17/a20);
  a20=(a20*a19);
  a4=(a4*a20);
  a1=(a1+a4);
  a4=cos(a3);
  a15=(a15*a21);
  a4=(a4*a15);
  a1=(a1+a4);
  a4=sin(a3);
  a15=sin(a29);
  a21=sin(a3);
  a20=(a15*a21);
  a19=cos(a3);
  a20=(a20/a19);
  a14=(a20/a19);
  a11=(a13*a18);
  a14=(a14*a11);
  a4=(a4*a14);
  a1=(a1+a4);
  a4=cos(a3);
  a11=(a11/a19);
  a15=(a15*a11);
  a4=(a4*a15);
  a1=(a1+a4);
  a4=sin(a3);
  a15=cos(a0);
  a25=(a15*a25);
  a4=(a4*a25);
  a1=(a1-a4);
  a4=cos(a3);
  a25=arg[0]? arg[0][6] : 0;
  a19=(a25*a24);
  a4=(a4*a19);
  a1=(a1-a4);
  a4=sin(a3);
  a19=sin(a0);
  a28=(a19*a28);
  a4=(a4*a28);
  a1=(a1-a4);
  a4=cos(a3);
  a28=cos(a0);
  a14=(a28*a32);
  a34=(a34*a14);
  a4=(a4*a34);
  a1=(a1+a4);
  a4=cos(a3);
  a34=sin(a0);
  a39=(a34*a39);
  a4=(a4*a39);
  a1=(a1+a4);
  a4=sin(a3);
  a39=sin(a29);
  a53=(a25*a31);
  a54=(a39*a53);
  a4=(a4*a54);
  a1=(a1-a4);
  a4=cos(a3);
  a54=cos(a0);
  a41=(a41*a54);
  a55=(a41*a44);
  a4=(a4*a55);
  a1=(a1+a4);
  a4=cos(a3);
  a55=sin(a0);
  a56=(a55*a48);
  a49=(a49*a56);
  a4=(a4*a49);
  a1=(a1+a4);
  a4=sin(a3);
  a49=cos(a29);
  a57=(a25*a43);
  a58=(a49*a57);
  a4=(a4*a58);
  a1=(a1-a4);
  if (res[0]!=0) res[0][4]=a1;
  a1=cos(a29);
  a21=(a21*a11);
  a1=(a1*a21);
  a21=sin(a29);
  a11=sin(a0);
  a32=(a11*a32);
  a21=(a21*a32);
  a1=(a1+a21);
  a21=cos(a29);
  a33=(a33*a14);
  a21=(a21*a33);
  a1=(a1+a21);
  a21=cos(a29);
  a34=(a34*a36);
  a36=(a34*a38);
  a21=(a21*a36);
  a1=(a1+a21);
  a21=sin(a29);
  a36=cos(a0);
  a38=(a36*a38);
  a21=(a21*a38);
  a1=(a1-a21);
  a21=cos(a29);
  a38=cos(a3);
  a53=(a38*a53);
  a21=(a21*a53);
  a1=(a1+a21);
  a21=sin(a29);
  a54=(a54*a45);
  a21=(a21*a54);
  a1=(a1-a21);
  a21=cos(a29);
  a54=sin(a0);
  a44=(a54*a44);
  a21=(a21*a44);
  a1=(a1+a21);
  a21=cos(a29);
  a44=cos(a0);
  a48=(a44*a48);
  a21=(a21*a48);
  a1=(a1-a21);
  a21=sin(a29);
  a50=(a50*a56);
  a21=(a21*a50);
  a1=(a1-a21);
  a29=sin(a29);
  a21=cos(a3);
  a57=(a21*a57);
  a29=(a29*a57);
  a1=(a1-a29);
  if (res[0]!=0) res[0][5]=a1;
  a1=1.1260000000000000e+01;
  a29=(a1*a13);
  a29=(a29*a10);
  a57=(a1*a7);
  a57=(a57*a5);
  a29=(a29-a57);
  a3=sin(a3);
  a3=(a3*a24);
  a29=(a29-a3);
  a39=(a39*a38);
  a39=(a39*a31);
  a29=(a29+a39);
  a49=(a49*a21);
  a49=(a49*a43);
  a29=(a29+a49);
  if (res[0]!=0) res[0][6]=a29;
  a29=(a1*a7);
  a29=(a29*a6);
  a49=arg[0]? arg[0][9] : 0;
  a21=(a1*a49);
  a21=(a21*a10);
  a29=(a29-a21);
  a26=(a26*a19);
  a26=(a26*a24);
  a29=(a29+a26);
  a40=(a40*a36);
  a34=(a34*a37);
  a40=(a40+a34);
  a40=(a40*a31);
  a29=(a29+a40);
  a51=(a51*a55);
  a47=(a47*a44);
  a51=(a51-a47);
  a51=(a51*a43);
  a29=(a29+a51);
  if (res[0]!=0) res[0][7]=a29;
  a29=(a1*a49);
  a29=(a29*a5);
  a51=(a1*a13);
  a51=(a51*a6);
  a29=(a29-a51);
  a22=(a22*a15);
  a22=(a22*a24);
  a29=(a29+a22);
  a35=(a35*a28);
  a30=(a30*a11);
  a35=(a35-a30);
  a35=(a35*a31);
  a29=(a29+a35);
  a46=(a46*a54);
  a41=(a41*a42);
  a46=(a46+a41);
  a46=(a46*a43);
  a29=(a29+a46);
  if (res[0]!=0) res[0][8]=a29;
  a29=2.7999999999999997e-01;
  a46=(a7*a52);
  a46=(a29*a46);
  a43=3.3000000000000002e-01;
  a41=1.0197838058331634e+00;
  a42=arg[1]? arg[1][11] : 0;
  a41=(a41*a42);
  a42=(a13*a41);
  a42=(a43*a42);
  a46=(a46-a42);
  a42=(a27*a10);
  a42=(a1*a42);
  a46=(a46-a42);
  a42=(a23*a5);
  a42=(a1*a42);
  a46=(a46+a42);
  a46=(a46+a18);
  if (res[0]!=0) res[0][9]=a46;
  a46=5.0000000000000044e-02;
  a7=(a7*a8);
  a7=(a46*a7);
  a43=(a43*a49);
  a43=(a43*a41);
  a7=(a7-a43);
  a43=(a25*a10);
  a43=(a1*a43);
  a7=(a7+a43);
  a23=(a23*a6);
  a23=(a1*a23);
  a7=(a7-a23);
  a12=(a12*a9);
  a7=(a7+a12);
  a12=cos(a0);
  a12=(a12*a16);
  a7=(a7+a12);
  a20=(a20*a18);
  a7=(a7+a20);
  if (res[0]!=0) res[0][10]=a7;
  a29=(a29*a49);
  a29=(a29*a52);
  a46=(a46*a13);
  a46=(a46*a8);
  a29=(a29+a46);
  a25=(a25*a5);
  a25=(a1*a25);
  a29=(a29-a25);
  a27=(a27*a6);
  a1=(a1*a27);
  a29=(a29+a1);
  a2=(a2*a9);
  a29=(a29+a2);
  a0=sin(a0);
  a0=(a0*a16);
  a29=(a29+a0);
  a17=(a17*a18);
  a29=(a29+a17);
  if (res[0]!=0) res[0][11]=a29;
  a29=3.7669095518205658e+01;
  a17=1.7499999999999999e-01;
  a17=(a17*a41);
  a18=-7.0699999999999996e-01;
  a0=(a18*a5);
  a17=(a17+a0);
  a0=(a18*a6);
  a17=(a17+a0);
  a17=(a29*a17);
  a0=-1.7499999999999999e-01;
  a0=(a0*a41);
  a16=7.0699999999999996e-01;
  a2=(a16*a5);
  a0=(a0+a2);
  a2=(a18*a6);
  a0=(a0+a2);
  a0=(a29*a0);
  a2=(a17+a0);
  a9=-1.6700000000000001e-01;
  a9=(a9*a41);
  a18=(a18*a5);
  a9=(a9+a18);
  a18=(a16*a6);
  a9=(a9+a18);
  a9=(a29*a9);
  a2=(a2-a9);
  a18=1.6700000000000001e-01;
  a18=(a18*a41);
  a5=(a16*a5);
  a18=(a18+a5);
  a16=(a16*a6);
  a18=(a18+a16);
  a18=(a29*a18);
  a2=(a2-a18);
  if (res[0]!=0) res[0][12]=a2;
  a2=(a0-a17);
  a2=(a2-a9);
  a2=(a2+a18);
  if (res[0]!=0) res[0][13]=a2;
  a2=(a29*a10);
  a29=(a29*a10);
  a2=(a2+a29);
  a2=(-a2);
  if (res[0]!=0) res[0][14]=a2;
  a17=(a17-a0);
  a17=(a17-a9);
  a17=(a17+a18);
  if (res[0]!=0) res[0][15]=a17;
  return 0;
}

CASADI_SYMBOL_EXPORT int bluerov2_expl_vde_adj(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int bluerov2_expl_vde_adj_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int bluerov2_expl_vde_adj_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void bluerov2_expl_vde_adj_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int bluerov2_expl_vde_adj_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void bluerov2_expl_vde_adj_release(int mem) {
}

CASADI_SYMBOL_EXPORT void bluerov2_expl_vde_adj_incref(void) {
}

CASADI_SYMBOL_EXPORT void bluerov2_expl_vde_adj_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int bluerov2_expl_vde_adj_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int bluerov2_expl_vde_adj_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real bluerov2_expl_vde_adj_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* bluerov2_expl_vde_adj_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* bluerov2_expl_vde_adj_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* bluerov2_expl_vde_adj_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* bluerov2_expl_vde_adj_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int bluerov2_expl_vde_adj_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
