/*
 * myFind_emxutil.h
 *
 * Code generation for function 'myFind_emxutil'
 *
 */

#ifndef MYFIND_EMXUTIL_H
#define MYFIND_EMXUTIL_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "myFind_types.h"

/* Function Declarations */
extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_uint32_T(emxArray_uint32_T *emxArray, int oldNumel);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxFree_uint32_T(emxArray_uint32_T **pEmxArray);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInit_uint32_T(emxArray_uint32_T **pEmxArray, int numDimensions);

#endif

/* End of code generation (myFind_emxutil.h) */
