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



void joueur1_VS_joueur_glouton (char mondeCarre[30][30] , int dim)  
{
     init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim);
     printf("\n");
    
     // Ces lignes de codes suivantes permettent de tester la stratégie de l'aléa contre un joueur
     int i = 0;
     while (getchar()!='\n');
     while (i<10)
     {
      joueur_1(mondeCarre, dim);
      sleep(1.5);
      printf("C'est au tour du joueur_glouton \n");
      glouton(mondeCarre, dim);
      sleep(1.5);
      printf("\n");
      affiche(mondeCarre, dim)  ;
      i++;
     }
     
}
