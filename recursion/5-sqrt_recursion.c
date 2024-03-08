#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * @i: Initial value to start the search.
 * Return: The natural square root of n, or -1 if n does not have
 *			a natural square root.
 */
int find_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (find_sqrt(n, 1));
}
/**
 * find_sqrt - Auxilliary function to find the natural square root of a number.
 * @n: The number to find the square root of.
 * @i: Initial value to start the search.
 *
 * Return: The natural square root of n, or -1 if n does
 *			not have a natural square root.
 */

int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (find_sqrt(n, i + 1));
}



