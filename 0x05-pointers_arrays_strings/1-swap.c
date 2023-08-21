#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: stores b
 * @b: stores a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
