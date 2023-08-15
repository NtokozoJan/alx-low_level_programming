#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @a: character checked
 * Return: Returns 1 letter, lowercase or uppercase or Returns 0 otherwise
 */

int _isalpha(int a)
{
	if ((a >= 65 && a <= 97) || (a >= 97 && a <= 122))
	{
		return (1);
	}
	return (0);
}
