/*
 * _coder_checking_size_matrix_v1_api.c
 *
 * Code generation for function '_coder_checking_size_matrix_v1_api'
 *
 */

/* Include files */
#include "tmwtypes.h"
#include "_coder_checking_size_matrix_v1_api.h"
#include "_coder_checking_size_matrix_v1_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131451U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "checking_size_matrix_v1",           /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[50];
static const mxArray *b_emlrt_marshallOut(const real_T u[300]);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *arrayrates, const char_T *identifier))[300];
static const mxArray *c_emlrt_marshallOut(const real_T u);
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[300];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[50];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *ocupationnumber, const char_T *identifier))[50];
static const mxArray *emlrt_marshallOut(const real_T u[50]);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[300];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[50]
{
  real_T (*y)[50];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u[300])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv2[2] = { 0, 0 };

  static const int32_T iv3[2] = { 6, 50 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m1, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m1, iv3, 2);
  emlrtAssign(&y, m1);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *arrayrates, const char_T *identifier))[300]
{
  real_T (*y)[300];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(arrayrates), &thisId);
  emlrtDestroyArray(&arrayrates);
  return y;
}
  static const mxArray *c_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m2);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[300]
{
  real_T (*y)[300];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[50]
{
  real_T (*ret)[50];
  static const int32_T dims[2] = { 1, 50 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[50])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *ocupationnumber, const char_T *identifier))[50]
{
  real_T (*y)[50];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(ocupationnumber), &thisId);
  emlrtDestroyArray(&ocupationnumber);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[50])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 1, 50 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[300]
{
  real_T (*ret)[300];
  static const int32_T dims[2] = { 6, 50 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[300])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void checking_size_matrix_v1_api(const mxArray * const prhs[3], const mxArray *
  plhs[4])
{
  real_T (*ocupationnumbertemp)[50];
  real_T (*MTarryocupationtemp)[50];
  real_T (*arrayratestemp)[300];
  real_T (*ocupationnumber)[50];
  real_T (*MTarryocupation)[50];
  real_T (*arrayrates)[300];
  real_T iMTLsize;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  ocupationnumbertemp = (real_T (*)[50])mxMalloc(sizeof(real_T [50]));
  MTarryocupationtemp = (real_T (*)[50])mxMalloc(sizeof(real_T [50]));
  arrayratestemp = (real_T (*)[300])mxMalloc(sizeof(real_T [300]));

  /* Marshall function inputs */
  ocupationnumber = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "ocupationnumber");
  MTarryocupation = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "MTarryocupation");
  arrayrates = c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "arrayrates");

  /* Invoke the target function */
  checking_size_matrix_v1(*ocupationnumber, *MTarryocupation, *arrayrates,
    *ocupationnumbertemp, *MTarryocupationtemp, *arrayratestemp, &iMTLsize);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*ocupationnumbertemp);
  plhs[1] = emlrt_marshallOut(*MTarryocupationtemp);
  plhs[2] = b_emlrt_marshallOut(*arrayratestemp);
  plhs[3] = c_emlrt_marshallOut(iMTLsize);
}

void checking_size_matrix_v1_atexit(void)
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
  checking_size_matrix_v1_xil_terminate();
}

void checking_size_matrix_v1_initialize(void)
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

void checking_size_matrix_v1_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (_coder_checking_size_matrix_v1_api.c) */
