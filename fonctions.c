/*!\file fonctions.c
 *
 * \brief Jeu : Devine un chiffre
 *
 * \author Steve VANDYCKE, svandycke@gmail.com
 * \date October 25 2016
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

#define CARACT_MAX 50

/*!\brief Effectue un tirage au sort
 * \param max Valeur maximum du chiffre aléatoire.
*/
int tirage_aleatoire(int max){
   	srand ( time(NULL) );
	int nombre_aleatoire = rand()%(max+1);    
	return nombre_aleatoire;
}

/*!\brief Vérifie le chiffre saisi
 * \param chiffre Valeur du chiffre saisi
 * \param chiffre_secret Valeur du chiffre secret à trouver
 * \param nb_coups Nombre de coups joués
 * \param chiffre_trouve Flag qui indique si le chiffre est trouvé 
 * \param meilleur_score Meilleur score
*/
int verifie_chiffre(int chiffre, int chiffre_secret, int nb_coups, int chiffre_trouve, int meilleur_score){
 	if(chiffre_secret == chiffre){
		printf("Bravo ! Nombre de coups : %d \n\n", nb_coups);
		verifie_meilleur_score(meilleur_score, nb_coups);
		chiffre_trouve = 1;	
	}else if(chiffre_secret < chiffre){
		printf("Plus petit \n\n");
		chiffre_trouve = 0;	
	}else if(chiffre_secret > chiffre){
		printf("Plus grand \n\n");
		chiffre_trouve = 0;	
	}
	return chiffre_trouve; 	
}

/*!\brief Récupère le meilleur score */
int recupere_meilleur_score(void){
	int score[1] = {0}; 
	FILE* bestScore = NULL;

	/*!\brief Ouverture du fichier*/
    bestScore = fopen("bestScore.txt", "r+");	
	if (bestScore != NULL)
    {	
		fscanf(bestScore, "%d", &score[0]);
       	fclose(bestScore);
    }else{
		printf("Erreur du chargement du meilleur score \n\n");
	}	 	
	return score[0]; 	
}

/*!\brief Afficher le meilleur score
\param meilleur_score Meilleur score
*/
void afficher_meilleur_score(int meilleur_score){
	printf("****************************************** \n");
    printf("Meilleur score : %d \n", meilleur_score);
	printf("****************************************** \n\n");
 	
}

/*!\brief Vérifier le meilleur score 
\param meilleur_score Meilleur score
\param nb_coups Nombre de coups
*/
void verifie_meilleur_score(int meilleur_score, int nb_coups){
	
if(nb_coups < meilleur_score)
	{
		FILE* bestScore = NULL;
    	bestScore = fopen("bestScore.txt", "w");

		if (bestScore != NULL)
    	{
		fprintf(bestScore,"%d", nb_coups);
        	fclose(bestScore);
    	}
	}
}
