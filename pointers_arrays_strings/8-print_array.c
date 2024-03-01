#include "main.h"
#include <stdio.h>
/**
 * print_array - Function takes an array of integers and its size as input,
 * then prints the elements of the array separated by commas.
 *
 * @a: A pointer to the array of integers
 * @n: The size of the array
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == 0)
			printf("%d", a[b]);
		else
			printf(", %d", a[b]);
	}
	printf("\n");
}

