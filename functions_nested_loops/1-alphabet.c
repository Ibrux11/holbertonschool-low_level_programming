#include "main.h"
#include <unistd.h>

/**
*  main - Prints the alphabet lowercase followed by a new line
*  Return: Always 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}


