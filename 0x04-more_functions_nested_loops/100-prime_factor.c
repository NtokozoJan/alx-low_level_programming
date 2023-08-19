#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * Return: 0
 */

int main(void)
{
	unsigned long int a, b = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((b % a == 0) && (b != a))
			b = b / a;
	}
	printf("%lu\n", b);
	return (0);
}
