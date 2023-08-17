#include "main.h"

/**
 * largest_number - program prints the largest of three integers
 * Return: largest integer
 * @a: first int
 * @b: second int
 * @c: third int
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}
	return (largest);
}
