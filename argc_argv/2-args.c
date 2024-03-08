#include <stdio.h>

/**
* main - Entry point
* @argc: Number of command line arguments
* @argv: Array containing the command line arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

