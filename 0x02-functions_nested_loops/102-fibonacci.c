#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int n;
	unsigned long fibon1 = 0, fibon2 = 1, sum;

	for (n = o; n < 50; n++)
	{
		sum = fibon1 + fibon2;
		printf("%lu", sum);

		fibon1 = fibon2;
		fibon2 = sum;

		if (n == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
