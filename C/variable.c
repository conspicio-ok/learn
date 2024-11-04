#include <stdio.h>

// constante : #define NAME VALUE
#define TAILLE 10

int main () {
	int nombreEntier;
	float nombreDecimal = 9.98;
	char caractere;
	char chaine_caractere[6] = "pomme"; // chaine de caractere de 6
	// char *chaine_de_caracere; // autre maniere de la definir

	nombreEntier = 42;
	caractere = 'a' ;
	printf("nE = %d\n", nombreEntier);	
	printf("nD = %f\n", nombreDecimal);
	printf("c = %c\n", caractere);
	printf("s = %s\n", chaine_caractere);
	printf("suite : %d, %f, %c\n", nombreEntier, nombreDecimal, caractere);
	printf("const : %d\n", TAILLE);
	return 0;
}
