#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void joueur_2 (char mondeCarre[30][30] , int dim)
{
    
    char joueur_2 = '^';
    char couleur;
    printf("Le joueur_2  = ^ \n");
    printf("Le joueur_2 va choisir une couleur\n");
    scanf("%c", & couleur);
    printf("Le joueur_2 a choisi : %c \n", couleur);
    bool changed = true;
    while (getchar()!='\n');
     while (changed  == true )
              {
                changed = false;
                for (int i =0; i<30; i++)
                    {
                        for (int j =29; j>0; j--)
                            {
                                if ( mondeCarre[i][j] == joueur_2)
                                    {    
                                        if ( j+1 <=  29 && mondeCarre[i][j+1] == couleur)  
                                                {
                                                    mondeCarre[i][j+1] = joueur_2;
                                                    changed = changed | true;
                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] == couleur) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur_2;
                                                    changed = changed | true;
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] == couleur)  
                                                {
                                                    mondeCarre[i-1][j] = joueur_2;
                                                    changed = changed | true;
                                                }
                                        if (i+1 <= 29 && mondeCarre[i+1][j] == couleur)  
                                                {
                                                    mondeCarre[i+1][j] = joueur_2;
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
            
           
           
}
