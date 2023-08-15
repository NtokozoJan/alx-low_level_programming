#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, new line
 * @nu: number
 * Return: separated by a comma, followed by a space
 * Returns:  printed in order
 * Returnss: first printed number should be the number passed to your function
 * Returnsss: last printed number should be 98
 */

void print_to_98(int nu)
{
	if (nu <= 98)
	{
		for (; nu <= 98; nu++)
		{
			if (nu == 98)
			{
				printf("%d", nu);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", nu);
			}
		}
	}
	else
	{
		for (; nu >= 98; nu--)
		{
			if (nu == 98)
			{
				printf("%d", nu);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", nu);
			}
		}
	}
}
