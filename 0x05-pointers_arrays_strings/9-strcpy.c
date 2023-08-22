#include "main.h"
#include <string.h>

/**
 * *_strcpy -  function that copies the string pointed to by src
 * @dest: string
 * @src: string
 * Return: 0
 */

char *_strcpy(char *src, char *dest)
{
	int a = strlen(src);

	while (a != 0)
	{
		*dest++ = *src++;
		a--;
	}
	*dest = '\0';
	return (dest);
}
