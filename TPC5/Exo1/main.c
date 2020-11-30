#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

int main() {
	
	// Premi�re partie: Tableau � taille fix�e

	int MyTab1[10];

	// Deuxi�me partie (1): Fonction avec passage d'un tableau en argument

	int* MyTab2 = NULL;
	int nbElts = 0;
	int size = TAB2SIZE;
	MyTab2 = (int*)malloc(TAB2SIZE * sizeof(int)); //On cr�e le tableau dynamique MyTab2

	//Initialisation � 0
	if (MyTab2 != NULL) {
		initTab(MyTab2, TAB2SIZE);	//On applique initTab sur le tableau dynamique MyTab2
	}
	else {

		return -1;                  //Si MyTab2 vaut NULL on retourne -1
	}

	//Remplissage des 20 premiers �l�ments

	for (int i = 0; i < 20; i++) {
		MyTab2[i] = i + 1;
	}

	afficheTab(MyTab2, TAB2SIZE, 20); //On affiche les 20 premiers �l�ments avec la fonction afficheTab

	free(MyTab2);                     //On d�truit le tableau

	return(EXIT_SUCCESS);
}