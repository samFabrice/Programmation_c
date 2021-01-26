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



void joueur2_Vs_joueur_glouton_prevoyant (char mondeCarre[30][30] , int dim)  
{       
     float score_glouton_prevoyant = 0;
     float score_joueur_2 = 0;
     init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim);
     printf("\n");
    
     // Ces lignes de codes suivantes permettent de tester la stratégie de l'aléa contre un joueur
     int i = 0;
     while (getchar()!='\n');
     while (i<20)
     {
     joueur_2(mondeCarre, dim, &score_joueur_2);
      sleep(1.5);
      printf("C'est au tour de l'ordinateur \n");
      glouton_prevoyant(mondeCarre, dim , &score_glouton_prevoyant);
      sleep(1.5);
      printf("\n");
      affiche(mondeCarre, dim)  ;
      i++;
     }
          
     if (score_joueur_2 > score_glouton_prevoyant) printf("Le joueur_2 est le vainqueur !!!! \n ");
     else if (score_joueur_2 < score_glouton_prevoyant) printf("le glouton prevoyant est le vainqueur !!!! \n ");
     else  printf(" VOus avez fait match nul \n");
}
