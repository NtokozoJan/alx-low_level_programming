#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: The modified string.
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
				str[i - 1] == '\n' || str[i - 1] == ',' ||
				str[i - 1] == ';' || str[i - 1] == '.' ||
				str[i - 1] == '!' || str[i - 1] == '?' ||
				str[i - 1] == '"' || str[i - 1] == '(' ||
				str[i - 1] == ')' || str[i - 1] == '{' ||
				str[i - 1] == '}')
		{
			if (islower(str[i]))
				str[i] = toupper(str[i]);
		}
		else
		{
			if (isupper(str[i]))
				str[i] = tolower(str[i]);
		}
	}

	return (str);
}
