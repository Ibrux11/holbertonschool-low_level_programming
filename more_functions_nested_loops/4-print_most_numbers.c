#include "main.h"

/**
* print_most_numbers - imprime les nombres de 0 à 9, sauf 2 et 4
*/

void print_most_numbers(void)

{
	char digit;

	digit = '0';
	while (digit <= '9')
	{
		if (digit != '2' && digit != '4')
			_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
