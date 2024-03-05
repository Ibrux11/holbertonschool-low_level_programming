#include <stddef.h>
#include "main.h"


/*
*   char *_memset(char *s, char b, unsigned int n) - Function that
*	fills memory with a constant byte.
*   @param s: Pointer to the start of the memory area
*   @param b: Constant byte to fill the memory area with
*   @param n: Number of bytes to fill
*   @return s pointer to the start of the filled memory area
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{

		s[i] = b;
	}
	return (s);
}
