#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @a: string
 * Return: 0
 */

void print_rev(char *a)
{
	int start = 0;

	while (a[start])
		start++;
	while (start--)
		_putchar(a[start]);
	_putchar('\n');
}
