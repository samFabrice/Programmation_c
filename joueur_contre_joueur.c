#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "affiche.h"
#include "affiche.h"
#include "init.h"
#include "joueur_1.h"
#include "joueur_2.h"
#include "aleatoire.h"
#include "ordinateur.h"


void joueur_contre_joueur (char mondeCarre[10][10] , int dim)  
{
     init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim);
     printf("Le joueur_1 va jouer en premier\n");
     joueur_1(mondeCarre, dim);
     printf("C'est au tour du joeur_2 \n");
     joueur_2(mondeCarre, dim);
     affiche(mondeCarre, dim);
}


