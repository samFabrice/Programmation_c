# include <stdlib.h>
#include <stdio.h>
#include <time.h>


void aleatoire(char mondeCarre[30][30], int dim)
{
    const char max = 072;
    const char min = 0101;
    srand(time(NULL));

    for (int i =0; i<dim; i++)
    {
        for (int j =0; j<dim; j++)
        {
            mondeCarre[i][j] =  (rand() % (max - min )) + min;
        } 
    }
    mondeCarre[0][29]= '$';
    mondeCarre[29][0] = '#';
    
    
}
