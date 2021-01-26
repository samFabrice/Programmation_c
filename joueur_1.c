#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void joueur_1 (char mondeCarre[30][30] , int dim, float *pscore1)
{  
    
    float score_joueur_1 = 0;
    char joueur_1 = '@';
    char couleur;
    printf("Le joueur_1  = @ \n");
    printf("Le joueur_1 va choisir une couleur\n");
    scanf("%c", & couleur);
    printf("Le joueur_1 a choisi : %c \n", couleur);
    bool changed = true;
    while (getchar()!='\n');
     while (changed  == true )
              {
               
                changed = false;
               
                for (int i =0; i<30; i++)
                    {
                        for (int j =0; j<30; j++)
                            {

                                if ( mondeCarre[i][j+1] == couleur &&  j+1 <= 29 && mondeCarre[i][j] == '@')
            
                                                {
                                                    mondeCarre[i][j+1] = '@';
                                                   
                                                    changed = changed | true;
                                                }
            
    
                                        if ( mondeCarre[i][j-1] == couleur && j-1 >= 0 && mondeCarre[i][j] == '@') 
                                                { 
                                                    mondeCarre[i][j-1] = '@';
                                                    changed = changed | true;
                                                }
                                        if (mondeCarre[i-1][j] == couleur && i-1 >= 0 && mondeCarre[i][j] == '@')  
                                                {
                                                    mondeCarre[i-1][j] = '@';
                                                    changed = changed | true;
                                                }
                                        if (mondeCarre[i+1][j] == couleur && i+1 <= 29 && mondeCarre[i+1][j] == '@')  
                                                {
                                                    mondeCarre[i+1][j] = '@';
                                                    changed = changed | true;
                                                }
                                        else 
                                                {
                                                   changed = changed | false;
                                                   
                                                }
                                    
                                    }
                                     
                            }
                    }
                    
    int i,j;
    for (i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++){
            if (mondeCarre[i][j] == joueur_1)
                score_joueur_1 ++;
        }
    }
    score_joueur_1 = (score_joueur_1/900)*100;
      *pscore1 =  score_joueur_1 ;
    printf("score_joueur_1 = %f \n", *pscore1);
                    
            } 
            

