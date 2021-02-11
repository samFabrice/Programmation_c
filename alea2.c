#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "alea.h"
#include <time.h>
#include <unistd.h>
/*
 Cette fonction joue  un joueur artificiel en choisissant à chaque tour une couleur
aléatoirement mais parmi les couleurs qui peuvent ajouter des cases à sa zone.
 */

char testcase(char mondeCarre[30][30], int i, int j, char symbol)
{
    if ( (j+1 <=  29 && mondeCarre[i][j+1] ==  symbol )
         || (j-1 >= 0 && mondeCarre[i][j-1] ==  symbol)
         || (i+1 <= 29 && mondeCarre[i+1][j] == symbol )
         || (i-1 >= 0 && mondeCarre[i-1][j] ==  symbol) )
        return symbol;
    return 100;
}

///
/// partie affichage: printf("joueur_alea = %c \n", joueur_alea);
/// partie calcul: score = alea2(mondeCarre, 30, '@')
/// partie affichage: printf("score_joueur_alea = %f\n", score);
/// si on te demande faire une version graphique...
///  => refait que la partie affichage.
int alea2 (char mondeCarre[30][30],  int dim , char joueur_alea)
{
    char couleur_aleatoire;

    /// ? bizzare ça m'intrigue.
    /// taille de 1000... remplis avec 8 valeurs ?
    char tab[1000] = {0,0,0,0,0,0,0,0}; // On initialise un tableau dans lequel on stoque les couleurs qui qui peuvent ajouter des cases à la zone du joueur

    /// memset(tab, 1000, 0);
    int o = 0;

    /// Valeur codée en dur, n'utilise pas dim.
    for (int i =0; i<30; i++)
    {
        /// Valeur codée en dur, n'utilise pas dim.
        for (int j = 0; j<30; j++)
        {
            /// Le joueur est il à un ou plusieur endroit ?...
            /// Joueur ne peut être qu'à un seule ndroit à la fois (un seul @ sur tout la grille pendant la partie)
            ///     => tab[8]  (on comprend pas tab[1000]... mais on comprend mieux {0,0,0,0,0,0})
            ///     => il faut un break pour sortir dès qu'on l'a trouvé
            /// Joueur peut être à plusieurs endroits (plusieur @ dans toute la grille)
            ///     => tab[1000] le calcul de la dimmension va pas être facile...
            ///        => il faut que tu document ton code pour expliquer comment tu as calculé la taille max
            ///        => nombre de case: dim * dim  => tab[1000] <--> tab[dim*dim].
            ///        => tab[ taille( nombre(@) ) ) ?
            if ( mondeCarre[i][j] == joueur_alea )
            {
                char retcode = testcase(mondeCarre, i, j, joueur_alea);
                if(retcode != 100)
                    tab[o++] = retcode;
            }
        }
    }

    srand(time(NULL));

    /// Ceci est un commentaire
    //ceci est un code commenté (c'est mal de laisser ça sur le dépot => github)
    int a = 0;
    a =  (rand() % (o - 0 )) + 0;
    couleur_aleatoire = tab[a];
    printf("***** = %d\n ", a);
    printf("Le joueur aleatoire a joue %c\n",couleur_aleatoire);

    bool changed = true;
    while (changed  == true )
    {
        changed = false;
        for (int i =0; i<30; i++)
        {
            for (int j =0; j<30; j++)
            {
                if ( mondeCarre[i][j] == joueur_alea)
                {
                    if ( j+1 <=  29 && mondeCarre[i][j+1] == couleur_aleatoire)
                    {
                        mondeCarre[i][j+1] = joueur_alea;
                        changed = changed | true;
                    }
                    if ( j-1 >= 0 && mondeCarre[i][j-1] == couleur_aleatoire)
                    {
                        mondeCarre[i][j-1] = joueur_alea;
                        changed = changed | true;

                    }
                    if (i-1 >= 0 && mondeCarre[i-1][j] == couleur_aleatoire)
                    {
                        mondeCarre[i-1][j] = joueur_alea;
                        changed = changed | true;

                    }
                    if (i+1 <= 29 && mondeCarre[i+1][j] ==couleur_aleatoire)
                    {
                        mondeCarre[i+1][j] = joueur_alea;
                        changed = changed | true;
                    }
                    else
                    {
                        changed =  false;
                    }
                }
            }
        }
    }

    float score_joueur_alea = 0;
    int i,j;
    for (i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++){
            if (mondeCarre[i][j] == joueur_alea)
                score_joueur_alea ++;
        }
    }
    score_joueur_alea = (score_joueur_alea/900)*100;
    return score_joueur_alea;
}
