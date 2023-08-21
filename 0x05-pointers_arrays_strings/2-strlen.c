#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @a: checked
 * Return: 0
 */

int _strlen(char *a)
{
	int string_length = 0;

	while (a[string_length])
		string_length++;
	return (string_length);
}
