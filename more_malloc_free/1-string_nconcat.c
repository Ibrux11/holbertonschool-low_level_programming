#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes of s2 to concatenate.
*
* Return: The concatenated string, or NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, concat_len = 0;

	char *concat, *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	concat_len = s1_len + n;
	*concat = malloc(sizeof(char) * (concat_len + 1));
	if (concat == NULL)
		return (NULL);

	ptr = concat;

	while (*s1)
		*ptr++ = *s1++;
	while (n-- > 0)
		*ptr++ = *s2++;
	*ptr = '\0';

	return (concat);
}
