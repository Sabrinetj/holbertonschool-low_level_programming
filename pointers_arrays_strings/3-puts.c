#include "main.h"
/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: A pointer to the string to be printed
 *
 * Description: This function prints the provided string to stdout,
 * followed by a new line character.
 */
void _puts(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');
}
