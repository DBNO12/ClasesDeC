#include <stdio.h>
#include "cmplx.h"

struct cmplx cmplx_sum(const struct cmplx *a, const struct cmplx *b)
{
  struct cmplx c;

  c.real = a->real + b->real;
  c.img  = a->img  + b->img;

  return c;
}
