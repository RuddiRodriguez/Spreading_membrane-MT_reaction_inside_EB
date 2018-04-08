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
#include "rt_nonfinite.h"
#include "arrayrates_values_family_reaction.h"
#include "main.h"
#include "arrayrates_values_family_reaction_terminate.h"
#include "arrayrates_values_family_reaction_initialize.h"

/* Function Declarations */
static void argInit_1x50_real_T(double result[50]);
static void argInit_1x6_real_T(double result[6]);
static void argInit_25x1_real_T(double result[25]);
static void argInit_6x50_real_T(double result[300]);
static double argInit_real_T(void);
static void main_arrayrates_values_family_reaction(void);

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

static void argInit_1x6_real_T(double result[6])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 6; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

static void argInit_25x1_real_T(double result[25])
{
  int idx0;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 25; idx0++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx0] = argInit_real_T();
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

static void main_arrayrates_values_family_reaction(void)
{
  double count;
  double MTarryocupationtemp[25];
  double numberpb;
  double iMTLsize;
  double MTarryocupation[50];
  double ocupationnumber[50];
  double rates[6];
  double koof;
  double arrayrates[300];

  /* Initialize function 'arrayrates_values_family_reaction' input arguments. */
  count = argInit_real_T();

  /* Initialize function input argument 'MTarryocupationtemp'. */
  argInit_25x1_real_T(MTarryocupationtemp);
  numberpb = argInit_real_T();
  iMTLsize = argInit_real_T();

  /* Initialize function input argument 'MTarryocupation'. */
  argInit_1x50_real_T(MTarryocupation);

  /* Initialize function input argument 'ocupationnumber'. */
  argInit_1x50_real_T(ocupationnumber);

  /* Initialize function input argument 'rates'. */
  argInit_1x6_real_T(rates);
  koof = argInit_real_T();

  /* Initialize function input argument 'arrayrates'. */
  argInit_6x50_real_T(arrayrates);

  /* Call the entry-point 'arrayrates_values_family_reaction'. */
  arrayrates_values_family_reaction(count, MTarryocupationtemp, numberpb,
    iMTLsize, MTarryocupation, ocupationnumber, rates, koof, arrayrates,
    argInit_real_T(), argInit_real_T(), argInit_real_T(), argInit_real_T(),
    argInit_real_T());
}

int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  arrayrates_values_family_reaction_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_arrayrates_values_family_reaction();

  /* Terminate the application.
     You do not need to do this more than one time. */
  arrayrates_values_family_reaction_terminate();
  return 0;
}

/* End of code generation (main.c) */
