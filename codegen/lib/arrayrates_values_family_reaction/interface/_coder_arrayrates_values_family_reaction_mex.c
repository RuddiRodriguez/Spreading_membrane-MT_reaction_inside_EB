/*
 * _coder_arrayrates_values_family_reaction_mex.c
 *
 * Code generation for function '_coder_arrayrates_values_family_reaction_mex'
 *
 */

/* Include files */
#include "_coder_arrayrates_values_family_reaction_api.h"
#include "_coder_arrayrates_values_family_reaction_mex.h"

/* Function Declarations */
static void c_arrayrates_values_family_reac(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[14]);

/* Function Definitions */
static void c_arrayrates_values_family_reac(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[14])
{
  const mxArray *inputs[14];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 14) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 14, 4,
                        33, "arrayrates_values_family_reaction");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 33,
                        "arrayrates_values_family_reaction");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  arrayrates_values_family_reaction_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  arrayrates_values_family_reaction_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(arrayrates_values_family_reaction_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  arrayrates_values_family_reaction_initialize();

  /* Dispatch the entry-point. */
  c_arrayrates_values_family_reac(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_arrayrates_values_family_reaction_mex.c) */
