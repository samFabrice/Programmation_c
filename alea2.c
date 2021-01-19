#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "alea.h"
#include <time.h>
#include <unistd.h>
/*
 Cette fonction joue  un joueur artificiel en choisissant à chaque tour une couleur
aléatoirement mais parmi les couleurs qui peuvent ajouter des cases à sa zone.
 */
void alea2 (char mondeCarre[30][30],  int dim , float cpt)
{
    char joueur_alea ; 
    char couleur_aleatoire;
    joueur_alea  = '@' ;  
    printf("joueur_alea = %c \n", joueur_alea);
    char tab[1000] = {0,0,0,0,0,0,0,0}; // On initialise un tableau dans lequel on stoque les couleurs qui qui peuvent ajouter des cases à la zone du joueur
    int o = 0;
                for (int i =0; i<30; i++)
                    {
                        for (int j = 0; j<30; j++)
                            {
                                if ( mondeCarre[i][j] == joueur_alea )
                                {    
                                   if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'A' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'A') || (i+1 <= 29 && mondeCarre[i+1][j] == 'A' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'A') )
                                                {
                                                    tab[o] = 'A';
                                                    o ++;
                                                }
                                   if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'B' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'B') || (i+1 <= 29 && mondeCarre[i+1][j] == 'B' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'B') ) 
                                                { 
                                                    tab[o] = 'B' ;
                                                    o ++;
                                                }
                                  if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'C' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'C') || (i+1 <= 29 && mondeCarre[i+1][j] == 'C' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'C') ) 
                                                {
                                                    tab[o] = 'C' ;
                                                    o ++;
                                                }
                                 if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'D' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'D') || (i+1 <= 29 && mondeCarre[i+1][j] == 'D' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'D') ) 
                                                {
                                                    tab[o] = 'D' ;
                                                    o ++;
                                                }
                                if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'E' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'E') || (i+1 <= 29 && mondeCarre[i+1][j] == 'E' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'E') ) 
                                                {
                                                    tab[o] = 'E';
                                                    o ++;
                                                    
                                                }
                                 if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'F' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'F') || (i+1 <= 29 && mondeCarre[i+1][j] == 'F' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'F') ) 
                                                {
                                                    tab[o] = 'F';
                                                    o ++;
                                                }
                                if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'G' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'G') || (i+1 <= 29 && mondeCarre[i+1][j] == 'G' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'G') ) 
                                                {
                                                    tab[o] = 'G';
                                                    o ++;
                                                }
                              
                              }
                                
                                
                              
                              
                            }
                    }
            
            
            srand(time(NULL));
            //couleur_aleatoire =tab[rand()%o]; // Cette fonction permet choisir aléatoirement une des couleurs qui se trouvent dans la zone du joueur
            int a = 0;
            a =  (rand() % (o - 0 )) + 0;
            couleur_aleatoire = tab[a];
            printf("***** = %d\n ", a);
           // printf("\n");
            printf("Le joueur aleatoire a joue %c\n",couleur_aleatoire);
            
            
    bool changed = true;
    //while (getchar()!='\n');
     while (changed  == true )
              {
                changed = false;
                for (int i =0; i<30; i++)
                    {
                        for (int j =0; j<30; j++)
                            {
                                if ( mondeCarre[i][j] == joueur_alea)
                                    {    
                                        if ( j+1 <=  29 && mondeCarre[i][j+1] == couleur_aleatoire)  
                                                {
                                                    mondeCarre[i][j+1] = joueur_alea;
                                                    changed = changed | true;

                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] == couleur_aleatoire) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur_alea;
                                                    changed = changed | true;
  
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] == couleur_aleatoire)  
                                                {
                                                    mondeCarre[i-1][j] = joueur_alea;
                                                    changed = changed | true;
          
                                                }
                                        if (i+1 <= 29 && mondeCarre[i+1][j] ==couleur_aleatoire)  
                                                {
                                                    mondeCarre[i+1][j] = joueur_alea;
                                                    changed = changed | true;
          
                                                }
                                        else 
                                                {
                                                    changed =  false;
                                                   
                                                }
                                                
                                                
                                    
                                    } 
                            }
                            
                           
                    }
            }
            
           
     

            
    float score_joueur_alea = 0;
    int i,j;
    for (i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++){
            if (mondeCarre[i][j] == joueur_alea)
                score_joueur_alea ++;
        }
    }
    score_joueur_alea = (score_joueur_alea/900)*100;
    printf("score_joueur_alea = %f\n", score_joueur_alea);
    
            
           
      
      
}
