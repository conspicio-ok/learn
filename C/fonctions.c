#include <stdio.h>

/*
type nom(parametre.s -> type nom, ...) {
	actions;
}
un parametre est une variable
*/

void print_pomme(char *str) {
	printf("%s", str);
}

int main() {
	print_pomme("pomme");
	return 0;
}
