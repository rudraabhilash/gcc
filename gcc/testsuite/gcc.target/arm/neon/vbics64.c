/* Test the `vbics64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vbics64 (void)
{
  int64x1_t out_int64x1_t;
  int64x1_t arg0_int64x1_t;
  int64x1_t arg1_int64x1_t;

  out_int64x1_t = vbic_s64 (arg0_int64x1_t, arg1_int64x1_t);
}

/* { dg-final { scan-assembler "vbic\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
