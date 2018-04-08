/*
 * main.c
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include files */
#include "checking_size_matrix_v1.h"
#include "main.h"
#include "checking_size_matrix_v1_terminate.h"

/* Function Declarations */
static void argInit_1x50_real_T(double result[50]);
static void argInit_6x50_real_T(double result[300]);
static double argInit_real_T(void);
static void main_checking_size_matrix_v1(void);

/* Function Definitions */
static void argInit_1x50_real_T(double result[50])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 50; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

static void argInit_6x50_real_T(double result[300])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 6; idx0++) {
    for (idx1 = 0; idx1 < 50; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + 6 * idx1] = argInit_real_T();
    }
  }
}

static double argInit_real_T(void)
{
  return 0.0;
}

static void main_checking_size_matrix_v1(void)
{
  double dv0[50];
  double dv1[50];
  double dv2[300];
  double ocupationnumbertemp[50];
  double MTarryocupationtemp[50];
  double arrayratestemp[300];
  double iMTLsize;

  /* Initialize function 'checking_size_matrix_v1' input arguments. */
  /* Initialize function input argument 'ocupationnumber'. */
  /* Initialize function input argument 'MTarryocupation'. */
  /* Initialize function input argument 'arrayrates'. */
  /* Call the entry-point 'checking_size_matrix_v1'. */
  argInit_1x50_real_T(dv0);
  argInit_1x50_real_T(dv1);
  argInit_6x50_real_T(dv2);
  checking_size_matrix_v1(dv0, dv1, dv2, ocupationnumbertemp,
    MTarryocupationtemp, arrayratestemp, &iMTLsize);
}

int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_checking_size_matrix_v1();

  /* Terminate the application.
     You do not need to do this more than one time. */
  checking_size_matrix_v1_terminate();
  return 0;
}

/* End of code generation (main.c) */
