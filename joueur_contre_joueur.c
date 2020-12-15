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


void joueur_contre_joueur (char mondeCarre[30][30] , int dim, float cpt)  
{
     float cpt1 = 0; float cpt2 = 0;
     init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim, cpt);
     int i = 0;
     while (i<2)
     {
     printf("Le joueur_1 va jouer en premier\n");
     joueur_1(mondeCarre, dim, cpt1);
     printf("C'est au tour du joueur_2 \n");
     joueur_2(mondeCarre, dim, cpt2);
     affiche(mondeCarre, dim, cpt);
     i++;
     }
     if (cpt1 > cpt2)      printf("Le joueur_1 est vainqueur de la partie\n ");
      
     else if  (cpt2 > cpt1)   printf("Le joueur_2 est vainqueur de la partie\n");
     
     else                     printf("Il n'y a pas de vainqueur \n!!!");
     
    
     
}


