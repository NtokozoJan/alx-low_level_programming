#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @a: memory
 * @b: char
 * @c: copy
 * Return: a pointer to the memory area s
 */

char *_memset(char *a, char b, unsigned int c)
{
	unsigned int i;

	for (i = 0; i < c; i++)
	{
		a[i] = b;
	}
	return (a);
}
