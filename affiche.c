# include <stdlib.h>
#include <stdio.h>

void affiche(char mondeCarre[30][30], int dim)
  {
   for(int i =0; i < dim; i++)
   {
      for(int j=0; j < dim; j++)
      {
         printf("\033[44m  %c ", mondeCarre[i][j]);
      }
   printf("\n");
   }
}
