#include <stdio.h>

/* En el mismo programa realiza los siguientes apartados. Pista: así se declara un puntero
  que apunta a un puntero que apunta a un entero: int ∗∗p;
    a) Crea una matríz de enteros de 3x3 e inicialízala
    b) Crea un puntero que apunte a la matríz
    c) Crea dos enteros i y j
    d) Utiliza los enteros y el puntero para recorrer e imprimir la matríz la
       matríz. Restricciones: No puedes utilizar el puntero como un array (p[ i ][ j ]) */

int main()
{
  int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  int *pm = matrix; //¿Por qué da warning en esta asignación?

  int i;
  int j;

  for (i = 0 , j = 0; i < 9; i++, j++, pm++)
     if (j == 2)
        { printf("%d\n", *pm);
          j = -1; }
      else
        printf("%d ", *pm); 
}
