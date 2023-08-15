#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @nu: number checked
 * Return: 1 and prints + if n is greater than zero
 * Returns: 0 and prints 0 if n is zero
 * Returnss: -1 and prints - if n is less than zero
 */

int print_sign(int nu)
{
	if (nu > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (nu < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
