#include <stdio.h>

int main()
{ int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  int i;
  int j;
  int l;

  for (i = 0, j = 0, l = 0;  l < 9; l++)
    if (j == 2)
      { printf("%d \n", matrix[i][j]);
        j = 0;
        i++; }
    else
      { printf("%d ", matrix[i][j]);
        j++; }

  printf("\n");
//
  int matrix2[3][3] = {{11,22,33},{44,55,66},{77,88,99}};

  for (i = 0, j = 0, l = 0; l < 9; l++)
    if (j == 2)
      { matrix2[i][j] *= 2;
        j = 0;
        i++; }
    else
      { matrix2[i][j] *= 2;
        j++; }

  for (i = 0, j = 0, l = 0;  l < 9; l++)
    if (j == 2)
      { printf("%d \n", matrix2[i][j]);
        j = 0;
        i++; }
    else
      { printf("%d ", matrix2[i][j]);
        j++; }
  
  return 0;
}
  
