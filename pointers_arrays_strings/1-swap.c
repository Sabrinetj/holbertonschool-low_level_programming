#include "main.h"
/**
 * swap_int - This function swaps the values of two integers
 * @a: pointer to in int
 * @b: ponter yo in int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

