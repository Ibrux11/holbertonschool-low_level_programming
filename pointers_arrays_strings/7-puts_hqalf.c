#include "main.h"
#include <stdio.h>

/**
* puts2 - Print every other character of a string, starting with the first
* @str: String to print
*/

void puts_half(char *str)
{
	char *str[];
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	b = a  / 2;

	for (int i = b; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}

}
