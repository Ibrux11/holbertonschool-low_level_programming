#include "main.h"
#include <stdio.h>

/**
* puts2 - Print every other character of a string, starting with the first
* @str: String to print
*/
void puts2(char *str)
{
	int i;


	if (str == NULL)
		return;



	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
	{

		_putchar(str[i]);
	}


	_putchar('\n');
}

