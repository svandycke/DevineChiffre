cmake_minimum_required (VERSION 2.6)

#Declaration du projet
project(Jeu)


# Déclaration de la lib
add_library(fonctions fonctions.c)
set (EXTRA_LIBS ${EXTRA_LIBS} fonctions)


#Déclaration de l'exécutable
add_executable(
	Jeu
	jeu.c
)
target_link_libraries (Jeu  ${EXTRA_LIBS})

