#include "main.h"

/**
 *   islower - Checks for a lowercase caracter
 *	 Return: Always 0.
 */

int _islower(int c)

{
if ('a' <= c && c <= 'z')
	return (1);


else
	return (0);

}
