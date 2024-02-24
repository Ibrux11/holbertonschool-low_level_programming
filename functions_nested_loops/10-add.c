#include <stdio.h>
#include "main.h"

int add(int a, int b);

int main(void)
{
	int result = add(5, 7);

	printf("Result: %d\n", result);

	return (0);
}

int add(int a, int b)
{

	return (a + b);
}
