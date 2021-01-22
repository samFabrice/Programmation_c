#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "affiche.h"

#include "init.h"
#include "aleatoire.h"
#include "joueur_contre_joueur.h"
#include "joueur_contre_ordinateur.h"
#include "ordinateur.h"
#include "alea.h"
#include "alea2.h"
#include "joueur_glouton.h"
#include "joueur_glouton_prevoyant.h"
#include "joueur1_VS_joueur_glouton.h"


int main()
{
  
    const int dim = 30;  
    char mondeCarre[dim][dim] ;
    init(mondeCarre, dim);
    aleatoire(mondeCarre, dim);
   
    printf("\n\n \033[44m   Bonjour !!! Bienvenue dans le merveilleux monde  des 7 couleurs\n"
                    "    ********************************************** *****************\n\n"
            );
            
            
printf(" \t \t =========================MENU================================ : \n");

printf("\n");
          
          int choixDeLaPartie;
    
          printf("\t \t ################# 1. joueur_contre_joueur           #########  \n");
          printf("\t \t ################# 2.joueur_contre_ordinateur        ######### \n");
          printf("\t \t ################# 3.joueur1_contre_joueur_glouton   ######### \n");
          printf("\t \t ################# 4.joueur_contre_aleatoire2        ######### \n");
          printf("\n");
          
          printf("\t \t Veuillez choir la partie que vous vous voulez jouer !!!!\n");
          scanf("%d", &choixDeLaPartie);
          printf("\n");
  
  switch (choixDeLaPartie)
  {
    case 1:
       printf("\t \t \t Vous avez choisi la partie joueur_contre_joueur :o) \n");
       printf("\n");
       printf("\t \t \t \t  Etat actuel du monde !!! \n");
       printf("\n");
       joueur_contre_joueur ( mondeCarre , dim);
       break;
    case 2:
       printf("\t \t \t Vous avez choisi la partie joueur_contre_ordinateur :o) \n");
       printf("\n");
       printf("\t \t \t \t  Etat actuel du monde !!! \n");
       printf("\n");
       joueur2_contre_ordinateur(mondeCarre, dim);
       break;
    case 3:
       printf("\t \t Vous avez choisi la partie joueur1_contre_joueur_glouton :o) \n");
       printf("\n");
       printf("\t \t \t \t  Etat actuel du monde !!! \n");
       printf("\n");
       joueur1_VS_joueur_glouton(mondeCarre, dim);       
       
       break;
    case 4:
       printf("Vous avez choisi la partie  joueur_contre_aleatoire2  :o)");
       
       break;
    default:
       printf("Vous n'avez pas rentré un nombre correct. Désolé mais pas de jeu pour vous  :o)");
       break;
  }
  
  printf("\n\n");
    
    
    
    //glouton_prevoyant(mondeCarre, dim);
    
   // printf("\n");
    // affiche(mondeCarre, dim);

    return 0;
}
