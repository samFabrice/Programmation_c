# include <stdlib.h>
#include <stdio.h>

void affiche(char mondeCarre[10][10], int dim)
  {
   for(int i =0; i < dim; i++)
   {
      for(int j=0; j < dim; j++)
      {
         printf("\033[45m %c ", mondeCarre[i][j]);
      }
   printf("\n");
   }
}
