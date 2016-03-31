#include <stdio.h>

/* En el mismo programa realiza los siguientes apartados:
  a) Crea e inicializa un vector de enteros y otro de reales de 5 elementos
     cada uno
  b) Crea otro vector de float de 5 elementos sin inicializar
  c) Declara dos punteros para cada array
  d) Utiliza la “forma 1” para imprimir los dos vectores
  e) Utiliza la “forma 3” multiplicar los elementos del primer y el segundo
     vector y guardarlos en el tercero: v3[i] = v1[i] ∗ v2[i]
  f) Crea una cadena y dos punteros a char
  g) Utiliza la “forma 2” y los dos punteros para invertir la cadena: str[i] =
     str[N − i]   */

int main()
{
  int    aInt[] = {0,1,2,3,4};
  double aDou[] = {0.0,1.0,2.0,3.0,4.0};
//
  float  aFlo[5];
//
  int    *pInt = aInt;
  double *pDou = aDou;
//
  int i;

  for (i = 0; i < 5; i++)
    printf("%d ",*pInt++);
  printf("\n");
  for (i = 0; i < 5; i++)
    printf("%f ",*pDou++);
  printf("\n");
  
  pInt = aInt;
  pDou = aDou;
//
  for (i = 0; i < 5; i++)
    aFlo[i] = aInt[i] * aDou[i];

  for (i = 0; i < 5; i++)
    printf("%f ",aFlo[i]);
  printf("\n");
//
  char str[] = "Hola";

  char *pc1 = str;
  char *pc2 = str;
  
  for (pc2 += 3; pc1 <= &str[3] ; pc1++, pc2--)
    printf("%c ", *pc2);
  printf("\n");
  
}
  
