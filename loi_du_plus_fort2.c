#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int loi_du_plus_fort2(char *tab , int taille)
{
    /*
     Cette fonction permet de compter le nombre de fois qu'une couleur apparait dans le tableau et renvoie au la couleur au joueur_glouton qui le joue afin d'avoir la chance de coloniser 
     le plus de case
     */
    int a  = 0 ; int b = 0 ; int c=0 ; int  d=0 ; int e=0 ; int f=0 ; int g=0 ;
    char A ='A'; char B = 'B' ; char C = 'C' ; char D = 'D' ; char E = 'E' ; char F ='F' ; char G = 'G' ;
    for (int  i=0 ; i< taille; i++ )
    {
        if (tab[i] =='A')
        {
             a++ ;
             i++;
        }
      }
    
    
    for (int  i=0 ; i< taille; i++ )
    {
        if (tab[i] =='B')
        {
             b++ ;
             i++;
        }
      }
    

    for (int  i=0 ; i< taille; i++ )
    {
        if (tab[i] =='C')
        {
             c++ ;
             i++;
        }
      }

    for (int  i=0 ; i< taille; i++ )
    {
        if (tab[i] =='D')
        {
             d++ ;
             i++;
        }
      }    
    
    for (int  i=0 ; i< taille; i++ )
    {
        if (tab[i] =='E')
        {
             e++ ;
             i++;
        }
      }
      
    for (int  i=0 ; i< taille; i++ )
    {
        if (tab[i] =='F')
        {
             f++ ;
             i++;
        }
      }
    
        for (int  i=0 ; i< taille; i++ )
    {
        if (tab[i] =='G')
        {
             g++ ;
             i++;
        }
      }

  //  printf("a = %d, b = %d,c = %d, d = %d, e = %d, f = %d, g = %d \n", a,b,c,d,e,f,g);
 
        if ((a>=b && a>=c && a>=d &&  a>=e && a>=f && a>=g)  ) return 'A';
        
        if (b>=a && b>=c && b>=d &&  b>=e && b>=f && b>=g  ) return 'B';
        
        if (c>=a && c>=b && c>=d &&  c>=e && c>=f && c>=g  ) return 'C';
        
        if (d>=a && d>=b &&  d>=c && d>=e && d>=f && d>=g  ) return 'D';
        
        if ( e>=a && e>=b && e>=c  &&  e>=d && e>=f && e>=g  ) return 'E';
        
        if (f>=a && f>=b && f>=c && f>=d &&  f>=e  && f>=g  ) return 'F';
        
        if (g>=a && g>=b && g>=c && g>=d &&  g>=e && g>=f ) return 'G';
        
        a = 0; b = 0; c = 0; d = 0; e = 0; f = 0; g = 0;

                            
                         
                            

}
