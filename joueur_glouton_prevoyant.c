#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "alea.h"
#include "loi_du_plus_fort2.h"
#include <time.h>
#include <unistd.h>

void glouton_prevoyant(char mondeCarre[30][30],  int dim)
{
    char joueur_glouton_prevoyant= '^';
  float score_joueur_glouton_prevoyant = 0;
    printf("joueur_glouton_prevoyant = %c \n", joueur_glouton_prevoyant);
    char couleur_aleatoire;
    char tab[1000] = {0,0,0,0,0,0,0,0}; // On initialise un tableau dans lequel on stoque les couleurs qui qui peuvent ajouter des cases à la zone du joueur
    int o = 0;
                for (int i =0; i<30; i++)
                    {
                        for (int j = 0; j<30; j++)
                            {
                                if ( mondeCarre[i][j] == joueur_glouton_prevoyant )
                                {    
                                   if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'A' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'A') || (i+1 <= 29 && mondeCarre[i+1][j] == 'A' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'A') )
                                                {
                                                    tab[o] = 'A';
                                                    o ++;
                                                        if ( ( i+1<= 29 && j+1 <=29 && mondeCarre[i+1][j+1] == 'A') || (i+1<= 29 && j-1>=0 && mondeCarre[i+1][j-1] == 'A') || ( i-1>= 0 && j+1 <=29 && mondeCarre[i-1][j+1] == 'A') || (i-1>= 0 && j-1>=0 && mondeCarre[i-1][j-1] == 'A'))
                                                        {
                                                            tab[o] = 'A';
                                                            o++;
                                                            
                                                        }
                                                    
                                                }
                                   if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'B' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'B') || (i+1 <= 29 && mondeCarre[i+1][j] == 'B' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'B') ) 
                                                { 
                                                    tab[o] = 'B' ;
                                                    o ++;
                                                          if ( ( i+1<= 29 && j+1 <=29 && mondeCarre[i+1][j+1] == 'B') || (i+1<= 29 && j-1>=0 && mondeCarre[i+1][j-1] == 'B') || ( i-1>= 0 && j+1 <=29 && mondeCarre[i-1][j+1] == 'B') || (i-1>= 0 && j-1>=0 && mondeCarre[i-1][j-1] == 'B'))
                                                        {
                                                            tab[o] = 'B';
                                                            o++;
                                                            
                                                        }
                                                }
                                  if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'C' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'C') || (i+1 <= 29 && mondeCarre[i+1][j] == 'C' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'C') ) 
                                                {
                                                    tab[o] = 'C' ;
                                                    o ++;
                                                      if ( ( i+1<= 29 && j+1 <=29 && mondeCarre[i+1][j+1] == 'C') || (i+1<= 29 && j-1>=0 && mondeCarre[i+1][j-1] == 'C') || ( i-1>= 0 && j+1 <=29 && mondeCarre[i-1][j+1] == 'C') || (i-1>= 0 && j-1>=0 && mondeCarre[i-1][j-1] == 'C'))
                                                        {
                                                            tab[o] = 'C';
                                                            o++;
                                                            
                                                        }
                                                }
                                 if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'D' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'D') || (i+1 <= 29 && mondeCarre[i+1][j] == 'D' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'D') ) 
                                                {
                                                    tab[o] = 'D' ;
                                                    o ++;
                                                      if ( ( i+1<= 29 && j+1 <=29 && mondeCarre[i+1][j+1] == 'D') || (i+1<= 29 && j-1>=0 && mondeCarre[i+1][j-1] == 'D') || ( i-1>= 0 && j+1 <=29 && mondeCarre[i-1][j+1] == 'D') || (i-1>= 0 && j-1>=0 && mondeCarre[i-1][j-1] == 'D'))
                                                        {
                                                            tab[o] = 'D';
                                                            o++;
                                                        }
                                                }
                                if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'E' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'E') || (i+1 <= 29 && mondeCarre[i+1][j] == 'E' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'E') ) 
                                                {
                                                    tab[o] = 'E';
                                                    o ++;
                                                         if ( ( i+1<= 29 && j+1 <=29 && mondeCarre[i+1][j+1] == 'E') || (i+1<= 29 && j-1>=0 && mondeCarre[i+1][j-1] == 'E') || ( i-1>= 0 && j+1 <=29 && mondeCarre[i-1][j+1] == 'E') || (i-1>= 0 && j-1>=0 && mondeCarre[i-1][j-1] == 'E'))
                                                        {
                                                            tab[o] = 'E';
                                                            o++;  
                                                        }
                                                    
                                                }
                                 if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'F' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'F') || (i+1 <= 29 && mondeCarre[i+1][j] == 'F' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'F') ) 
                                                {
                                                    tab[o] = 'F';
                                                    o ++;
                                                     if (( i+1<= 29 && j+1 <=29 && mondeCarre[i+1][j+1] == 'F') || (i+1<= 29 && j-1>=0 && mondeCarre[i+1][j-1] == 'F') || ( i-1>= 0 && j+1 <=29 && mondeCarre[i-1][j+1] == 'F') || (i-1>= 0 && j-1>=0 && mondeCarre[i-1][j-1] == 'F'))
                                                        {
                                                            tab[o] = 'F';
                                                            o++;
                                                        }
                                                }
                                if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  'G' ) || (j-1 >= 0 && mondeCarre[i][j-1] ==  'G') || (i+1 <= 29 && mondeCarre[i+1][j] == 'G' ) || (i-1 >= 0 && mondeCarre[i-1][j] ==  'G') ) 
                                                {
                                                    tab[o] = 'G';
                                                    o ++;
                                                     if (( i+1<= 29 && j+1 <=29 && mondeCarre[i+1][j+1] == 'G') || (i+1<= 29 && j-1>=0 && mondeCarre[i+1][j-1] == 'G') || ( i-1>= 0 && j+1 <=29 && mondeCarre[i-1][j+1] == 'G') || (i-1>= 0 && j-1>=0 && mondeCarre[i-1][j-1] == 'G'))
                                                        {
                                                            tab[o] = 'G';
                                                            o++;  
                                                        }
                                                }
                              
                              }
                                
                                
                              
                              
                            }
                    }
                    
                        
                 /*  for(int i =0; i < 100; i++)
                            {                                       
                                printf("%c ", tab[i]);
                            }*/
            
            couleur_aleatoire = loi_du_plus_fort2(tab,10);
            
            printf("Le joueur glouton a joue %c\n",couleur_aleatoire);
         
            
    bool changed = true;
    //while (getchar()!='\n');
     while (changed  == true )
              {
                changed = false;
                for (int i =0; i<30; i++)
                    {
                        for (int j =0; j<30; j++)
                            {
                                if ( mondeCarre[i][j] == joueur_glouton_prevoyant)
                                    {    
                                        if ( j+1 <=  29 && mondeCarre[i][j+1] == couleur_aleatoire)  
                                                {
                                                    mondeCarre[i][j+1] = joueur_glouton_prevoyant;
                                                    changed = changed | true;
                                              
                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] == couleur_aleatoire) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur_glouton_prevoyant;
                                                    changed = changed | true;
                                           
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] == couleur_aleatoire)  
                                                {
                                                    mondeCarre[i-1][j] = joueur_glouton_prevoyant;
                                                    changed = changed | true;
                                              
                                                }
                                        if (i+1 <= 29 && mondeCarre[i+1][j] ==couleur_aleatoire)  
                                                {
                                                    mondeCarre[i+1][j] = joueur_glouton_prevoyant;
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
            
            
           
    
    score_joueur_glouton_prevoyant = 0;
    int i,j;
    for (i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++){
            if (mondeCarre[i][j] == joueur_glouton_prevoyant)
                score_joueur_glouton_prevoyant ++;
        }
    }
          score_joueur_glouton_prevoyant =   (score_joueur_glouton_prevoyant/900)*100;
        printf("score_joueur_glouton_prevoyant = %f\n", score_joueur_glouton_prevoyant);
    
                            
}
