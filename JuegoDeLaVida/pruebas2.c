#include <stdio.h>
#include "casilla.h"
// La función vivas(const struct casilla *t) cuentas las vecinas 
// vivas de la célula a la que apunta el puntero t, y devuelve
// dicho valor.

// La codificación se basa en:
//          X Y Z
//        A - - -
//        B - t -
//        C - - -

//int vivas(struct casilla *t)
int main()
{
  struct casilla p[100];

  int i;
  for (i = 0; i < 100; i++)
    if (i % 2 == 1)
      { p[i].x = 0;
        p[i].y = 0;
        p[i].cel = 1; }
    else
      { p[i].x = 0;
        p[i].y = 0;
        p[i].cel = 0; };
  struct casilla *t = p;
  
// Guardamos la posición de t
  int B = t->x;
  int Y = t->y;
  
  const struct casilla *AX;
  const struct casilla *AY;
  const struct casilla *AZ;
  const struct casilla *BX;
  // BY = t
  const struct casilla *BZ;
  const struct casilla *CX;
  const struct casilla *CY;
  const struct casilla *CZ;

  if ((B == 0) && (Y == 0))
    { BZ = ++t;
      t += 8;
      BX = t;
      t++;
      CY = t++;
      CZ = t++;
      t += 7;
      CX = t++;
      t += 70;
      AY = t++;
      AZ = t++;
      t += 7;
      AX = t; }
  else
    {};
  printf("%d\n", AX->cel + AY->cel + AZ->cel + BX->cel + BZ->cel
                 + CX-> cel + CY->cel + CZ->cel);
  return AX->cel + AY->cel + AZ->cel + BX->cel + BZ->cel
         + CX-> cel + CY->cel + CZ->cel;
}
  
      
