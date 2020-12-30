#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int x (char *tab , int taille)
{
    /*
     Cette fonction permet de compter le nombre de fois qu'une couleur apparait dans le tableau et renvoie au la couleur au joueur_glouton qui le joue afin d'avoir la chance de coloniser 
     le plus de case
     */
    int a  = 0 ; int b = 0 ; int c=0 ; int  d=0 ; int e=0 ; int f=0 ; int g=0 ;
    char A ='A'; char B = 'B' ; char C = 'C' ; char D = 'D' ; char E = 'E' ; char F ='F' ; char G = 'G' ;
    for (int  i=0 ; i< taille; i++ )
    {
        if (tab[a] =='A') a++ ;
        if (tab[b] == 'B')  b++ ;
        if (tab[c] == 'C') c++ ;
        if (tab[d] == 'D') d++ ;
        if (tab[e] == 'E') e++ ;
        if (tab[f] == 'F') f++ ;
        if (tab[g] == 'G')  g++ ;
    }
    printf("% d \n", a);

    printf("% d \n", b);

    printf("% d \n", c);

    printf("% d \n", d);

    printf("% d \n", e);

    printf("% d \n", f);

    printf("% d \n", g);
    
    
        if ((a>=b && a>=c && a>=d &&  a>=e && a>=f && a>=g)  ) return 'A';
        
        if (b>=a && b>=c && b>=d &&  b>=e && b>=f && b>=g  ) return 'B';
        
        if (c>=a && c>=b && c>=d &&  c>=e && c>=f && c>=g  ) return 'C';
        
        if (d>=a && d>=b &&  d>=c && d>=e && d>=f && d>=g  ) return 'D';
        
        if ( e>=a && e>=b && e>=c  &&  e>=d && e>=f && e>=g  ) return 'E';
        
        if (f>=a && f>=b && f>=c && f>=d &&  f>=e  && f>=g  ) return 'F';
        
        if (g>=a && g>=b && g>=c && g>=d &&  g>=e && g>=f ) return 'G';

}
