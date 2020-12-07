# include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "affiche.h"
#include "init.h"
#include "aleatoire.h"
#include "jouer_un_coup.h"
// #include "joueur_contre_joueur.h"

int main(int argc, int *argv[])
{
    const int dim = 10;
    
    char mondeCarre[dim][dim] ;
    
    init (mondeCarre, dim);
    aleatoire(mondeCarre, dim);
    jouer_un_coup(mondeCarre, dim);
    return 0;
}

