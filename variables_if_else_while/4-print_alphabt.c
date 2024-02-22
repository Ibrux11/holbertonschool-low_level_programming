#include <stdio.h>
/**
*  main - Prints the alphabet lowercase followed by a new line
*         except q and e.
*  Return: Always 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
