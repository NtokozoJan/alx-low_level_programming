#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @arg: The argument to print.
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - Prints an integer.
 * @arg: The argument to print.
 */
void print_int(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
 * print_float - Prints a float.
 * @arg: The argument to print.
 */
void print_float(va_list arg)
{
	float f = (float)va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_string - Prints a string.
 * @arg: The argument to print.
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything based on the format.
 * @format: The format string.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char format_specifier;

	va_start(args, format);

	while (format && format[i])
	{
		format_specifier = format[i];

		switch (format_specifier)
		{
			case 'c':
				print_char(args);
				break;
			case 'i':
				print_int(args);
				break;
			case 'f':
				print_float(args);
				break;
			case 's':
				print_string(args);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}

	va_end(args);
	printf("\n");
}
