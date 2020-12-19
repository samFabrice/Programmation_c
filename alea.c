#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char alea (char mondeCarre[30][30],  int dim , float cpt)
{
    cpt = 0;
    char ordinateur;
    ordinateur = '#' +rand()%2;
    printf("L'ordinateur a joué %c\n", ordinateur);
    return ordinateur;
}
