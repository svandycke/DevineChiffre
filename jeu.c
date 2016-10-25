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

	int valeur_saisie;
  	int chiffre_secret;
	int chiffre_trouve = 0;
	int nb_coups = 0;

	/*!\brief Tirrage du chiffre aléatoire.*/
    chiffre_secret = tirage_aleatoire(CHIFFRE_MAX);

    printf("Chiffre aléatoire : %d \n",chiffre_secret );

	printf("****************************************** \n");
	printf("Veuillez deviner le chiffre entre 0 et 100 \n");
	printf("****************************************** \n\n");

	while(!chiffre_trouve){
		nb_coups++;
		printf("Entrez un chiffre : ");
		scanf("%d", &valeur_saisie); 

		if(chiffre_secret == valeur_saisie){
			printf("Bravo ! Nombre de coups : %d \n\n", nb_coups);
			chiffre_trouve = 1;	
		}else if(chiffre_secret < valeur_saisie){
			printf("Plus petit \n\n");
			chiffre_trouve = 0;	
		}else if(chiffre_secret > valeur_saisie){
			printf("Plus grand \n\n");
			chiffre_trouve = 0;	
		}
	}
	
    return 0;
}
