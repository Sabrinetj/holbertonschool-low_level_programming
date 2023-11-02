#include  "main.h"
/**
* factorielle - Cette fonction calcule le factorial d'un nombre donné.
* Vérifions si le nombre est négatif
* @n : le numéro pour rechercher sa factorielle
* Retour : resultat
*/
int factorial ( int  n )
{
	if ( n  <  0 )
		return ( -1 );
	if ( n  ==  0 )
		return ( 1 );
	return ( factorial ( n  -  1 ) *  n );
}
