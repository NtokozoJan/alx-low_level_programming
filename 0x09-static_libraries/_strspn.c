#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s which consists
 * entirely of characters in accept
 * @s: The string to search
 * @accept: The string of characters to accept
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && _strchr(accept, *s))
	{
		count++;
		s++;
	}

	return (count);
}
