# include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "affiche.h"
#include "init.h"
#include "aleatoire.h"
#include "jouer_un_coup.h"

int main(int argc, int *argv[])
{
    const int dim = 10;
    
    char mondeCarre[dim][dim] ;
    
    init (mondeCarre, dim);
    
    aleatoire(mondeCarre, dim);
    jouer_un_coup(mondeCarre, dim);
    
    affiche (mondeCarre, dim);
    return 0;
}

