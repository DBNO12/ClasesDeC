#include <stdio.h>

int main()
{
  int array[] = {0,1,2,3,4,5,6,7,8,9};
  int i;
//  
  for (i = 0; i < 10; i++)
    printf("%d ",array[i]);
  printf("\n");
// Preguntar
  for (i = 0; i < 5 ; i++);
    printf("%d ", array[8-2*i]);
  printf("\n");
//
  int j = array[0];

  for (i = 0; i < 9; i++)
    array[i] = array [i+1];
  array[9] = j;

  for (i = 0; i < 10; i++)
    printf("%d ",array[i]);
  printf("\n");
//
  j = array [9];
  
  for (i = 9; i > 0; i--)
    array[i] = array [i-1];
  array[0] = j;

  for (i = 0; i < 10; i++)
    printf("%d ",array[i]);
  printf("\n");
//
  int array2[] = {0,1,2,3,4,5,6,7,8,9};

  for (i = 0; i < 10; i++)
    array[9-i] = array2[i];

  for (i = 0; i < 10; i++)
    printf("%d ",array[i]);
  printf("\n");
  
  return 0;
}
  
