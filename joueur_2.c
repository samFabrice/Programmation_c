#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void joueur_2 (char mondeCarre[30][30] , int dim, float cpt)
{
    
    float compteur_1 , compteur_3 , compteur_2, compteur_4 = 0;
    char joueur_2 = '^';
    char couleur;
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
                                                    compteur_1 ++;
                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] == couleur) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur_2;
                                                    changed = changed | true;
                                                    compteur_2 ++;
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] == couleur)  
                                                {
                                                    mondeCarre[i-1][j] = joueur_2;
                                                    changed = changed | true;
                                                    compteur_3 ++;
                                                }
                                        if (i+1 <= 29 && mondeCarre[i+1][j] == couleur)  
                                                {
                                                    mondeCarre[i+1][j] = joueur_2;
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
           cpt = (cpt /900)*100;
           printf("%f\n", cpt);
           
}
