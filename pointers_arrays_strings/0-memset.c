#include <stddef.h>
#include "main.h"


/*
*  char *_memset - Fills the first n bytes of the memory area pointed
*	to by s with the constant byte b.
*  @param s: Pointer to the start of the memory area
*   @param b: Constant byte to fill the memory area with
*   @param n: Number of bytes to fill
*   @return A pointer to the start of the filled memory area
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)
	{

		s[i] = b;
	}
	return (s);
}
