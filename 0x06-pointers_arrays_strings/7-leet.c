#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: The encoded string.
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char leetStr[256];

	while (str[i] != '\0')
	{
		leetStr[i] = str[i];

		if (str[i] == 'a' || str[i] == 'A')
			leetStr[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			leetStr[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			leetStr[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			leetStr[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			leetStr[i] = '1';

		i++;
	}

	while (j < i)
	{
		str[j] = leetStr[j];
		j++;
	}

	return (str);
}
