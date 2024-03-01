#include <stdio.h>
#include "main.h"

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
		putchar(str[i]);
	}
	putchar('\n');
}

