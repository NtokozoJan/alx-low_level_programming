#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long int a, b, c, after;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; a++)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		} else
		{
			printf("%ld\n", b);
		}
		after = b + c;
		b = c;
		c = after;
	}
	return (0);
}
