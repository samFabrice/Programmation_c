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

int main()
{
    float cpt1, cpt2, cpt =0;
    const int dim = 30;
    
    char mondeCarre[dim][dim] ;
    
    joueur_contre_joueur(mondeCarre, dim, cpt);
    
    
    return 0;
}

