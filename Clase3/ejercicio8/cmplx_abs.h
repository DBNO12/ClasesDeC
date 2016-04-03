#define CUAD(x) ((x)*(x))

double cmplx_abs(const struct cmplx *a)
{
  return sqrt(CUAD(a->real) + CUAD(a->img));
}
