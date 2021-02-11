/// Utiliser un éditeur de code "pro" => qtcreator, visual studio code, sublime, atom avec les plugins.
/// Toujours avoir un code formaté => alignement...
///    dans les étuditeur "formatter le document" ou utiliser un outil extern astyle
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
#include "joueur2_VS_joueur_glouton_prevoyant.h"

int main()
{
    /// Laisse entendre qu'on peu changer la taille de la grille mais à cause des signatures de fonction et
    /// autres variables codée en dur '30' le programme ne marchera pas si on changait ça.
    /// => soit passer toutes les dimmension à une valeur fixe à la compilation
    ///     *) la valeur 30 partout
    ///     *) une macro DIM partout...et
    /// => soit passer toutes les dimmensions à l'éxécution (ça veut dire virer tous les 30 partout)
    const int dim = 30;
    char mondeCarre[dim][dim] ;

    /// initialize
    init(mondeCarre, dim);

    /// remplis avec valeur aléatoires
    aleatoire(mondeCarre, dim);

    /// tapper les code ansis c'est pas top... ça rend les choses pas très lisibles
    /// ... encodage
    /// ...
    /// char chaine1 = "<red>blabababababa</red>";
    /// printf( toAnsi(chaine1) );

    /// char chaine2 = "blabababababa";
    /// struct style { int debut, int fin, char* color};
    /// style1 = {debut = 0, fin = 5, color = red };
    /// style1 = {debut = 7, fin = 9, color = black };
    /// print( applyStyle(chaine2, [style1, style2, style3] ) )

    /// char* red = "\033[44m";
    /// char* black = "\033[30m";
    printf("\n\n %s                         Bonjour !!! Bienvenue dans le merveilleux monde  des 7 couleurs\n"
                    "                         ***************************************************************** %s\n\n"
            ,red, black);

    printf(" \t \t =================================MENU=======================================: \n");
    printf("\n");

    int choixDeLaPartie;
    printf("\t \t ################# 1.joueur_contre_joueur                         ########### \n");
    printf("\t \t ################# 2.joueur_contre_ordinateur                     ########### \n");
    printf("\t \t ################# 3.joueur1_contre_joueur_glouton                ########### \n");
    printf("\t \t ################# 4.joueur2_contre_joueur_glouton_prevoyant      ########### \n");
    printf("\n");

    printf("\t \t Veuillez choisir la partie que vous vous voulez jouer !!!!\n");
    scanf("%d" , &choixDeLaPartie);
    /// toto          tata
    /// |             |
    /// v             v
    /// 1 a d 0 0 0 p z a b q 0 0 0

    /// DRY: Don't Repeat Yourself.
    /// Dès que quelque chose est dupliquée plus de 2x, c'est qu'il faut ré-organiser le code.

    char* type_partie[4]=["joueur_contr_joueur", "joueur_contre_ordinateur", "choix3", "choix4"];
    printf("\t \t \t Vous avez choisi la partie %s :o) \n",type_partie[choixDeLaPartie]);
    printf("\n");
    printf("\t \t \t \t  Etat actuel du monde !!! \n");
    printf("\n");

    switch (choixDeLaPartie)
    {
    case 1:
        joueur_contre_joueur(mondeCarre, dim);
        break;
    case 2:
        joueur_contre_ordinateur(mondeCarre, dim);
        break;
    case 3:
        joueur_contre_choix3(mondeCarre, dim);
        break;
    case 4:
        joueur_contre_choix4(mondeCarre, dim);
        break;
    }
    printf("\n\n");
    return 0;
}
