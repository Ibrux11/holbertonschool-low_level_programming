#include"main.h"
#include <stdio.h>
/**
 * _strcat -  function that concatenates two strings.
 * @src: parameter to a src
 * @dest: parameter to append
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
