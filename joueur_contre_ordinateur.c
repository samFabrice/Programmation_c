#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "affiche.h"
#include "init.h"
#include "joueur_1.h"
#include "joueur_2.h"
#include "aleatoire.h"
#include "ordinateur.h"


void joueur_contre_ordinateur (char mondeCarre[30][30] , int dim, float cpt)  
{
     init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim, cpt);
     printf("Le joueur_1 va jouer en premier\n");
     joueur_1(mondeCarre, dim, cpt);
     printf("%f\n",cpt);
     printf("C'est au tour de l'ordinateur \n");
     ordinateur(mondeCarre, dim, cpt);
     printf("%f\n",cpt);
     affiche(mondeCarre, dim, cpt)  ;
}
