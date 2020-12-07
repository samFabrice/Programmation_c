#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void jouer_un_coup (char mondeCarre[][10] , int dim)  
{
    char joueur, couleur ;
    
    printf("Veuillez choisir le quel des joueur entre @ et ^ vont jouer ainsi que la couleur \n");
    scanf("%c , %c ", &joueur , &couleur);
    int changed = 1;
    while (getchar()!='\n');
    while (changed ==1)
    {
      changed = 0;
      for (int i =0; i<dim; i++)
     {
        for (int j =9; j>=0; j--)
        {
            if ( mondeCarre[i][j] == joueur)
            {    
                if ( j+1 <=  9 && mondeCarre[i][j+1] == couleur)  
                  {
                      mondeCarre[i][j+1] = joueur;
                      changed = 1;
                      
                  }
                else if ( j-1 >= 0 && mondeCarre[i][j-1] == couleur) 
                { 
                    mondeCarre[i][j-1] = joueur;
                    changed = 1;
                }
                else if (i+1 <= 9 && mondeCarre[i+1][j] == couleur )
                {      mondeCarre[i+1][j] = joueur;    
                       changed = 1;
                }    
                else if (i-1 >= 0 && mondeCarre[i-1][j] == couleur)  
                {
                    mondeCarre[i-1][j] = joueur;
                    changed = 1;
                }
                else 
                {
                    changed = 0;
                }
               
             } 
        }
     }
    } 
}


