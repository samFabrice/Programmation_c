# include <stdlib.h>
#include <stdio.h>

/// Fonction qui retourne un char*
char* convertis(int valeurEncodageInterne)
{
    char* correspondance[9];
    correspondance[0] = "A"; /// "blueAblack";
    correspondance[1] = "B"; /// "redBblack";
    /// ...
    correspondance[8] = "&"; /// "white@black";

    return correspondance[valeurEncodageInterne];
}

void affiche(char mondeCarre[30][30], int dim)
  {
   for(int i =0; i < dim; i++)
   {
      for(int j=0; j < dim; j++)
      {
         printf("\033[44m  %c ", convertis( mondeCarre[i][j] ) );
      }
   printf("\n");
   }
}
