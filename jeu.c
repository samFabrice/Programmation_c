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



int main()
{
    const int dim = 30; float cpt;
    
    char mondeCarre[dim][dim] ;
    
    joueur_contre_ordinateur(mondeCarre, dim, cpt); // Ici on teste la fonction joueur_contre ordinateur
    
    
    
    return 0;
}

