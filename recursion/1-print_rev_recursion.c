#include  "main.h"
/**
* _print_rev_recursion - fonction qui
* imprime une chaîne à l'envers
* @s : la chaîne à imprimer à l'envers
* Retour : une chaîne inversée
*/
void  _print_rev_recursion ( char  * s )
{
	if ( * s  ==  '\0' )
		return ;
	_print_rev_recursion ( s  +  1 );
	_putchar ( s [ 0 ]);
}
