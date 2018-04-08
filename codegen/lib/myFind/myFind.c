/*
 * myFind.c
 *
 * Code generation for function 'myFind'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "myFind.h"
#include "myFind_emxutil.h"

/* Function Definitions */
void myFind(const emxArray_real_T *x, emxArray_real_T *idx)
{
  emxArray_uint32_T *allIdx;
  unsigned int u0;
  int i;
  int loop_ub;
  int end;
  emxInit_uint32_T(&allIdx, 2);
  if (x->size[1] < 1) {
    i = allIdx->size[0] * allIdx->size[1];
    allIdx->size[0] = 1;
    allIdx->size[1] = 0;
    emxEnsureCapacity_uint32_T(allIdx, i);
  } else {
    u0 = x->size[1] + MAX_uint32_T;
    i = allIdx->size[0] * allIdx->size[1];
    allIdx->size[0] = 1;
    allIdx->size[1] = (int)u0 + 1;
    emxEnsureCapacity_uint32_T(allIdx, i);
    loop_ub = (int)u0;
    for (i = 0; i <= loop_ub; i++) {
      allIdx->data[allIdx->size[0] * i] = 1U + i;
    }
  }

  end = x->size[1] - 1;
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (x->data[i] != 0.0) {
      loop_ub++;
    }
  }

  i = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = loop_ub;
  emxEnsureCapacity_real_T(idx, i);
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (x->data[i] != 0.0) {
      idx->data[loop_ub] = allIdx->data[i];
      loop_ub++;
    }
  }

  emxFree_uint32_T(&allIdx);
}

/* End of code generation (myFind.c) */
