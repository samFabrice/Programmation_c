#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

/// tab['A'] => encodage interne, contient les valeur de 0 à 7
int loi_du_plus_fort(char *tab , int taille)
{
    int comptage[8] = {0,0,0,0,0,0,0,0};
    for (int  i=0 ; i< taille; i++ )
        comptage[tab[i]]++;

    /// Trouver parmi les différents symboles (0,1,2,3 ou A,B,C, D, ...)
    /// dans quelle case il y a la plus grande valeur comptée
    int maxValue = 0 ;
    int maxIndex = -1;
    for (int i=0;i<8;i++)
    {
        if(maxValue < comptage[i])
        {
            maxValue = comptage[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}


int loi_du_plus_fort(char *tab , int taille)
{
    /*
     Cette fonction permet de compter le nombre de fois qu'une couleur apparait dans le tableau et renvoie au la couleur au joueur_glouton qui le joue afin d'avoir la chance de coloniser
     le plus de case
     */
    //int a  = 0 ; int b = 0 ; int c=0 ; int  d=0 ; int e=0 ; int f=0 ; int g=0 ;
    int comptage[8] = {0,0,0,0,0,0,0,0};
    for (int  i=0 ; i< taille; i++ )
        comptage[ tab[i]-'A' ]++;
        
    /// Trouver parmi les différents symboles (0,1,2,3 ou A,B,C, D, ...)
    /// dans quelle case il y a la plus grande valeur comptée
    int maxValue = 0 ;
    int maxIndex = -1;
    for (int i=0;i<8;i++)
    {
        if(maxValue < comptage[i])
        {
            maxValue = comptage[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}
