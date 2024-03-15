#include <stdlib.h>

/**
 * str_len - Calculates the length of a string
 * @str: The string to calculate the length of
 *
 * Return: The length of the string
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concatenate
 *
 * Return: The concatenated string
 */
char *string_nconcat(char *s1, char *s2, int n)
{
	int len1 = str_len(s1);
	int len2 = str_len(s2);
	int total_len = (len2 < n) ? len1 + len2 : len1 + n;

	char *concat = malloc(total_len + 1);
	if (concat == NULL)
	{
		return (NULL);
	}

	int i, j;
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';

	return (concat);
}
