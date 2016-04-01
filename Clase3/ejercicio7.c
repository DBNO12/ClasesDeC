#include <stdio.h>

int main()
{
  int i = 1;
  int j = 2;

  int z;

  printf("swap(%d,%d) == ",i,j);

  z = i; i = j; j = z;

  printf("(%d,%d)\n",i,j);

  return 0;
}
