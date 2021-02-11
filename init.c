# include <stdlib.h>
#include <stdio.h>

/// Avec un valeur spécifiable par l'utilisateur.
/// init(monde, 30, 1)
/// void init(char mondeCarre[30][30], int dim) =>  dim = 35 => crash mondeCarre[30][30]

/// void init(char** mondeCarre, int dim) => on laisse la dimmension au choix
/// void init(char mondeCarre[30][30]) => pas besoin de dimenssion qui contient 30.

/// #define DIM 30 => dim, 30 => DIM.
/// void init(char mondeCarre[DIM][DIM]) => pas besoin de dimenssion qui contient 30.
void init(char mondeCarre[30][30], int dim, int defaultValue)
{
    for (int i =0; i<dim; i++)
    {
        for (int j =0; j<dim; j++)
        {
            mondeCarre[i][j] = defaultValue;
        } 
    }
}
