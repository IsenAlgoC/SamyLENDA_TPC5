#include<stdio.h>
#include<stdlib.h>
#include"tab.h"


int main() {

	TABLEAU MyTab1; // création de MyTab1 de type TABLEAU

	// Tests des fonctions:

	MyTab1 = NewArray();
	printf("%d \n", MyTab1.size);
	incrementArraySize(&MyTab1, 2);
	printf("%d \n", MyTab1.size);
	setElement(&MyTab1, 6, 4);
	displayElements(&MyTab1, 1, 5);
}

