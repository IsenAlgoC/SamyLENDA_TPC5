#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

int main() {
	
	// Première partie: Tableau à taille fixée

	int MyTab1[10];

	// Deuxième partie (1): Fonction avec passage d'un tableau en argument

	int* MyTab2 = NULL;
	int nbElts = 0;
	int size = TAB2SIZE;
	MyTab2 = (int*)malloc(TAB2SIZE * sizeof(int)); //On crée le tableau dynamique MyTab2

	//Initialisation à 0
	if (MyTab2 != NULL) {
		initTab(MyTab2, TAB2SIZE);	//On applique initTab sur le tableau dynamique MyTab2
	}
	else {

		return -1;                  //Si MyTab2 vaut NULL on retourne -1
	}

	//Remplissage des 20 premiers éléments

	for (int i = 0; i < 20; i++) {
		MyTab2[i] = i + 1;
	}

	afficheTab(MyTab2, TAB2SIZE, 20); //On affiche les 20 premiers éléments avec la fonction afficheTab

	free(MyTab2);                     //On détruit le tableau

	return(EXIT_SUCCESS);
}