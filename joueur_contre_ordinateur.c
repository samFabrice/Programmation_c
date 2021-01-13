#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "affiche.h"
#include "init.h"
#include "joueur_1.h"
#include "joueur_2.h"
#include "aleatoire.h"
#include "ordinateur.h"
#include "joueur_glouton.h"
#include "alea2.h"
#include <time.h>
#include <unistd.h>
#include "joueur_glouton_prevoyant.h"



void joueur_contre_ordinateur (char mondeCarre[30][30] , int dim)  
{
     init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim);
     printf("\n");
    
     // Ces lignes de codes suivantes permettent de tester la stratégie de l'aléa contre un joueur
     int i = 0;
     while (i<10)
     {
     glouton_prevoyant(mondeCarre, dim);
     //sleep(1.5);
     //printf("C'est au tour du joueur aléatoire \n");
     alea2(mondeCarre, dim);
     //sleep(1.5);
     //printf("\n");
     //affiche(mondeCarre, dim)  ;
     i++;
     }
    
     affiche(mondeCarre, dim)  ;
     
}
