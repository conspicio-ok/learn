#include <stdio.h>

int main () {
	int nombreEntier;
	float nombreDecimal = 9.98;
	char caractere;

	nombreEntier = 42;
	caractere = 'a' ;
	printf("nE = %d\n", nombreEntier);	
	printf("nD = %f\n", nombreDecimal);
	printf("c = %c\n", caractere);
	printf("suite : %d, %f, %c\n", nombreEntier, nombreDecimal, caractere);
	return 0;
}
