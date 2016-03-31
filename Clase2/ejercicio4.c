#include <stdio.h>

int main()
{
  int  i = 5;
  char c = 'c';

  int  *pi = &i;
  char *pc = &c;

  printf("i = %d && c = %c\n",i,c);
//
  *pi = 3;
  i = *pi;
  
  printf("i = %d\n",i);
//
  printf("c = %c\n",*pc);
}
