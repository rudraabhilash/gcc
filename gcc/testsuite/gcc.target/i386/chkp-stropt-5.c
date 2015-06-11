/* { dg-do compile } */
/* { dg-require-effective-target mpx } */
/* { dg-options "-fcheck-pointer-bounds -mmpx -O2 -fdump-tree-chkpopt -fchkp-use-fast-string-functions" } */
/* { dg-final { scan-tree-dump "memcpy_nobnd" "chkpopt" } } */

#include "string.h"

void test (int *buf1, int *buf2, size_t len)
{
  memcpy (buf1, buf2, len);
}
