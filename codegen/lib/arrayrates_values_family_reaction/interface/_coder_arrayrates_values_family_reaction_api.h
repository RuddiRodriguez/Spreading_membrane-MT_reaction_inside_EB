/*
 * _coder_arrayrates_values_family_reaction_api.h
 *
 * Code generation for function '_coder_arrayrates_values_family_reaction_api'
 *
 */

#ifndef _CODER_ARRAYRATES_VALUES_FAMILY_REACTION_API_H
#define _CODER_ARRAYRATES_VALUES_FAMILY_REACTION_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_arrayrates_values_family_reaction_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void arrayrates_values_family_reaction(real_T count, real_T
  MTarryocupationtemp[25], real_T numberpb, real_T iMTLsize, real_T
  MTarryocupation[50], real_T ocupationnumber[50], real_T rates[6], real_T koof,
  real_T arrayrates[300], real_T positiontran, real_T tranflag, real_T densitylb,
  real_T densitylu, real_T v);
extern void arrayrates_values_family_reaction_api(const mxArray *prhs[14], const
  mxArray *plhs[1]);
extern void arrayrates_values_family_reaction_atexit(void);
extern void arrayrates_values_family_reaction_initialize(void);
extern void arrayrates_values_family_reaction_terminate(void);
extern void arrayrates_values_family_reaction_xil_terminate(void);

#endif

/* End of code generation (_coder_arrayrates_values_family_reaction_api.h) */
