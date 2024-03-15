#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 * @s1: pointer to character
 * @s2: pointer to character
 * Return: pointer to string or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0, len = 0;
	char *str;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 != NULL)
	{
		return (s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		return (s1);
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	len = len1 + len2;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		str[i + j] = s2[j];
		j++;
	}

	str[len] = '\0';
	return (str);
}

