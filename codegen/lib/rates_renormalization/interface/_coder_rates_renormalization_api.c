/*
 * _coder_rates_renormalization_api.c
 *
 * Code generation for function '_coder_rates_renormalization_api'
 *
 */

/* Include files */
#include "tmwtypes.h"
#include "_coder_rates_renormalization_api.h"
#include "_coder_rates_renormalization_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131451U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "rates_renormalization",             /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_emlrt_marshallOut(const real_T u[11]);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ratesi,
  const char_T *identifier))[11];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[11];
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *sigma, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[11];

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const real_T u[11])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv0[1] = { 0 };

  static const int32_T iv1[1] = { 11 };

  y = NULL;
  m1 = emlrtCreateNumericArray(1, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m1, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m1, iv1, 1);
  emlrtAssign(&y, m1);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ratesi,
  const char_T *identifier))[11]
{
  real_T (*y)[11];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(ratesi), &thisId);
  emlrtDestroyArray(&ratesi);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[11]
{
  real_T (*y)[11];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *sigma, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(sigma), &thisId);
  emlrtDestroyArray(&sigma);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[11]
{
  real_T (*ret)[11];
  static const int32_T dims[1] = { 11 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[11])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void rates_renormalization_api(const mxArray * const prhs[10], const mxArray
  *plhs[2])
{
  real_T (*rates)[11];
  real_T sigma;
  real_T kappa;
  real_T Vm;
  real_T r0_ini;
  real_T R_ini;
  real_T koof;
  real_T (*ratesi)[11];
  real_T betat;
  real_T np;
  real_T sigmai;
  real_T koofre;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  rates = (real_T (*)[11])mxMalloc(sizeof(real_T [11]));

  /* Marshall function inputs */
  sigma = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "sigma");
  kappa = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "kappa");
  Vm = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "Vm");
  r0_ini = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "r0_ini");
  R_ini = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "R_ini");
  koof = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "koof");
  ratesi = c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "ratesi");
  betat = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "betat");
  np = emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "np");
  sigmai = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "sigmai");

  /* Invoke the target function */
  rates_renormalization(sigma, kappa, Vm, r0_ini, R_ini, koof, *ratesi, betat,
                        np, sigmai, &koofre, *rates);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(koofre);
  plhs[1] = b_emlrt_marshallOut(*rates);
}

void rates_renormalization_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  rates_renormalization_xil_terminate();
}

void rates_renormalization_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void rates_renormalization_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (_coder_rates_renormalization_api.c) */
