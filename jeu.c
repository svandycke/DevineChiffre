/*!\file window.c
 *
 * \brief Jeu : Devine un chiffre
 *
 * \author Steve VANDYCKE, svandycke@gmail.com
 * \date October 25 2016
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

#define CHIFFRE_MAX 100

/*!\brief Initialisation et démarrage du jeu.*/
int main(void){

	int nb_coups = 0;
	int chiffre_trouve = 0;
	int valeur_saisie;
  	int chiffre_secret;

	int meilleur_score = 0;

	meilleur_score = recupere_meilleur_score();
	afficher_meilleur_score(meilleur_score);


	/*!\brief Tirrage du chiffre aléatoire.*/
    	chiffre_secret = tirage_aleatoire(CHIFFRE_MAX);

	printf("****************************************** \n");
	printf("Veuillez deviner le chiffre entre 0 et %d \n", CHIFFRE_MAX);
	printf("****************************************** \n\n");

	while(!chiffre_trouve){
		nb_coups++;
		printf("Entrez un chiffre : ");
		scanf("%d", &valeur_saisie); 
		chiffre_trouve = verifie_chiffre(valeur_saisie, chiffre_secret, nb_coups, chiffre_trouve, meilleur_score);	
	}	
    return 0;
}
