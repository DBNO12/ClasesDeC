#include <stdio.h>
#include "casilla.h"
#include "vivas.h"
#include "print.h"
#include "itera.h"

int main()
{
  struct casilla p[100];
  int i;
  int j;
  int r;

  for (i = 0, j = 0, r = 0; r < 100; r++, i++)
    if ( i == 9 )
      { p[r].x = 9;
        p[r].y = j;
        p[r].cel = 1;
        i = -1;
        j++; }
    else if ( r % 2 == 1)
      { p[r].x = i;
        p[r].y = j;
        p[r].cel = 0; }
    else
      { p[r].x = i;
        p[r].y = j;
        p[r].cel = 0; };
  
  struct casilla *t = p;
  itera(t);
  
  return 0;
}
      
