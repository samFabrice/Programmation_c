#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>    

void ordinateur (char mondeCarre[30][30] , int dim)
{
    char ordi ;
    ordi = '@';
    printf("ordi = %c \n", ordi);
    char couleur_aleatoire ;
    couleur_aleatoire  = 'A' +rand()%7;
    printf("L'ordinateur a choisi : %c \n", couleur_aleatoire );
    bool changed = true;
     while (changed  == true )
              {
                changed = false;
                for (int i =0; i<30; i++)
                    {
                        for (int j = 0; j<30; j++)
                            {
                                if ( mondeCarre[i][j] == ordi )
                                    {    
                                        if ( j+1 <=  29 && mondeCarre[i][j+1] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i][j+1] = ordi ;
                                                    changed = changed | true;
                                          
                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] ==  couleur_aleatoire ) 
                                                { 
                                                    mondeCarre[i][j-1] = ordi ;
                                                    changed = changed | true;
                                             
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i-1][j] = ordi ;
                                                    changed = changed | true;
                                                   
                                                }
                                        if (i+1 <= 29 && mondeCarre[i+1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i+1][j] = ordi ;
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

    float score_ordi = 0;
    int i,j;
    for (i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++){
            if (mondeCarre[i][j] == ordi)
                score_ordi++;
        }
    }
        score_ordi = (score_ordi/900)*100;
        printf("score_ordi = %f\n", score_ordi);
    
}


  
