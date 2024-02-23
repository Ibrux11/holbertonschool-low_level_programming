#include "main.h"
#include <unistd.h>

/**
*  main - Prints the alphabet lowercase followed by a new line
*  Return: Always 0
*/

void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}


