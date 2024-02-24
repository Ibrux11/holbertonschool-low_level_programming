#include "main.h"

/**
 * _islower - Checks for a lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)

{
if ('a' <= c && c <= 'z')
	return (1);


else
	return (0);

}
