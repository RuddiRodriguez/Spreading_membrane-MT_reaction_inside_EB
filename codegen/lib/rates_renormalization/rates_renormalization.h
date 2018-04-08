/*
 * rates_renormalization.h
 *
 * Code generation for function 'rates_renormalization'
 *
 */

#ifndef RATES_RENORMALIZATION_H
#define RATES_RENORMALIZATION_H

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "rates_renormalization_types.h"

/* Function Declarations */
extern void rates_renormalization(double sigma, double kappa, double Vm, double
  r0_ini, double R_ini, double koof, const double ratesi[11], double betat,
  double np, double sigmai, double *koofre, double rates[11]);

#endif

/* End of code generation (rates_renormalization.h) */
