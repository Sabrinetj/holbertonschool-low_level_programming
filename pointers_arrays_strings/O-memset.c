#include "main.h"

/**
  * _memset - Fill memory with a constant byte
  * @s: memory area to fill
  * @b: constant byte to fill
  * @n: bytes of memory area to fill
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
/* ptr ==> Starting address of memory to be filled*/
/* b==> Value to be filled*/
/* n ==> Number of bytes to be filled starting*/
/*         *s  to be filled*/
	unsigned int i;

/* Parcourir chaque octet de la zone mémoire*/
	for (i = 0; i < n; i++)

/* Remplir l'octet courant avec la valeur @b*/
		s[i] = b;
	return (s);
}
