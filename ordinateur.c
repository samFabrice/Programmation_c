#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ordinateur (char mondeCarre[10][10] , int dim)
{
    char ordinateur = '^';
    char couleur_aleatoire ;
    printf("L'ordinateur va choisir une couleur\n");
    couleur_aleatoire ='A'+rand()%7;
    printf("L'ordinateur a choisi : %c \n", couleur_aleatoire );
    bool changed = true;
     while (changed  == true )
              {
                changed = false;
                for (int i =0; i<10; i++)
                    {
                        for (int j =9; j>0; j--)
                            {
                                if ( mondeCarre[i][j] == ordinateur)
                                    {    
                                        if ( j+1 <=  9 && mondeCarre[i][j+1] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i][j+1] = ordinateur;
                                                    printf("%d , %d \n", i , j+1);
                                                    changed = changed | true;
                                                    printf("voila\n");
                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] ==  couleur_aleatoire ) 
                                                { 
                                                    mondeCarre[i][j-1] = ordinateur;
                                                    changed = changed | true;
                                                    printf("voila\n");
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i-1][j] = ordinateur;
                                                    changed = changed | true;
                                                    printf("voila\n");
                                                }
                                        if (i+1 <= 9 && mondeCarre[i+1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i+1][j] = ordinateur;
                                                    
                                                    changed = changed | true;
                                                    printf("voila\n");
                                                }
                                        else 
                                                {
                                                    changed =  false;
                                                    
                                                }
                                    
                                    } 
                            }
                    }
            } 
}
