#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/// mondeCarre => 7... byte:
///   - choix d'encodage interne [0..7] != choix d'affichage [0 => 'a', 7=>'z']
void aleatoire(char mondeCarre[30][30], int dim)
{
    /// Ce code il est buggué... il ne remplis pas le tableau avec les caractères aléatoire
    /// que tu veux: de A à G
    //const char max = 072;  ///< 072 ? (décimal) 'G'
    //const char min = 0101; ///< 0101 ? (octale) 'A'
    srand(time(NULL));

    for (int i =0; i<dim; i++)
    {
        for (int j =0; j<dim; j++)
        {
            //mondeCarre[i][j] =  (rand() % (max - min )) + min;
            mondeCarre[i][j] =  rand() % 7;
        }
    }
    mondeCarre[0][29]= '8';
    mondeCarre[29][0] = '9';

}
