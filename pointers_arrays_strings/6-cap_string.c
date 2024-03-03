#include "main.h"
#include <stdio.h>

/**
* cap_string - Capitalizes all words of a string
* @str: The string to capitalize
*
* Return: Pointer to the resulting string
*/
char *cap_string(char *str)
{
	int i = 0;

	int new_word = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (new_word)
			{
				str[i] -= 32;
				new_word = 0;
			}
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
				str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			new_word = 1;
		}
		else
		{
			new_word = 0;
		}

		i++;
	}

	return (str);
}
