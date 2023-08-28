#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @a: string
 * @accept: measured
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *a, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*a)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*a == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		a++;
	}
	return (bytes);
}
