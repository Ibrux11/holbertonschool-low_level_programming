#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char *c;

	int *i;

	float *f;

	double *d;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	i = malloc_checked(sizeof(int) * 402);
	printf("%p\n", (void *)i);
	f = malloc_checked(sizeof(float) * 100000000);
	printf("%p\n", (void *)f);
	d = malloc_checked(INT_MAX);
	printf("%p\n", (void *)d);
	free(c);
	free(i);
	free(f);
	free(d);
	return (0);
}
concat_len = s1_len + n;

	concat = malloc(sizeof(char) * (concat_len + 1));
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
