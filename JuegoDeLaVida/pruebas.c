#include <stdio.h>
#include "casilla.h"

// Nuestro tablero de juego será un array [10][10] de casillas.

struct casilla main()
{
  struct casilla i[2] = {{{0,0},1},{{1,1},0}};
  struct casilla *p = i;

  printf("1 == %d %d %d\n",p->x, p->y, p->cel);
  p++;
  printf("2 == %d %d %d\n",p->x, p->y, p->cel);
  

  return *p;
}
