#include <stdio.h>

/**
 * print_array -  function that prints n elements of an array of integers
 * @a: array
 * @b: length
 */

void print_array(int *a, int b)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < b; index_of_array++)
	{
		printf("%d", a[index_of_array]);
		if (index_of_array != (b - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
