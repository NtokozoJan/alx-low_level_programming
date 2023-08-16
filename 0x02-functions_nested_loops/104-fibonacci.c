#include <stdio.h>

/**
 * main -  program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int a;
	unsigned long int prev = 1;
	unsigned long int futu = 2;
	unsigned long int b = 1000000000;
	unsigned long int prev1;
	unsigned long int prev2;
	unsigned long int futu1;
	unsigned long int futu2;

	printf("%lu", prev);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", futu);
		futu += prev;
		prev = futu - prev;
	}
	prev1 = (prev / b);
	prev2 = (prev % b);
	futu1 = (futu / b);
	futu2 = (futu % b);

	for (a = 92; a < 99; ++a)
	{
		printf(",%lu", futu1 + (futu2 / b));
		printf("%lu", futu2 % b);
		futu1 = futu1 + prev1;
		prev1 = futu1 - prev1;
		futu2 = futu2 + prev2;
		prev2 = futu2 - prev2;
	}
	printf("\n");
	return (0);
}
