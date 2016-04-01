struct cmplx {
  int real;
  int img; };

struct cmplx cmplx_sum(const struct cmplx *a,const struct cmplx *b);
struct cmplx cmplx_mult(const struct cmplx *a,const struct cmplx *b);
double cmplx_abs(const struct cmplx *a);
void cmplx_print(const struct cmplx *a);
