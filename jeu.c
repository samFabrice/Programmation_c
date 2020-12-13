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
    const int dim = 10;
    
    char mondeCarre[dim][dim] ;
    
    joueur_contre_ordinateur(mondeCarre, dim);
    
    
    return 0;
}

