#include <stdio.h>

int main() {
	int nb1;
	int nb2;
	char operation;
	
	printf("Quel est votre premier nombre ?\n");
	scanf("%d", &nb1);
	printf("Quelle operation voulez vous effectuer ?\n");
	scanf("%c", operation);
	printf("Quel est votre deuxieme nombre ?\n");
	scanf("%d", &nb2);
	printf("%d, %c\n", operation, operation);
	return 0;
}
