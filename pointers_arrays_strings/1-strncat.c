#include "main.h"
/**
 * _strncat - a function that copies a string
 * @dest: pointer to char
 * @src: pointer to char
 * @n: input integer
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
