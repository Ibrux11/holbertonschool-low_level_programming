#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	char *str;

	char c;

	va_start(args, format);
	while (format && format[i])
	{
	c = format[i];
	switch (c)
	{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default:
				break;
	}
	if ((format[i + 1] != '\0') && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

