/*
 * _coder_myFind_info.c
 *
 * Code generation for function 'myFind'
 *
 */

/* Include files */
#include "_coder_myFind_info.h"

/* Function Definitions */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[11] = {
    "789ced5ccd6fe2461477b6d968f7d016556ab5550f8dd4aa5215092784249b9ef85e6049c206b222595564b08730c9780cb641b097e6d03fa0eab9527bdc9eda"
    "638f1c7be9b155d54bfba7d4d80c1f16b3b88b630acc487878f3d0fcdebc3cbff7f3434158cb1cad0982f08e608feeb13dbfdd9703fdf99e303e9cfa35c7fada",
    "f8c785fbc2fa44fd77fd59528901db862d6044e07153a940cd140850e0601b59551001c42876ea50d0a0aee216942d4d156158440acca923421a9982921a510d"
    "849eaaf73e5e83d24da1a9085a4d1f9a8b470561c43f7f32cebfeed23fba4316c63e1718e85f24bf8c7f219ee950d345f3c0c850c584a6d62b6a5b4c00039401",
    "01b8a3235d945419ea620ca9f59a294b0097157305978bd1b858a86b10c8885c9515a8543440e0e651b16cae4906524919111dc950543a2944e4a03276ce4bc6"
    "39365c9ed339d3f15078302a46a6e1b9f5eb7d065ec0d204ccf8c22a11a69fcf2dde86431ee26d5857596d56301ce2bd9a112fcdc4b3af54ff22932b59a193d7",
    "d42b0d289bbd18d7c5a36831178d89a7a1ed9d83ca8e68a82aee851254b0885145548081414554ebbd78321d15547c8c83af7ffbe48fa8cf71e7779ccf0dafcd"
    "d8cf6ddc7dc0c0a37147f5f197573803769f968ad9facbeb9d6d8440f62235b4233f05679a1d0243f66bff45bd7f597f7fb7f1f616c3ee87fdf9d1d8ea6ec49a",
    "6ee3fd3931c8efb70c1cb7fefb986107f51fd5f7caa116442699d0cc0a19447aac89b09121269d801a92e696ffbb33e29d33f1ec2bd5fff7f8e9bdb62cb7895b"
    "d46fa2d36f7d76e0671ebbfdfe9fbf7ee775e18ef0fcaa0b27ad463c5a4db71e179f853b525221a1d4054ef3ba30efba70c9b0cbdb783be4fcde25de12c701e7",
    "f77788c7f9bd37fbf3fb777c8cc55bb7e05b1e473a01f3cce33fcf889765e2d957aa9f290e2036df8896ab2831f79197ffc079f9ff379fbfcfc0a3f147f58d68"
    "f34409774ae1ed532dd48cefc0c396722c2c4f3ee7f7f164fbc7e3ee53de9fe9af7767c4e3fd99bbc6b3c7aae0f1fe8c37fb2f2aafaf33ec721b6ff71c321db4",
    "6f1f185b2d46ecf92ce255fcbdc7c0a77ea37a473db0c9bfe01dff5f77c8433bd6adab5403da28deacbc21c7c4b3af54ef511d1830071ff3d457affee6797fd1"
    "f3fec573bc2f172ae7b5e441ee3a7f064bd7a19b53decf59adbcdfede7fdc8998ffd1d44aa02efefb87a2e345dc5fb3bcb85e7577edf6b1fe1d44d4bbeceec97",
    "da59590b8549617f89f23bbf8f27dbcffb3bbcbfe3e63cbcbf335f3cdedff166ff45e5f9970cbbbcfdded63f5e5fc5aada6ba4705eff5a3e506d12d172d51cf8"
    "c08f91cf783e5ff47cfeb87170526ce0c4de4dac567cf6a46034120989f3fa55ba8fcdb1c9797d7fbd3b231ee7f5778d678f55c1e3bcde9bfd791d986cff5df5",
    "773e62e0517f51bda30ee812c0400b52f63f3bff770e963d7450bc5fde108feeff7c0a1ed57b5407b66cc70d63c7c7fcff6dec439eff173dff576afbf912c186"
    "5c50956493a4772bc958f609cfffab9affbf61ece7d65f9f33f0a8bfa8de91ff41bd8e3b052b97a59ac4fa59890cc96320d19fec98f6bdb65bfbde9d621fd557",
    "fb56946b80c8e68302c5ff75467c690a3ed57b541fd87ef5ff773a7ed2f7f8ff6f2d7abdc8659f4ae78dfc61f4fc28ace9a13a0ab50eb289e5a917fcfe9e7c2e"
    "77f1185cbae78837ed27f1e788c9331dfc39c21f3cfe1c31dbfeff028d1ca81f", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 20184U, &nameCaptureInfo);
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
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("myFind"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.3.0.713579 (R2017b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_myFind_info.c) */
