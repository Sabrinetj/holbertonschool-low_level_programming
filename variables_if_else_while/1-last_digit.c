#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print the last digit and compare it to 5
 *
 * Return: 0
 */
int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (mod > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	}
	else if ((mod < 5) && (mod != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	}
	else
		printf("Last digit of %d is %d and is 0\n", n, mod);
	return (0);
}
