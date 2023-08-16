#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * Return: 0
 * @m: time table
 */

void print_times_table(int m)
{
	int a, b, c;

	if (m >= 0 && m <= 15)
	{
		for (a = 0; a <= m; a++)
		{
			for (b = 0; b <= m; b++)
			{
				c = b * a;
				if (b == 0)
				{
					_putchar(c + '0');
				} else if (c < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				} else if (c >= 10 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				} else if (c >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
