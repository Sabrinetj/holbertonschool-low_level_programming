#include "main.h"

/**
 * print_rev - Affiche une chaîne à l'envers, suivie d'une nouvelle ligne.
 * @s: Pointeur vers la chaîne à afficher à l'envers.
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;
	
	while (s[length] != '\0')
	{
        length++;
	}
	
	for ( i = length - 1; i >= 0; i--)
	{
	       	_putchar(s[i]);
	}
	
	_putchar('\n');
}
