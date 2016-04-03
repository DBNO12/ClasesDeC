void cmplx_print(const struct cmplx *a)
{
  printf("%d",a->real);
  if (a->img >= 0) printf("+");
  printf("%di\n",a->img);
}
