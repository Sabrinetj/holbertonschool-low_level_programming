#include  "main.h"
/**
* _puts_recursion - fonction print a string
* followed by a new line
* @s : print a string
* Retour : nothing
*/
void  _puts_recursion ( char  * s )
{
	if ( * s  ==  '\0' )
	{
		_putchar ( '\n' );
		retourn  ;
	}
	_putchar ( * s );
	s ++ ;
	_puts_recursion ( s );
}
