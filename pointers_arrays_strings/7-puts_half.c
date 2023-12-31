#include "main.h"
/**
 * puts_half - function that prints the second half of the string
 * @str: the string to be treated
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, ln = 0;

	while (str[ln] != '\0')
	{
		ln++;
	}
	if ((ln % 2) == 0)
	{
		for (i = ln / 2; i < ln; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (ln + 1) / 2; i < ln; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
