#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src
 * @dest: string
 * @src: string
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}
