#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "affiche.h"
#include "init.h"
#include "joueur_1.h"
#include "joueur_2.h"
#include "aleatoire.h"
#include "ordinateur.h"
#include "joueur_glouton.h"
#include "alea2.h"
#include <time.h>
#include <unistd.h>
#include "joueur_glouton_prevoyant.h"

/// Don't Repeat Yourself !
///
///
typedef double (*fonction_joueur)(char mondeCarre[30][30], char* idJoueur); ///< Cette ligne déclare un nouveau type de pointeur sur fonction.

/// un jeu qui prend en paramètre 2 pointeur sur fonction
void jeu_generique(char mondeCarre[30][30], int dim, fonction_joueur player1, fonction_joueur player2)
{
    char joueur1 = '@';
    char joueur2 = '^';

    float score1 = 0;
    float score2 = 0;
    init (mondeCarre, dim);
    aleatoire(mondeCarre, dim);
    affiche(mondeCarre, dim);
    printf("\n");

    // Ces lignes de codes suivantes permettent de tester la stratégie de l'aléa contre un joueur
    int i = 0;
    while (getchar()!='\n');
    while (i<20)
    {
        score1 = player1(mondeCarre, joueur1);
        sleep(1.5);
        printf("C'est au tour de l'ordinateur \n");
        score2 = player2(mondeCarre, joueur2);
        sleep(1.5);
        printf("\n");
        affiche(mondeCarre,dim)  ;
        i++;
    }

    if (score1 == score2)
        printf(" VOus avez fait match nul \n");
    else
        printf("Le joueur %s est le vainqueur !!!! \n ", (score1 < score2)? "joueur1":"joueur2");
}


void joueur2_Vs_joueur_glouton_prevoyant (char mondeCarre[30][30] , int dim)  
{       
    float score_glouton_prevoyant = 0;
    float score_joueur_2 = 0;
    init (mondeCarre, dim);
    aleatoire(mondeCarre, dim);
    affiche(mondeCarre, dim);
    printf("\n");
    
    // Ces lignes de codes suivantes permettent de tester la stratégie de l'aléa contre un joueur
    int i = 0;
    while (getchar()!='\n');
    while (i<20)
    {
        joueur_2(mondeCarre, dim, &score_joueur_2);
        sleep(1.5);
        printf("C'est au tour de l'ordinateur \n");
        glouton_prevoyant(mondeCarre, dim , &score_glouton_prevoyant);
        sleep(1.5);
        printf("\n");
        affiche(mondeCarre, dim)  ;
        i++;
    }

    if (score_joueur_2 > score_glouton_prevoyant) printf("Le joueur_2 est le vainqueur !!!! \n ");
    else if (score_joueur_2 < score_glouton_prevoyant) printf("le glouton prevoyant est le vainqueur !!!! \n ");
    else  printf(" VOus avez fait match nul \n");
}
