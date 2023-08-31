#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	/* Base case: an empty string or a single character is a palindrome */
	if (len <= 1)
		return (1);

	/* Recursive case: check if the first and last characters are equal */
	if (s[0] == s[len - 1])
	{
		/* Call with the substring excluding the first and last characters */
		return (is_palindrome(s + 1) && is_palindrome(s + len - 1));
	}

	/* If the first and last characters are not equal, it's not a palindrome */
	return (0);
}
