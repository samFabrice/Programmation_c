#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "affiche.h"
#include "affiche.h"
#include "init.h"
#include "joueur_1.h"
#include "joueur_2.h"
#include "aleatoire.h"

void jouer_un_coup (char mondeCarre[10][10] , int dim)  
{
     init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim);
     printf("Le joueur_1 va jouer en premier\n");
     joueur_1(mondeCarre, dim);
     sleep(1);
     printf("C'est au tour du joeur_2\n");
     joueur_2(mondeCarre, dim);
     affiche(mondeCarre, dim);
}


