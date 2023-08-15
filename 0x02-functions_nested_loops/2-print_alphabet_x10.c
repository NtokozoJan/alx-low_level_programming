#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return:void
 */

void print_alphabet_x10(void)
{
	char ap;
	int a;

	a = 0;
	while (a < 10)
	{
		for (ap = 'a'; ap <= 'z'; ap++)
		{
			_putchar(ap);
		}
		_putchar('\n');
		a++;
	}
}
