/* { dg-do compile { target *-*-linux* } } */
/* { dg-options "-O2 -fno-pic -fno-plt" } */

extern void bar (void);

void
foo (void)
{
  bar ();
}

/* { dg-final { scan-assembler "jmp\[ \t\]*.bar@GOTPCREL" { target { ! ia32 } } } } */
/* { dg-final { scan-assembler "jmp\[ \t\]*.bar@GOT" { target { ia32 && indbr_reloc } } } } */
