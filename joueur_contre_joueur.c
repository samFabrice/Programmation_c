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


void joueur_contre_joueur (char mondeCarre[30][30] , int dim)  
{
    
     init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim);
     float score_joueur_1 = 0;
     float score2 = 0;
     int i = 0;
     while (getchar()!='\n');
     while (i<20)
     {
     joueur_2(mondeCarre, dim, &score2);
     printf("C'est au tour du joueur_1 \n");
     joueur_1(mondeCarre, dim,  &score_joueur_1);
     affiche(mondeCarre, dim);
     i++;
     }  
     if (score_joueur_1 > score2) printf("Le joueur_1 est le vainqueur !!!! \n ");
     else if (score_joueur_1 < score2) printf("Le joueur_2 est le vainqueur !!!! \n ");
     else  printf(" VOus avez fait match nul \n");
     
}


