#include <stdio.h>

struct ejem
{
  char c1[4];
  char c2[4];
  char c3[4];
  char c4[4];
};

int main()
{
  struct ejem palabro = {{'a','a','a','a'},{'b','b','b','b'},
                         {'c','c','c','c'},{'d','d','d','d'}};
  
  printf("%d\n", palabro); // %d para intepretarlo como int

  return 0;
}
