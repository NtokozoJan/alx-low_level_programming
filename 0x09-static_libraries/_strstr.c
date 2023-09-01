#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: The pointer to the beginning of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
