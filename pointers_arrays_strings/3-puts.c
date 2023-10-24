#include "main.h"
/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: A pointer to the string to be printed
 * Return: void
 * Description: This function prints the provided string to stdout,
 * followed by a new line character
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
