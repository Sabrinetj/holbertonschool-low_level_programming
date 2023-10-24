#include "main.h"
/**
 * _strlen - the function that returns the length of a string
 *@s: pointer caracter
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int lenght = 0;
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}
