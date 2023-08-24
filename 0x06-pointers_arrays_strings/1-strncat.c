#include "main.h"

/**
 * *_strncat -  function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, b;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++, length_of_string++)
	{
		dest[length_of_string] = src[b];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
