#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char alea (/*char mondeCarre[30][30],  int dim*/)
{
    /*
     Cette fonction permet de choisir de manière aléatoire l'une des 7 couleurs comprises entre A et G
    */
    char couleur_aleatoire;
    couleur_aleatoire  = 'A' +rand()%7;
    printf("L'ordinateur a joué %c\n", couleur_aleatoire);
    return couleur_aleatoire;
}

