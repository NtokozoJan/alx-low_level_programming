#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @a: character checked
 * Return: Returns 1 if c is lowercase or Returns 0 otherwise
 */

int _islower(int a)
{
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	return (0);
}
