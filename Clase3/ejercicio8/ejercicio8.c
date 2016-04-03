#include <stdio.h>
#include <math.h>

#include "cmplx.h"
#include "cmplx_sum.h"
#include "cmplx_mult.h"
#include "cmplx_abs.h"
#include "cmplx_print.h"

int main()
{
  struct cmplx a = {2,3};
  struct cmplx b = {4,-5};

  const struct cmplx *pa = &a;
  const struct cmplx *pb = &b;

  printf("Sea a = "); cmplx_print(pa);
  printf("Sea b = "); cmplx_print(pb);

  struct cmplx s = cmplx_sum(pa,pb);
  struct cmplx p = cmplx_mult(pa,pb);

  const struct cmplx *ps = &s;
  const struct cmplx *pp = &p;

  printf("%f\n",sqrt(2.000));

  printf("a + b = "); cmplx_print(ps);
  printf("a * b = "); cmplx_print(pp);
  printf("%f\n",cmplx_abs(pa));
  printf("%f\n",cmplx_abs(pb));
}
  
