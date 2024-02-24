#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: reference number
 *
 * Return: n % 10 if n >= 0
 *        -n if n < 0
 */

int print_last_digit(int n)

{
	int ld = n % 10;

	if (ld < 0)
		ld = ld * (-1);
	_putchar(ld + '0');

	return (ld);
}
