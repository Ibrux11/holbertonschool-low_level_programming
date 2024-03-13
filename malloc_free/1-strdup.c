#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - Duplicates a string
* @s: The string to duplicate
*
* Return: Pointer to the newly allocated space containing
*			the duplicated string
*/

char *_strdup(char *str)
{
	char *dup;

	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

