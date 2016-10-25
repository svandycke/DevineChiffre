/*!\file fonctions.h
 *
 * \brief Jeu : Devine un chiffre
 *
 * \author Steve VANDYCKE, svandycke@gmail.com
 * \date October 25 2016
 */

#include <time.h>

/* Prototypes des fonctions statiques contenues dans le fichier "fonctions.c"*/
int tirage_aleatoire(int max);
int verifie_chiffre(int chiffre, int chiffre_secret, int nb_coups, int chiffre_trouve, int meilleur_score);
int recupere_meilleur_score(void);
void afficher_meilleur_score(int meilleur_score);
void verifie_meilleur_score(int meilleur_score, int nb_coups);
