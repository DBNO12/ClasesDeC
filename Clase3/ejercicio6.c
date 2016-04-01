#include <stdio.h>

#define TOCAPITOL(c) do {\
    if (c > 90)\
      c -= 32;\
    printf("%c\n",c); } while(0)\

struct ejem
{
  char c1[4];
  char c2[4];
  char c3[4];
  char c4[4];
};

int main()
{
  struct ejem chorrada = {"aaaa","bbbb","cccc","dddd"};

  int i;
  for (i = 0; i < 4; i++)
    printf("%c", chorrada.c1[i]);
  for (i = 0; i < 4; i++)
    printf("%c", chorrada.c2[i]);
  for (i = 0; i < 4; i++)
    printf("%c", chorrada.c3[i]);
  for (i = 0; i < 4; i++)
    printf("%c", chorrada.c4[i]);
  printf("\n");

  printf("%d\n", chorrada);
//
  chorrada.c1[1] = 'A';
  chorrada.c2[2] = 'B';
  chorrada.c3[3] = 'C';
//
  for (i = 0; i < 4; i++)
    printf("%c", chorrada.c1[i]);
  for (i = 0; i < 4; i++)
    printf("%c", chorrada.c2[i]);
  for (i = 0; i < 4; i++)
    printf("%c", chorrada.c3[i]);
  for (i = 0; i < 4; i++)
    printf("%c", chorrada.c4[i]);
  printf("\n");

  printf("%d\n", chorrada);
//
  return 0;
}
  
