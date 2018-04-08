/*
 * checking_size_matrix_v1.c
 *
 * Code generation for function 'checking_size_matrix_v1'
 *
 */

/* Include files */
#include "checking_size_matrix_v1.h"

/* Function Definitions */
void checking_size_matrix_v1(const double ocupationnumber[50], const double
  MTarryocupation[50], const double arrayrates[300], double ocupationnumbertemp
  [50], double MTarryocupationtemp[50], double arrayratestemp[300], double
  *iMTLsize)
{
  int i0;
  int i1;
  (void)arrayrates;

  /* UNTITLED Summary of this function goes here */
  /*    Detailed explanation goes here */
  memset(&ocupationnumbertemp[0], 0, 50U * sizeof(double));
  for (i0 = 0; i0 < 5; i0++) {
    ocupationnumbertemp[i0] = ocupationnumber[45 + i0];
  }

  /* ocupationnumbertemp(1,length(ocupationnumber)+1:end) = 0; */
  memset(&MTarryocupationtemp[0], 0, 50U * sizeof(double));
  for (i0 = 0; i0 < 5; i0++) {
    MTarryocupationtemp[i0] = MTarryocupation[45 + i0];
  }

  /* ocupationnumbertemp(1,length(ocupationnumber)+1:end) = 0; */
  /*       */
  memset(&arrayratestemp[0], 0, 300U * sizeof(double));
  for (i0 = 0; i0 < 5; i0++) {
    for (i1 = 0; i1 < 6; i1++) {
      arrayratestemp[i1 + 6 * i0] = 0.0;
    }
  }

  /*      arrayratestemp(:,length(arrayrates)+1:end) = 0; */
  /*       */
  /*      ocupationnumbertemp=ocupationnumbertemp(1,1+lastnonzeromembranes(end)-50:end); */
  /*      MTarryocupationtemp=MTarryocupationtemp(1,1+lastnonzeromembranes(end)-50:end); */
  /*      arrayratestemp=arrayratestemp(:,1+lastnonzeromembranes(end)-50:end); */
  /*       */
  /*      ocupationnumbertemp=ocupationnumbertemp; */
  /*      MTarryocupationtemp = MTarryocupationtemp; */
  /*      arrayratestemp = arrayratestemp; */
  *iMTLsize = 50.0;
}

/* End of code generation (checking_size_matrix_v1.c) */
