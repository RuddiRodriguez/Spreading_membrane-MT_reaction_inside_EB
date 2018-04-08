/*
 * _coder_checking_size_matrix_v1_info.c
 *
 * Code generation for function 'checking_size_matrix_v1'
 *
 */

/* Include files */
#include "_coder_checking_size_matrix_v1_info.h"

/* Function Definitions */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[5] = {
    "789ce554cb6ed340149da014e8a2281242629905bba24c034815ace2a654544dda8aba25a24266625f9251e711cd4c2bb7ab2ef80cfe01be866fe033183fa675"
    "2c8d1255a21bae641d9f39f6dc7b8fef183576870d84d01354c4e851816b256f95f800cd475d6f78d0c50a6acebde7f41f25c65218484d411815b07fcec7a02c",
    "1184c3cd3689e4541061c2cb1920055ab20b4872e51b6510520e0359211fa8257ca722dd904ccaeefb5388cf8ece3952537d5b2eab1254f1e78fa7ffe692fe7c"
    "f7f8d3aae9a7efbff4dfe1630d4a63db3035126f2b391bcb146f1343222208bbd454e35826a0f11695b3a9e5316111b72b2c0a833e3e9a292009159388031f2b",
    "22a03d0c23bb161b2a454485a609e03873207b48d32b8838318aa6d145b7c3ab7d5f7bfa7ab864dfcd1a77b15a627b6ef565afc0e725be28f0bad773f5a49e7c"
    "cb7e87679e7a5a353db35775a81d4e651def3010133345b7be7cbd631df5f0d5e1c2e5fb75c77c6eff8305f99c7eba3b18e52378a8e44411decece8ac6c3201c",
    "045bf8e3ab8deee6b88b8d942c1b49e02cbfd673bbf0baf30b177ed9515ae4d7b273e4fbbfaca2c7ee76e7e7d3dfc13de6cbe37fc9775fe72e1c9c7c7ecb9391"
    "0a3ebdd94cbbaf4ff8c6fe5ea58ec3057916d5813cfc5fefff175b13967f", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 1904U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString(
    "checking_size_matrix_v1"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (4.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.3.0.713579 (R2017b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_checking_size_matrix_v1_info.c) */
