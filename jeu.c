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




int main()
{
    
    const int dim = 30; float cpt;
    
    char mondeCarre[dim][dim] ;
      init (mondeCarre, dim);
     aleatoire(mondeCarre, dim);
     affiche(mondeCarre, dim, cpt);
     int i = 0;
    while (i<5)
    {
    glouton(mondeCarre, dim, cpt); // Ici on teste la fonction joueur_contre ordinateur
    i++;
    }
     affiche(mondeCarre, dim, cpt);
     
     /*
      * Printf("Bonjour !!! Bienvenue dans le jeu des 7 couleurs");
      * /
    return 0;
}

