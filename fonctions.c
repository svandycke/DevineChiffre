/*!\file window.c
 *
 * \brief Jeu : Devine un chiffre
 *
 * \author Steve VANDYCKE, svandycke@gmail.com
 * \date October 25 2016
 */

/*!\brief Effectue un tirage au sort
 * \param max Valeur maximum du chiffre aléatoire.
*/
int tirage_aleatoire(int max){
   	srand ( time(NULL) );
	int nombre_aleatoire = rand()%(max+1);    
	return nombre_aleatoire;
}
