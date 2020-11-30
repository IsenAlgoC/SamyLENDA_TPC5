#pragma once
#include "tab.h"

//Question 1: on crée le tableau avec une taille initiale de donnée = TAILLEINITIALE

#define TAILLEINITIALE 100

TABLEAU NewArray() {

	int* elt = NULL;
	elt = (int*)malloc(sizeof(int) * TAILLEINITIALE);
	int size = TAILLEINITIALE;
	int eltsCount = 0;
	TABLEAU tableau = { elt,size,eltsCount };
	return tableau;
}

//Question 2: on modifie la taille du tableau

int incrementArraySize(TABLEAU * tab, int IncrementValue) {
	int* tmp;
	tab->size = tab->size + IncrementValue;		// on augmente la taille allouée du nombre d'éléments ajoutés
	tmp = (int*)realloc(tab->elt, tab->size * sizeof(int));
	tab->elt = tmp;
	if (tab->elt == NULL) {
		return -1;			            // retourne -1 si la reallocation est impossible
	}
	else {
		return tab->size;	            // retourne la nouvelle taille du tableau sinon
	}
}

//Question 3: Ecrit un élément à une position donnée sans insertion

int setElement(TABLEAU* tab, int pos, int Element) {
	if (pos > tab->size) {
		return 0;			            // retourne 0 si la position demandée est supérieure à la taille allouée au tableau
	}
	else if (pos > tab->eltsCount) {	// si la position demandée est supérieure à celle du dernier élement du tableau
		for (int i = tab->eltsCount; i < pos - 1; i++) {
			tab->elt[i] = 0;			// on ajoute des 0 entre le dernier élement et l'élement inseré
		}
		tab->elt[pos - 1] = Element;	// on écrit le nouvel élement à la position voulue
		return pos;					    // on retourne la position
	}
	else {								// si la position est celle d'un élement déjà connu
		tab->elt[pos - 1] = Element;	// on écrit le nouvel élément à la position voulue
		return pos;					    // on retourne la position
	}
}

//Question 4: Affiche une portion du tableau de l’indice début à l’indice fin

int displayElements(TABLEAU* tab, int StartPos, int EndPos) {
	if (StartPos<1 || EndPos>tab->size) {
		return 0;					    // retourne 0 si les indicateurs ne sont pas validés
	}
	else {							    // sinon on affiche les éléments du tableau entre l'indicateur de debut de fin
		for (int i = StartPos; i < EndPos; i++)
		{
			printf("%d ", (tab->elt)[i]);
		}
		printf("\n");
		return 1;					    // on retourne 1 en cas de réussite
	}
}

//Question 5: Supprime des éléments avec compactage du tableau

int deleteElements(TABLEAU* tab, int StartPos, int Endpos) {
	if (Endpos == tab->size) {			// si l'indicateur de fin est égal à la taille alouée au tableau
		tab->size = StartPos - 1;
		tab->eltsCount = tab->eltsCount;
	}
}

