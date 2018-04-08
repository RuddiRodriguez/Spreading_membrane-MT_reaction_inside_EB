/*
 * _coder_arrayrates_values_family_reaction_api.c
 *
 * Code generation for function '_coder_arrayrates_values_family_reaction_api'
 *
 */

/* Include files */
#include "tmwtypes.h"
#include "_coder_arrayrates_values_family_reaction_api.h"
#include "_coder_arrayrates_values_family_reaction_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131451U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "arrayrates_values_family_reaction", /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *MTarryocupationtemp, const char_T *identifier))[25];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[25];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *MTarryocupation, const char_T *identifier))[50];
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *count, const
  char_T *identifier);
static void emlrt_marshallOut(const real_T u[300], const mxArray *y);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[50];
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rates,
  const char_T *identifier))[6];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[6];
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *arrayrates, const char_T *identifier))[300];
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[300];
static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[25];
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[50];
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[6];
static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[300];

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *MTarryocupationtemp, const char_T *identifier))[25]
{
  real_T (*y)[25];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(MTarryocupationtemp), &thisId);
  emlrtDestroyArray(&MTarryocupationtemp);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[25]
{
  real_T (*y)[25];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *MTarryocupation, const char_T *identifier))[50]
{
  real_T (*y)[50];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(MTarryocupation), &thisId);
  emlrtDestroyArray(&MTarryocupation);
  return y;
}
  static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *count,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(count), &thisId);
  emlrtDestroyArray(&count);
  return y;
}

static void emlrt_marshallOut(const real_T u[300], const mxArray *y)
{
  static const int32_T iv0[2] = { 6, 50 };

  emlrtMxSetData((mxArray *)y, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)y, iv0, 2);
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[50]
{
  real_T (*y)[50];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rates,
  const char_T *identifier))[6]
{
  real_T (*y)[6];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(rates), &thisId);
  emlrtDestroyArray(&rates);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[6]
{
  real_T (*y)[6];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *arrayrates, const char_T *identifier))[300]
{
  real_T (*y)[300];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(arrayrates), &thisId);
  emlrtDestroyArray(&arrayrates);
  return y;
}

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[300]
{
  real_T (*y)[300];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[25]
{
  real_T (*ret)[25];
  static const int32_T dims[1] = { 25 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[25])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[50]
{
  real_T (*ret)[50];
  static const int32_T dims[2] = { 1, 50 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[50])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[6]
{
  real_T (*ret)[6];
  static const int32_T dims[2] = { 1, 6 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[6])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[300]
{
  real_T (*ret)[300];
  static const int32_T dims[2] = { 6, 50 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[300])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void arrayrates_values_family_reaction_api(const mxArray *prhs[14], const
  mxArray *plhs[1])
{
  real_T count;
  real_T (*MTarryocupationtemp)[25];
  real_T numberpb;
  real_T iMTLsize;
  real_T (*MTarryocupation)[50];
  real_T (*ocupationnumber)[50];
  real_T (*rates)[6];
  real_T koof;
  real_T (*arrayrates)[300];
  real_T positiontran;
  real_T tranflag;
  real_T densitylb;
  real_T densitylu;
  real_T v;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  prhs[8] = emlrtProtectR2012b(prhs[8], 8, true, -1);

  /* Marshall function inputs */
  count = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "count");
  MTarryocupationtemp = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]),
    "MTarryocupationtemp");
  numberpb = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "numberpb");
  iMTLsize = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "iMTLsize");
  MTarryocupation = e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]),
    "MTarryocupation");
  ocupationnumber = e_emlrt_marshallIn(&st, emlrtAlias(prhs[5]),
    "ocupationnumber");
  rates = g_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "rates");
  koof = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "koof");
  arrayrates = i_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "arrayrates");
  positiontran = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "positiontran");
  tranflag = emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "tranflag");
  densitylb = emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "densitylb");
  densitylu = emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "densitylu");
  v = emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "v");

  /* Invoke the target function */
  arrayrates_values_family_reaction(count, *MTarryocupationtemp, numberpb,
    iMTLsize, *MTarryocupation, *ocupationnumber, *rates, koof, *arrayrates,
    positiontran, tranflag, densitylb, densitylu, v);

  /* Marshall function outputs */
  emlrt_marshallOut(*arrayrates, prhs[8]);
  plhs[0] = prhs[8];
}

void arrayrates_values_family_reaction_atexit(void)
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
  arrayrates_values_family_reaction_xil_terminate();
}

void arrayrates_values_family_reaction_initialize(void)
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

void arrayrates_values_family_reaction_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (_coder_arrayrates_values_family_reaction_api.c) */
