#include <stdio.h>

#define TOCAPITOL(c) do {\
    if (c > 90)\
      c -= 32;\
    printf("%c\n",c); } while(0)\

int main()
{
  char chr = '3';
  int  ent =  3 ;

  TOCAPITOL(chr);
  TOCAPITOL(ent); // ¿Cómo hago que de error?

  return 0;
}

          
