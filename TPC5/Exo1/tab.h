#pragma once
#include<stdio.h>
#include<stdlib.h>

//Déclaration des fonctions et constantes:

#define TAB2SIZE 100
#define TAILLEAJOUT 50

int initTab(int* tab, int size);

int afficheTab(int* tab, int size, int nbElts);

int* ajoutElementDansTableau(int* tab, int* size, int* nbElts, int element);


