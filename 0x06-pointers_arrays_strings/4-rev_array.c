#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @b: elements
 * Return: 0
 */

void reverse_array(int *a, int *b)
{
	int temporary, counter;

	b = b - 1;
	counter = 0;
	while (counter <= b)
	{
		temporary = a[counter];
		a[counter++] = a[b];
		a[b--] = temporary;
	}
}
