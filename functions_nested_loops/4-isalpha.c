#include "main.h"

/**
* _isalpha - Checks for alphabetic character
* @c: The character to be checked
*
* Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
*/

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
