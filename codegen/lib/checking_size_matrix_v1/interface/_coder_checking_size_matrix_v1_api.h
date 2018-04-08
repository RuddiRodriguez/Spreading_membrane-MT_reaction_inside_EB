/*
 * _coder_checking_size_matrix_v1_api.h
 *
 * Code generation for function '_coder_checking_size_matrix_v1_api'
 *
 */

#ifndef _CODER_CHECKING_SIZE_MATRIX_V1_API_H
#define _CODER_CHECKING_SIZE_MATRIX_V1_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_checking_size_matrix_v1_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void checking_size_matrix_v1(real_T ocupationnumber[50], real_T
  MTarryocupation[50], real_T arrayrates[300], real_T ocupationnumbertemp[50],
  real_T MTarryocupationtemp[50], real_T arrayratestemp[300], real_T *iMTLsize);
extern void checking_size_matrix_v1_api(const mxArray * const prhs[3], const
  mxArray *plhs[4]);
extern void checking_size_matrix_v1_atexit(void);
extern void checking_size_matrix_v1_initialize(void);
extern void checking_size_matrix_v1_terminate(void);
extern void checking_size_matrix_v1_xil_terminate(void);

#endif

/* End of code generation (_coder_checking_size_matrix_v1_api.h) */
