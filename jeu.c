#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "affiche.h"
#include "init.h"
#include "aleatoire.h"
#include "jouer_un_coup.h"
#include "joueur_contre_joueur.h"
#include "ordinateur.h"

int main()
{
    const int dim = 10;
    
    char mondeCarre[dim][dim] ;
    int i = 0;
    
    jouer_un_coup(mondeCarre, dim);
    
    
    return 0;
}

