#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @a: string
 * @accept: bytes
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *a, char *accept)
{
	int index;

	while (*a)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*a == accept[index])
				return (a);
		}
		a++;
	}
	return ('\0');
}
