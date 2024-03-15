#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an tableau of chars, and
* initializes it with a specific char.
*@size: Size of the tableau
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to tableau if everything is normal.
*/
char *create_array(unsigned int size, char c)
{
	char *tableau;
	unsigned int i;

	if (size == 0)
	return (NULL);

	tableau = (char *)malloc(size * sizeof(char));
	if (tableau == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		tableau[i] = c;
	}

	return (tableau);
}
