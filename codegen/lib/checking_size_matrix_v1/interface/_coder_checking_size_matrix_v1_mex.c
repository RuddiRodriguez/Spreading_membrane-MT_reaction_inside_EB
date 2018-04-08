/*
 * _coder_checking_size_matrix_v1_mex.c
 *
 * Code generation for function '_coder_checking_size_matrix_v1_mex'
 *
 */

/* Include files */
#include "_coder_checking_size_matrix_v1_api.h"
#include "_coder_checking_size_matrix_v1_mex.h"

/* Function Declarations */
static void c_checking_size_matrix_v1_mexFu(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[3]);

/* Function Definitions */
static void c_checking_size_matrix_v1_mexFu(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[3])
{
  const mxArray *inputs[3];
  const mxArray *outputs[4];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        23, "checking_size_matrix_v1");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 23,
                        "checking_size_matrix_v1");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  checking_size_matrix_v1_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  checking_size_matrix_v1_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(checking_size_matrix_v1_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  checking_size_matrix_v1_initialize();

  /* Dispatch the entry-point. */
  c_checking_size_matrix_v1_mexFu(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_checking_size_matrix_v1_mex.c) */
