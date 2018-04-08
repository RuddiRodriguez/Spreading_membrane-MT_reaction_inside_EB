/*
 * rates_renormalization.c
 *
 * Code generation for function 'rates_renormalization'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rates_renormalization.h"

/* Function Definitions */
void rates_renormalization(double sigma, double kappa, double Vm, double r0_ini,
  double R_ini, double koof, const double ratesi[11], double betat, double np,
  double sigmai, double *koofre, double rates[11])
{
  (void)Vm;
  (void)r0_ini;
  (void)R_ini;

  /* UNTITLED10 Summary of this function goes here */
  /*    Detailed explanation goes here */
  /* rate renomalization */
  /* +2.*pi*1.63e9*16e-18*(Vm.*1e-6)*(log(R_ini/r0_ini ));                                      % F0 to pull a tube */
  /*  barrier height */
  /* F0 = 2e-9; F0 test */
  *koofre = koof * exp(6.2831853071795862 * sqrt(2.0 * kappa * sigma) * 1.0E-9 *
                       betat / np);

  /*  off rate renormalization */
  memcpy(&rates[0], &ratesi[0], 11U * sizeof(double));

  /*  New rates */
  if (sigmai == 0.0) {
    rates[0] = koof;
  } else {
    rates[0] = *koofre;
  }

  /*      rates = rates;%./rates(1,2);                                            % Can be normalized rates to 1 */
}

/* End of code generation (rates_renormalization.c) */
