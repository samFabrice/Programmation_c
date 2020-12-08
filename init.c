# include <stdlib.h>
#include <stdio.h>

void init(char mondeCarre[10][10], int dim)
{
    for (int i =0; i<dim; i++)
    {
        for (int j =0; j<dim; j++)
        {
            mondeCarre[i][j] = 0;
        } 
    }
}
