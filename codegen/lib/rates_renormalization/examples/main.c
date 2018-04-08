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
#include "rates_renormalization.h"
#include "main.h"
#include "rates_renormalization_terminate.h"
#include "rates_renormalization_initialize.h"

/* Function Declarations */
static void argInit_11x1_real_T(double result[11]);
static double argInit_real_T(void);
static void main_rates_renormalization(void);

/* Function Definitions */
static void argInit_11x1_real_T(double result[11])
{
  int idx0;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 11; idx0++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx0] = argInit_real_T();
  }
}

static double argInit_real_T(void)
{
  return 0.0;
}

static void main_rates_renormalization(void)
{
  double dv0[11];
  double koofre;
  double rates[11];

  /* Initialize function 'rates_renormalization' input arguments. */
  /* Initialize function input argument 'ratesi'. */
  /* Call the entry-point 'rates_renormalization'. */
  argInit_11x1_real_T(dv0);
  rates_renormalization(argInit_real_T(), argInit_real_T(), argInit_real_T(),
                        argInit_real_T(), argInit_real_T(), argInit_real_T(),
                        dv0, argInit_real_T(), argInit_real_T(), argInit_real_T(),
                        &koofre, rates);
}

int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  rates_renormalization_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_rates_renormalization();

  /* Terminate the application.
     You do not need to do this more than one time. */
  rates_renormalization_terminate();
  return 0;
}

/* End of code generation (main.c) */
