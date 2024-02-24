#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - Print all integers from n until 98
 * @n: first number to display
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n < 98 ? n++ : n--;
	}
	printf("%d\n", n);
}
