/*
 * _coder_myFind_api.h
 *
 * Code generation for function '_coder_myFind_api'
 *
 */

#ifndef _CODER_MYFIND_API_H
#define _CODER_MYFIND_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_myFind_api.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void myFind(emxArray_real_T *x, emxArray_real_T *idx);
extern void myFind_api(const mxArray * const prhs[1], const mxArray *plhs[1]);
extern void myFind_atexit(void);
extern void myFind_initialize(void);
extern void myFind_terminate(void);
extern void myFind_xil_terminate(void);

#endif

/* End of code generation (_coder_myFind_api.h) */
