#include <stdio.h>

/**
 * main -  program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int a = 0;
	unsigned long int b = 0, c = 1, after = 0;

	while (a < 98)
	{
		after = b + c;
		b = c;
		c = after;
		printf("%lu", after);

		if (a < 97)
			printf(", ");
		a++;
	}
	_putchar('\n');
	return (0);
}
