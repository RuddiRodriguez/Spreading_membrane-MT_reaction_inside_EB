/*
 * _coder_rates_renormalization_mex.c
 *
 * Code generation for function '_coder_rates_renormalization_mex'
 *
 */

/* Include files */
#include "_coder_rates_renormalization_api.h"
#include "_coder_rates_renormalization_mex.h"

/* Function Declarations */
static void c_rates_renormalization_mexFunc(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[10]);

/* Function Definitions */
static void c_rates_renormalization_mexFunc(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[10])
{
  const mxArray *inputs[10];
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        21, "rates_renormalization");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 21,
                        "rates_renormalization");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  rates_renormalization_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  rates_renormalization_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(rates_renormalization_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  rates_renormalization_initialize();

  /* Dispatch the entry-point. */
  c_rates_renormalization_mexFunc(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_rates_renormalization_mex.c) */
