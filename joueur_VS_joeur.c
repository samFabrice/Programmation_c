#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "affiche.h"

joueur_contre_joueur (char mondeCarre[][10] , int dim)
{
    char couleur, joueur1 , joueur2;
    joueur2 = "@";
    joueur1 = "^";
    bool changed = true;
    
    if (joueur1 == ^)
    {
        while (getchar() != "\n");
        while (changed = true)
            {
                changed = false;
                for (int i =0; i<dim; i++)
                    {
                        for (int j =9; j>=0; j--)
                            {
                                if ( mondeCarre[i][j] == joueur1)
                                    {    
                                        if ( j+1 <=  9 && mondeCarre[i][j+1] == couleur)  
                                                {
                                                    mondeCarre[i][j+1] = joueur1;
                                                    changed = true;
                      
                                                }
                                        else if ( j-1 >= 0 && mondeCarre[i][j-1] == couleur) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur1;
                                                    changed = true;
                                                }
                                        else if (i-1 >= 0 && mondeCarre[i-1][j] == couleur)  
                                                {
                                                    mondeCarre[i-1][j] = joueur1;
                                                changed = true;
                                                }
                                        else 
                                                {
                                                    changed = false;
                                                }
                                    
                                    } 
                            }
                    }
            } 
    
    }
    
    
    
    if (joueur2 == @)
    {
        while (getchar() != "\n");
        while (changed = true)
            {
                changed = false;
                for (int i =0; i<dim; i++)
                    {
                        for (int j =9; j>=0; j--)
                            {
                                if ( mondeCarre[i][j] == joueur2)
                                    {    
                                        if ( j+1 <=  9 && mondeCarre[i][j+1] == couleur)  
                                                {
                                                    mondeCarre[i][j+1] = joueur2;
                                                    changed = true;
                                                }
                                        else if ( j-1 >= 0 && mondeCarre[i][j-1] == couleur) 
                                                { 
                                                    mondeCarre[i][j-1] = joueur2;
                                                    changed = true;
                                                }
                                        else if (i-1 >= 0 && mondeCarre[i-1][j] == couleur)  
                                                {
                                                    mondeCarre[i-1][j] = joueur2;
                                                    changed = true;
                                                }
                                        else 
                                                {
                                                    changed = false;
                                                }
                                    
                                    } 
                            }
                    }
            } 
    
    }
    
    affiche (mondeCarre, dim);
}

