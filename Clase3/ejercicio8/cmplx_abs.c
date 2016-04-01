#include <stdio.h>
#include <math.h>
#include "cmplx.h"

#define cuad(x) ((x)*(x))

double cmplx_abs(const struct cmplx *a)
{
  return sqrt(cuad(a->real) + cuad(a->img));
}
