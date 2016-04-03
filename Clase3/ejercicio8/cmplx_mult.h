struct cmplx cmplx_mult(const struct cmplx *a,const struct cmplx *b)
{
  struct cmplx c;

  c.real = a->real * b->real - a->img * b->img;
  c.img  = a->real * b->img + a->img * b->real;

  return c;
}
