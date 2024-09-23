/*
Pourquoi utiliser un pointeur ?
lorsqu'on passe un variable en parametre, on a une copie dans la memoire qui se creer
hors avec une copie de l'adresse on peut acceder à la valeur original.
C'est comme copier une boite et ce qu'il y a dedans, si l'on remplace on remplace la copie,
Avec un pointeur on vient donner l'emplacement de la boite, en allant la chercher on va modifier la valeur original
*/

#include <stdio.h>

void	modif_var(int nb)
{
	nb = 10;
	printf("on a modifier la valeur en local : %d\n", nb);
}

void	modif_ptr(int *p_nb)
{
	*p_nb = 10; // valeur associer a l'adresse de nb = 10
	printf("on a modifier la valeur en local : %d\n", *p_nb);
}

int	main()
{
	int	nb1;
	int	nb2;
	
	nb1 = 0;
	nb2 = 5;
	printf("Valeur avant changement : nb1 : %d - nb2 : %d\n", nb1, nb2);
	modif_var(nb1);
	modif_ptr(&nb2);
	printf("Valeur apres changement : nb1 : %d - nb2 : %d\n", nb1, nb2);
	return (0);
}
