/* { dg-do run { xfail *-*-* } } */
/* { dg-options "-fmpx" } */
/* { dg-skip-if "" { *-*-* } { "-flto" } { "" } } */

#define XFAIL

#include "mpx-check.h"

int buf[100];
int buf1[10];

int rd (int (&p)[100], int i)
{
  int res = p[i];
  printf ("%d\n", res);
  return res;
}

int mpx_test (int argc, const char **argv)
{
  int *p;

  rd (buf, -1);

  return 0;
}
