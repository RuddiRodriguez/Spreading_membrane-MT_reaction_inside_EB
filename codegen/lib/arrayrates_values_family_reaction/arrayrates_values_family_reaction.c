/*
 * arrayrates_values_family_reaction.c
 *
 * Code generation for function 'arrayrates_values_family_reaction'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "arrayrates_values_family_reaction.h"

/* Function Definitions */
void arrayrates_values_family_reaction(double count, const double
  MTarryocupationtemp[25], double numberpb, double iMTLsize, const double
  MTarryocupation[50], const double ocupationnumber[50], const double rates[6],
  double koof, double arrayrates[300], double positiontran, double tranflag,
  double densitylb, double densitylu, double v)
{
  double ratestemp34;
  double ratestemp56;
  int i0;
  int loop_ub;
  int trueCount;
  signed char tmp_data[50];
  int jj;
  double b_rates[50];
  int idx;
  boolean_T exitg1;
  signed char colocuone_data[50];
  signed char jj_data[50];
  double d0;
  double c_rates[49];
  int i1;
  (void)MTarryocupationtemp;

  /* UNTITLED4 Summary of this function goes here */
  /*    Detailed explanation goes here */
  ratestemp34 = densitylu * v;
  ratestemp56 = densitylb * v;
  if (count == 1.0) {
    if (1.0 > iMTLsize) {
      i0 = 0;
    } else {
      i0 = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)i0 - 1);
    for (trueCount = 0; trueCount <= loop_ub; trueCount++) {
      tmp_data[trueCount] = (signed char)trueCount;
    }

    for (trueCount = 0; trueCount < 50; trueCount++) {
      b_rates[trueCount] = rates[1] * ocupationnumber[trueCount];
    }

    loop_ub = (signed char)((signed char)i0 - 1) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[1 + 6 * tmp_data[i0]] = b_rates[i0];
    }

    if (1.0 > iMTLsize) {
      i0 = 0;
    } else {
      i0 = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)i0 - 1);
    for (trueCount = 0; trueCount <= loop_ub; trueCount++) {
      tmp_data[trueCount] = (signed char)trueCount;
    }

    for (trueCount = 0; trueCount < 50; trueCount++) {
      b_rates[trueCount] = rates[0] * MTarryocupation[trueCount];
    }

    loop_ub = (signed char)((signed char)i0 - 1) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[6 * tmp_data[i0]] = b_rates[i0];
    }

    if (2.0 > iMTLsize) {
      i0 = 1;
      trueCount = 0;
    } else {
      i0 = 2;
      trueCount = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)trueCount - i0);
    for (jj = 0; jj <= loop_ub; jj++) {
      tmp_data[jj] = (signed char)((signed char)(i0 + jj) - 1);
    }

    for (jj = 0; jj < 49; jj++) {
      c_rates[jj] = rates[2] * ocupationnumber[1 + jj];
    }

    loop_ub = (signed char)((signed char)trueCount - i0) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[2 + 6 * tmp_data[i0]] = c_rates[i0];
    }

    /*  %         arrayrates (4,1:iMTLsize) = rates(1,4).*ocupationnumber; */
    /*  %         arrayrates (5,1:iMTLsize) = rates(1,5).*MTarryocupation; */
    if (2.0 > iMTLsize) {
      i0 = 1;
      trueCount = 0;
    } else {
      i0 = 2;
      trueCount = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)trueCount - i0);
    for (jj = 0; jj <= loop_ub; jj++) {
      tmp_data[jj] = (signed char)((signed char)(i0 + jj) - 1);
    }

    for (jj = 0; jj < 49; jj++) {
      c_rates[jj] = rates[3] * ocupationnumber[1 + jj];
    }

    loop_ub = (signed char)((signed char)trueCount - i0) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[3 + 6 * tmp_data[i0]] = c_rates[i0];
    }

    if (2.0 > iMTLsize) {
      i0 = 1;
      trueCount = 0;
    } else {
      i0 = 2;
      trueCount = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)trueCount - i0);
    for (jj = 0; jj <= loop_ub; jj++) {
      tmp_data[jj] = (signed char)((signed char)(i0 + jj) - 1);
    }

    for (jj = 0; jj < 49; jj++) {
      c_rates[jj] = rates[4] * MTarryocupation[1 + jj];
    }

    loop_ub = (signed char)((signed char)trueCount - i0) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[4 + 6 * tmp_data[i0]] = c_rates[i0];
    }

    if (2.0 > iMTLsize) {
      i0 = 1;
      trueCount = 0;
    } else {
      i0 = 2;
      trueCount = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)trueCount - i0);
    for (jj = 0; jj <= loop_ub; jj++) {
      tmp_data[jj] = (signed char)((signed char)(i0 + jj) - 1);
    }

    for (jj = 0; jj < 49; jj++) {
      c_rates[jj] = rates[5] * MTarryocupation[1 + jj];
    }

    loop_ub = (signed char)((signed char)trueCount - i0) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[5 + 6 * tmp_data[i0]] = c_rates[i0];
    }
  }

  if (25.0 < numberpb) {
    if (1.0 > iMTLsize) {
      i0 = 0;
    } else {
      i0 = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)i0 - 1);
    for (trueCount = 0; trueCount <= loop_ub; trueCount++) {
      tmp_data[trueCount] = (signed char)trueCount;
    }

    for (trueCount = 0; trueCount < 50; trueCount++) {
      b_rates[trueCount] = rates[1] * ocupationnumber[trueCount];
    }

    loop_ub = (signed char)((signed char)i0 - 1) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[1 + 6 * tmp_data[i0]] = b_rates[i0];
    }

    if (1.0 > iMTLsize) {
      i0 = 0;
    } else {
      i0 = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)i0 - 1);
    for (trueCount = 0; trueCount <= loop_ub; trueCount++) {
      tmp_data[trueCount] = (signed char)trueCount;
    }

    for (trueCount = 0; trueCount < 50; trueCount++) {
      b_rates[trueCount] = rates[0] * MTarryocupation[trueCount];
    }

    loop_ub = (signed char)((signed char)i0 - 1) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[6 * tmp_data[i0]] = b_rates[i0];
    }

    if (2.0 > iMTLsize) {
      i0 = 1;
      trueCount = 0;
    } else {
      i0 = 2;
      trueCount = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)trueCount - i0);
    for (jj = 0; jj <= loop_ub; jj++) {
      tmp_data[jj] = (signed char)((signed char)(i0 + jj) - 1);
    }

    for (jj = 0; jj < 49; jj++) {
      c_rates[jj] = rates[2] * ocupationnumber[1 + jj];
    }

    loop_ub = (signed char)((signed char)trueCount - i0) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[2 + 6 * tmp_data[i0]] = c_rates[i0];
    }

    /*  %         arrayrates (4,1:iMTLsize) = rates(1,4).*ocupationnumber; */
    /*  %         arrayrates (5,1:iMTLsize) = rates(1,5).*MTarryocupation; */
    if (2.0 > iMTLsize) {
      i0 = 1;
      trueCount = 0;
    } else {
      i0 = 2;
      trueCount = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)trueCount - i0);
    for (jj = 0; jj <= loop_ub; jj++) {
      tmp_data[jj] = (signed char)((signed char)(i0 + jj) - 1);
    }

    for (jj = 0; jj < 49; jj++) {
      c_rates[jj] = rates[3] * ocupationnumber[1 + jj];
    }

    loop_ub = (signed char)((signed char)trueCount - i0) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[3 + 6 * tmp_data[i0]] = c_rates[i0];
    }

    if (2.0 > iMTLsize) {
      i0 = 1;
      trueCount = 0;
    } else {
      i0 = 2;
      trueCount = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)trueCount - i0);
    for (jj = 0; jj <= loop_ub; jj++) {
      tmp_data[jj] = (signed char)((signed char)(i0 + jj) - 1);
    }

    for (jj = 0; jj < 49; jj++) {
      c_rates[jj] = rates[4] * MTarryocupation[1 + jj];
    }

    loop_ub = (signed char)((signed char)trueCount - i0) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[4 + 6 * tmp_data[i0]] = c_rates[i0];
    }

    if (2.0 > iMTLsize) {
      i0 = 1;
      trueCount = 0;
    } else {
      i0 = 2;
      trueCount = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)trueCount - i0);
    for (jj = 0; jj <= loop_ub; jj++) {
      tmp_data[jj] = (signed char)((signed char)(i0 + jj) - 1);
    }

    for (jj = 0; jj < 49; jj++) {
      c_rates[jj] = rates[5] * MTarryocupation[1 + jj];
    }

    loop_ub = (signed char)((signed char)trueCount - i0) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[5 + 6 * tmp_data[i0]] = c_rates[i0];
    }
  }

  /* try */
  if ((25.0 > numberpb) && (positiontran != 1.0)) {
    if (tranflag == 3.0) {
      for (i0 = 0; i0 < 3; i0++) {
        arrayrates[1 + 6 * ((int)(positiontran + (-1.0 + (double)i0)) - 1)] =
          rates[1] * ocupationnumber[(int)(positiontran + (-1.0 + (double)i0)) -
          1];
        arrayrates[2 + 6 * ((int)(positiontran + (-1.0 + (double)i0)) - 1)] =
          rates[2] * ocupationnumber[(int)(positiontran + (-1.0 + (double)i0)) -
          1];
        arrayrates[3 + 6 * ((int)(positiontran + (-1.0 + (double)i0)) - 1)] =
          rates[3] * ocupationnumber[(int)(positiontran + (-1.0 + (double)i0)) -
          1];
      }
    } else {
      /* [~,colocuone] = (find (MTarryocupation==1)); */
      trueCount = 0;
      for (jj = 0; jj < 50; jj++) {
        if (MTarryocupation[jj] == 1.0) {
          trueCount++;
        }
      }

      loop_ub = 0;
      for (jj = 0; jj < 50; jj++) {
        if (MTarryocupation[jj] == 1.0) {
          colocuone_data[loop_ub] = (signed char)(1 + jj);
          loop_ub++;
        }
      }

      /*          colocuone = myFind( MTarryocupation ); */
      /*          try */
      for (i0 = 0; i0 < 3; i0++) {
        arrayrates[1 + 6 * ((int)(positiontran + (-1.0 + (double)i0)) - 1)] =
          rates[1] * ocupationnumber[(int)(positiontran + (-1.0 + (double)i0)) -
          1];
      }

      /*          catch err */
      /*              arrayrates=1; */
      /*          end */
      /* arrayrates (2,((colocuone(end)-numberpb+1):colocuone(end))) = rates(1,2).*MTarryocupation(((colocuone(end)-numberpb+1):colocuone(end))); */
      d0 = (double)colocuone_data[trueCount - 1] - numberpb;
      if (1.0 > d0) {
        loop_ub = -1;
      } else {
        loop_ub = (int)d0 - 1;
      }

      for (i0 = 0; i0 <= loop_ub; i0++) {
        arrayrates[6 * i0] = koof * MTarryocupation[i0];
      }

      if (1.0 > iMTLsize) {
        i0 = 0;
      } else {
        i0 = (int)iMTLsize;
      }

      loop_ub = (signed char)((signed char)i0 - 1);
      for (trueCount = 0; trueCount <= loop_ub; trueCount++) {
        tmp_data[trueCount] = (signed char)trueCount;
      }

      for (trueCount = 0; trueCount < 50; trueCount++) {
        b_rates[trueCount] = rates[0] * MTarryocupation[trueCount];
      }

      loop_ub = (signed char)((signed char)i0 - 1) + 1;
      for (i0 = 0; i0 < loop_ub; i0++) {
        arrayrates[6 * tmp_data[i0]] = b_rates[i0];
      }

      /*  arrayrates (4,1:iMTLsize) = rates(1,4).*ocupationnumber; */
      /*          arrayrates (5,1:iMTLsize) = rates(1,5).*MTarryocupation; */
      for (i0 = 0; i0 < 3; i0++) {
        arrayrates[2 + 6 * ((int)(positiontran + (-1.0 + (double)i0)) - 1)] =
          rates[2] * ocupationnumber[(int)(positiontran + (-1.0 + (double)i0)) -
          1];
        arrayrates[3 + 6 * ((int)(positiontran + (-1.0 + (double)i0)) - 1)] =
          rates[3] * ocupationnumber[(int)(positiontran + (-1.0 + (double)i0)) -
          1];
        arrayrates[4 + 6 * ((int)(positiontran + (-1.0 + (double)i0)) - 1)] =
          rates[4] * MTarryocupation[(int)(positiontran + (-1.0 + (double)i0)) -
          1];
        arrayrates[5 + 6 * ((int)(positiontran + (-1.0 + (double)i0)) - 1)] =
          rates[5] * MTarryocupation[(int)(positiontran + (-1.0 + (double)i0)) -
          1];
      }
    }
  }

  /*      catch err */
  /*          return; */
  /*      end */
  if ((25.0 > numberpb) && (positiontran == 1.0)) {
    idx = 0;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= 50)) {
      if (MTarryocupation[jj - 1] == 1.0) {
        idx++;
        jj_data[idx - 1] = (signed char)jj;
        if (idx >= 50) {
          exitg1 = true;
        } else {
          jj++;
        }
      } else {
        jj++;
      }
    }

    if (1 > idx) {
      loop_ub = 0;
    } else {
      loop_ub = idx;
    }

    for (i0 = 0; i0 < loop_ub; i0++) {
      colocuone_data[i0] = jj_data[i0];
    }

    /*          colocuone = myFind( MTarryocupation ); */
    /*          try */
    if (1.0 > iMTLsize) {
      i0 = 0;
    } else {
      i0 = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)i0 - 1);
    for (trueCount = 0; trueCount <= loop_ub; trueCount++) {
      tmp_data[trueCount] = (signed char)trueCount;
    }

    for (trueCount = 0; trueCount < 50; trueCount++) {
      b_rates[trueCount] = rates[1] * ocupationnumber[trueCount];
    }

    loop_ub = (signed char)((signed char)i0 - 1) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[1 + 6 * tmp_data[i0]] = b_rates[i0];
    }

    /*          catch err */
    /*              arrayrates=1; */
    /*          end */
    /* arrayrates (2,((colocuone(end)-numberpb+1):colocuone(end))) = rates(1,2).*MTarryocupation(((colocuone(end)-numberpb+1):colocuone(end))); */
    if (1 > idx) {
      i1 = 0;
    } else {
      i1 = idx;
    }

    d0 = (double)colocuone_data[i1 - 1] - numberpb;
    if (1.0 > d0) {
      loop_ub = -1;
    } else {
      loop_ub = (int)d0 - 1;
    }

    for (i0 = 0; i0 <= loop_ub; i0++) {
      arrayrates[6 * i0] = koof * MTarryocupation[i0];
    }

    if (1.0 > iMTLsize) {
      i0 = 0;
    } else {
      i0 = (int)iMTLsize;
    }

    loop_ub = (signed char)((signed char)i0 - 1);
    for (trueCount = 0; trueCount <= loop_ub; trueCount++) {
      tmp_data[trueCount] = (signed char)trueCount;
    }

    for (trueCount = 0; trueCount < 50; trueCount++) {
      b_rates[trueCount] = rates[0] * MTarryocupation[trueCount];
    }

    loop_ub = (signed char)((signed char)i0 - 1) + 1;
    for (i0 = 0; i0 < loop_ub; i0++) {
      arrayrates[6 * tmp_data[i0]] = b_rates[i0];
    }

    /*  arrayrates (4,1:iMTLsize) = rates(1,4).*ocupationnumber; */
    /*          arrayrates (5,1:iMTLsize) = rates(1,5).*MTarryocupation; */
    for (i0 = 0; i0 < 2; i0++) {
      arrayrates[2 + 6 * i0] = rates[2] * ocupationnumber[i0];
      arrayrates[3 + 6 * i0] = rates[3] * ocupationnumber[i0];
      arrayrates[4 + 6 * i0] = rates[4] * MTarryocupation[i0];
      arrayrates[5 + 6 * i0] = rates[5] * MTarryocupation[i0];
    }
  }

  arrayrates[2] = ratestemp34 * ocupationnumber[0];
  arrayrates[3] = ratestemp34 * ocupationnumber[0];
  arrayrates[4] = ratestemp56 * MTarryocupation[0];
  arrayrates[5] = ratestemp56 * MTarryocupation[0];
}

/* End of code generation (arrayrates_values_family_reaction.c) */
