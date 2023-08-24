#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @f1: first string
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *f1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (f1[counter] == s2[counter] && f1[counter] != '\0')
	{
		counter++;
	}
	compare_value = f1[counter] - s2[counter];
	return (compare_value);
}
