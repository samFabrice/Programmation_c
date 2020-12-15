#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ordinateur (char mondeCarre[30][30] , int dim, float cpt)
{
    cpt = 0;
    int compteur_1, compteur_3, compteur_2, compteur_4 = 0;
    char ordinateur = '^';
    char couleur_aleatoire ;
    printf("L'ordinateur va choisir une couleur\n");
    couleur_aleatoire ='A'+rand()%7;
    printf("L'ordinateur a choisi : %c \n", couleur_aleatoire );
    bool changed = true;
     while (changed  == true )
              {
                changed = false;
                for (int i =0; i<30; i++)
                    {
                        for (int j = 29; j>0; j--)
                            {
                                if ( mondeCarre[i][j] == ordinateur)
                                    {    
                                        if ( j+1 <=  29 && mondeCarre[i][j+1] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i][j+1] = ordinateur;
                                                    changed = changed | true;
                                                    compteur_1 ++;
                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] ==  couleur_aleatoire ) 
                                                { 
                                                    mondeCarre[i][j-1] = ordinateur;
                                                    changed = changed | true;
                                                    compteur_2 ++;
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i-1][j] = ordinateur;
                                                    changed = changed | true;
                                                    compteur_3 ++;
                                                }
                                        if (i+1 <= 29 && mondeCarre[i+1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i+1][j] = ordinateur;
                                                    changed = changed | true;
                                                    compteur_4 ++;
                                                }
                                        else 
                                                {
                                                    changed =  false;
                                                    
                                                }
                                    
                                    } 
                            }
                    }
            }
            
            cpt = compteur_1 + compteur_2 + compteur_3 + compteur_4; 
            cpt = (cpt / 900)*100;
            printf("%f\n", cpt);
}
