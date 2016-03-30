#include <stdio.h>

int main()
{ char string[] = "hOLA mUNDo";
  int i;

  for (i = 0; i < 10; i ++)
    if (string[i] > 90)
      string[i] = string[i] - 32;

  for (i = 0; i < 10; i ++)
    printf ("%c",string[i]);
  printf("\n");
//
  char string2[] = "son tres Palabras";

  
  for (i = 0; i < 17; i++)
    if ((i == 0) && (string2[0] > 90))
      string2[0] = string2[0] - 32;
    else if ((string2[i] == 32) && (string2[i+1] > 90))
      string2[i+1] = string2[i+1] - 32;

   for (i = 0; i < 17; i ++)
    printf ("%c",string2[i]);
  printf("\n");
  
  return 0;
}
