#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int a;
	unsigned long int b, c, after, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		after = b + c;
		b = c;
		c = after;
	}
	printf("%lu\n", sum);
	return (0);
}
