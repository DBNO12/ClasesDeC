// Definimos la función que nos permite realizar las iteraciones

struct casilla itera(struct casilla *t)
{
  struct casilla q[100];
  int i;
  int j;
  int r;
  
  for (i = 0, j = 0, r = 0; r < 100; r++, i++)
    if ( i == 9 )
      { q[r].x = 9;
        q[r].y = j;
        q[r].cel = 0;
        i = -1;
        j++; }
    else
      { q[r].x = i;
        q[r].y = j;
        q[r].cel = 0; };
    
  for (i = 0; i < 100; i++, t++)
    if ((t->cel == 0) && (vivas(t) == 3))
      q[i].cel = 1;
    else if ((t->cel == 1) && (vivas(t) >= 2) && (vivas(t) <= 3))
      q[i].cel = 1;
    else
      q[i].cel = 0;

  struct casilla *s = q;
  print(s);
  
  return itera(s);
}
