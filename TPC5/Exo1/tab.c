#pragma once
#include<stdio.h>
#include<stdlib.h>
#include "tab.h"

//Question 1: Fonction initTab

int initTab(int* tab, int size) {
	
	if (tab == NULL || size < 0) {
		return -1;                        //On retourne -1 si le pointeur tab est NULL ou si la taille<0
	}
	for (int i = 0; i < size; i++) {
		*(tab + i) = 0;                   //Sinon on remplit le tableau avec des 0
	}
	return size;                          //Puis on retourne la taille du tableau
}

//Question 2: Fonction afficheTab

int afficheTab(int* tab, int size, int nbElts) {
	
	if (tab == NULL || size < 0 || nbElts < 0) {
		return -1;                        //On retourne -1 su le pointeur tab est NULL, si la taille<0 ou si taille<nbELts
	}

	printf("\nLes %d premiers elements du tableau sont :\n ", nbElts); 

	for (int i = 0; i < nbElts; i++)      //Sinon on exécute la boucle for
	{
		printf("%d\t", *(tab + i));       //On affiche la valeur à chaque itération 
	}
	return 0;                             //Puis on retourne 0
}

//Question 3: Fonction ajoutElementDansTableau

int* ajoutElementDansTableau(int* tab, int* size, int* nbElts, int element) {

	if (tab == NULL || *size < 0  || *size < *nbElts || *nbElts < 0) {
		return -1;                        //On retourne -1 su le pointeur tab est NULL, si la taille<0, si taille<nbELts ou si nbElts<0
	}
	
	if (*nbElts == *size) {
		int* tmp = (int*)realloc(tab, *size + TAILLEAJOUT); //*tmp est un pointeur temporaire
		
		if (tmp != NULL) { //si realloc marche 
			*(size) = *(size)+TAILLEAJOUT;
			*(tab + *nbElts) = element;
			*nbElts = *nbElts + 1;
		}

		if (tmp == NULL) { //Si realloc ne marche pas
			return -1;      //On retourne -1
		}

	}
	return tab;
}