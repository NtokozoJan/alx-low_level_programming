#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @a: string
 * @b: character
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *a, char b)
{
	int index;

	for (index = 0; a[index] >= '\0'; index++)
	{
		if (a[index] == b)
			return (a + index);
	}
	return ('\0');
}
