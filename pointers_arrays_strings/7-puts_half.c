#include <stdio.h>
#include "main.h"
/**
*	puts_half - function that prints half of a string, followed by a new line.
*	@str: The string to print the second half of.
*/

void puts_half(char *str)
{
	int length = 0;
	int start_index;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length + 1) / 2;

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

