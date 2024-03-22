#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_char - prints a character
* @args: the list of arguments
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
* print_integer - prints an integer
* @args: the list of arguments
*/
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
* print_float - prints a float
* @args: the list of arguments
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
* print_string - prints a string
* @args: the list of arguments
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
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";

	unsigned int i = 0, j = 0;

	print_t print[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (print[j].specifier)
		{
			if (format[i] == print[j].specifier[0])
			{
				printf("%s", separator);
				print[j].printer(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
