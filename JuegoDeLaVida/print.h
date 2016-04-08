// Definimos la funcion que nos permitirá imprimir el tablero
// después de cada iteración

int print(struct casilla *t)
{
  int i;
  int r;
  
  for (i = 0, r = 0; r < 100; r++, i++, t++)
    if ( i == 9)
      { printf("%d\n",t->cel);
        i = -1; }
    else 
      printf("%d",t->cel);
  printf("\n");
}
