#include "main.h"
#include <stdio.h>

/**
 * main - fizzbuzz
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%i", a);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}