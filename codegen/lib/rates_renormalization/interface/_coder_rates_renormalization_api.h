/*
 * _coder_rates_renormalization_api.h
 *
 * Code generation for function '_coder_rates_renormalization_api'
 *
 */

#ifndef _CODER_RATES_RENORMALIZATION_API_H
#define _CODER_RATES_RENORMALIZATION_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_rates_renormalization_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void rates_renormalization(real_T sigma, real_T kappa, real_T Vm, real_T
  r0_ini, real_T R_ini, real_T koof, real_T ratesi[11], real_T betat, real_T np,
  real_T sigmai, real_T *koofre, real_T rates[11]);
extern void rates_renormalization_api(const mxArray * const prhs[10], const
  mxArray *plhs[2]);
extern void rates_renormalization_atexit(void);
extern void rates_renormalization_initialize(void);
extern void rates_renormalization_terminate(void);
extern void rates_renormalization_xil_terminate(void);

#endif

/* End of code generation (_coder_rates_renormalization_api.h) */
