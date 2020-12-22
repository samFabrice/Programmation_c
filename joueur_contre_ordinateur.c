#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "affiche.h"
#include "init.h"
#include "joueur_1.h"
#include "joueur_2.h"
#include "aleatoire.h"
#include "ordinateur.h"
#include "alea2.h"
#include <time.h>
#include <unistd.h>



void joueur_contre_ordinateur (char mondeCarre[30][30] , int dim, float cpt)  
{
     init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim, cpt);
     printf("\n");
     int i = 0;
     while (i<10)
     {
     printf("Le joueur_1 va jouer en premier\n");
     joueur_1(mondeCarre, dim, cpt);
     sleep(1.5);
     printf("C'est au tour de l'ordinateur \n");
    // while(getchar()!='\n');//vider le buffer
     alea2(mondeCarre, dim, cpt);
     sleep(1.5);
     printf("\n");
     affiche(mondeCarre, dim, cpt)  ;
     i++;
     }
}
