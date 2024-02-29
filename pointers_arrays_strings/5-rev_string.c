#include "main.h"
#include <stdio.h>

/**
* rev_string - Reverse a string
* @s: String to reverse
*/
void rev_string(char *s)
{
char str;
int count;
int size1;
int size2;


	for (size1 = 0 ; s[size1] != '\0' ; size1++)
	{
		size2 =	size1;
	}

	for (count = 0 ; count < size1 / 2 ; count++)
	{
		str = s[count];
		s[count] = s[size2];
		s[size2--] = str;
	}
}



