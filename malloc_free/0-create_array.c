#include <stdlib.h>
#include "main.h"
/**
* create_array - Creates an array of chars and initializes it with a specific char.
* @size: The size of the array to be created.
* @c: The character to initialize the array with.
*
* Return: If size = 0, returns NULL.
*         If memory allocation fails, returns NULL.
*         Otherwise, returns a pointer to the created array.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array;

	array = (char *)malloc(size * sizeof(char));
	if (array == (NULL))
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

