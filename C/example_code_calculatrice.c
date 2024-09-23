#include <stdio.h>

int main() {
	int nb1;
	int nb2;
	char operation;
	char continued;
	do {
	printf("Quel est votre premier nombre ?\n");
	scanf("%d", &nb1);
	printf("Quelle operation voulez vous effectuer ?\n");
	scanf(" %c", &operation);
	printf("Quel est votre deuxieme nombre ?\n");
	scanf("%d", &nb2);
	switch (operation) {
		case '+' : printf("%d + %d = %d\n", nb1, nb2, (nb1 + nb2)); break;
		case '-' : printf("%d - %d = %d\n", nb1, nb2, (nb1 - nb2)); break;
		case '*' : printf("%d * %d = %d\n", nb1, nb2, (nb1 * nb2)); break;
		case '/' : printf("%d / %d = %d\n", nb1, nb2, (nb1 / nb2)); break;
		default : printf("error");}
	printf("Souhaitez vous continuer ? (y or n)");
	scanf(" %c", &continued);
	} while (continued == 'y');
	return 0;
}
