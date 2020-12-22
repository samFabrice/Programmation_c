#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "alea.h"
/*
void ordinateur (char mondeCarre[30][30] , int dim, float cpt)
{
    char joueur_alea ;
    //joueur_alea  = alea(mondeCarre, dim, cpt); 
    joueur_alea = '$';
    printf("joueur_alea = %c \n", joueur_alea);
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
                                if ( mondeCarre[i][j] == joueur_alea )
                                    {    
                                        if ( j+1 <=  29 && mondeCarre[i][j+1] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i][j+1] = joueur_alea ;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] ==  couleur_aleatoire ) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur_alea ;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i-1][j] = joueur_alea ;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if (i+1 <= 29 && mondeCarre[i+1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i+1][j] = joueur_alea ;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        else 
                                                {
                                                    changed =  false;
                                                    
                                                }
                                    
                                    } 
                            }
                    }
            }
            
            cpt = (cpt / 900)*100;
            printf("%f\n", cpt);
}
*/



void ordinateur (char mondeCarre[30][30] , int dim, float cpt)
{
    char joueur_alea ;
    //joueur_alea  = alea(mondeCarre, dim, cpt); 
    joueur_alea = '$';
    //printf("joueur_alea = %c \n", joueur_alea);
    char couleur_aleatoire ;
    /*printf("L'ordinateur va choisir une couleur\n");
    couleur_aleatoire ='A'+rand()%7;
    printf("L'ordinateur a choisi : %c \n", couleur_aleatoire );*/
    bool changed = true;
     while (changed  == true )
              {
                changed = false;
                for (int i =0; i<30; i++)
                    {
                        for (int j = 29; j>0; j--)
                            {
                                if ( mondeCarre[i][j] == joueur_alea )
                                    {    
                                        if ( j+1 <=  29 && mondeCarre[i][j+1] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i][j+1] = joueur_alea ;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] ==  couleur_aleatoire ) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur_alea ;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i-1][j] = joueur_alea ;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if (i+1 <= 29 && mondeCarre[i+1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i+1][j] = joueur_alea ;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        else 
                                                {
                                                    changed =  false;
                                                    
                                                }
                                    
                                    } 
                            }
                    }
            }
            
            cpt = (cpt / 900)*100;
            printf("%f\n", cpt);
}
