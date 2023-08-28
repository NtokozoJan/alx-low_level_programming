#include "main.h"

/**
 * *_memcpy -  function that copies memory area
 * @a: copies
 * @src: source
 * @dest: destination
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int a)
{
	unsigned int i = 0;

	while (i < a)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
