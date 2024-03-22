#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_char - Prints a character.
* @args: A list of variadic arguments.
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
* print_integer - Prints an integer.
* @args: A list of variadic arguments.
*/
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
* print_float - Prints a float.
* @args: A list of variadic arguments.
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
* print_string - Prints a string.
* @args: A list of variadic arguments.
*/
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
* print_all - Prints anything.
* @format: A list of types of arguments.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s", sep);
			print_char(args);
			sep = ", ";
		}
		else if (format[i] == 'i')
		{
			printf("%s", sep);
			print_integer(args);
			sep = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s", sep);
			print_float(args);
			sep = ", ";
		}
		else if (format[i] == 's')
		{
			printf("%s", sep);
			print_string(args);
			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
