#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void alea (char mondeCarre[30][30],  int dim , float cpt)
{
    char joueur_alea; 
    joueur_alea = '#' +rand()%2;
    if (joueur_alea == '#' )
    {
    printf("Le joueur aléatoire a jouer le joueur_1\n");
    char couleur_aleatoire ;
    couleur_aleatoire ='A'+rand()%7;
    printf("Le joueur aléatoire a choisit la couleur : %c \n", couleur_aleatoire );
    bool changed = true;
     while (changed  == true )
              {
                changed = false;
                for (int i =0; i<30; i++)
                    {
                        for (int j = 29; j>0; j--)
                            {
                                if ( mondeCarre[i][j] == joueur_alea)
                                    {    
                                        if ( j+1 <=  29 && mondeCarre[i][j+1] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i][j+1] = joueur_alea;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] ==  couleur_aleatoire ) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur_alea;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i-1][j] = joueur_alea;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if (i+1 <= 29 && mondeCarre[i+1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i+1][j] = joueur_alea;
                                                    changed = changed | true;
                                                    cpt++;
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
    
    if (joueur_alea == '$')
    {
    printf("Le joueur aléatoire a jouer le joueur_2\n");
    char couleur_aleatoire ;
    couleur_aleatoire ='A'+rand()%7;
    printf("Le joueur aléatoire a choisit la couleur : %c \n", couleur_aleatoire );
    bool changed = true;
     while (changed  == true )
              {
                changed = false;
                for (int i =0; i<30; i++)
                    {
                        for (int j = 29; j>0; j--)
                            {
                                if ( mondeCarre[i][j] == joueur_alea)
                                    {    
                                        if ( j+1 <=  29 && mondeCarre[i][j+1] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i][j+1] = joueur_alea;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if ( j-1 >= 0 && mondeCarre[i][j-1] ==  couleur_aleatoire ) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur_alea;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if (i-1 >= 0 && mondeCarre[i-1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i-1][j] = joueur_alea;
                                                    changed = changed | true;
                                                    cpt ++;
                                                }
                                        if (i+1 <= 29 && mondeCarre[i+1][j] ==  couleur_aleatoire )  
                                                {
                                                    mondeCarre[i+1][j] = joueur_alea;
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
}
