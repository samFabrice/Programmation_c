#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "affiche.h"
#include "init.h"
#include "aleatoire.h"
#include "joueur_contre_joueur.h"
#include "joueur_contre_ordinateur.h"
#include "ordinateur.h"
#include "alea.h"
#include "alea2.h"
#include "joueur_glouton.h"
#include "joueur_glouton_prevoyant.h"




int main()
{
        
    printf("Bonjour !!! Bienvenue dans le jeu des 7 couleurs\n");
      
    const int dim = 30; float cpt;
    
    char mondeCarre[dim][dim] ;
      init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim, cpt);
     int i = 0;
    while (i<5)
    {
    glouton_prevoyant(mondeCarre, dim, cpt); // Ici on teste la fonction joueur_contre ordinateur
    glouton(mondeCarre, dim, cpt);
    affiche(mondeCarre, dim, cpt);
    printf("\n");
    i++;
    }
     affiche(mondeCarre, dim, cpt);
     

    return 0;
}

