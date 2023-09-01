#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else
		{
			break;
		}

		s++;
	}

	return (num * sign);
}
