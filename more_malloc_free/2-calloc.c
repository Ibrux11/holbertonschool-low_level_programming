#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* _calloc - Allocates memory for an array of elements.
* @nmemb: Number of elements.
* @size: Size of each element.
*
* Return: Pointer to the allocated memory, or NULL if allocation fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	unsigned int total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);


	for (unsigned int i = 0; i < total_size; ++i)

	{
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}
