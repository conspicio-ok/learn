/*
Un pointeur est une variable qui contient l'adresse d'une autre variable
on rentrouve deux signe quand on les utilises : &, *
&var -> donne l'adresse de la variable var
*var -> donne la valeur du pointeur var

C'est normal, c'est complique, faut apprendre plusieurs fois pour comprendre le principe
*/

#include <stdio.h>

int	main()
{
	int	a;
	int	*p_a; // on utilise * lors de la création pour dire que c'est un pointeur de int

	a = 5;
	p_a = &a;
	printf("Il existe une variable a qui a pour valeur : %d\n", a);
	printf("Cette variable à une adrresse dans la mémoire : %p, stocké dans p_a : %p\n", &a, p_a);
	return (0);
}

