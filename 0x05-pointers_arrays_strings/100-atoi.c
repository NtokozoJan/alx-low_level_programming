#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: pointer
 * Return: 0
 */

int _atoi(char *s)
{
	int b = 0;
	unsigned int vw = 0;
	int qw = 1;
	int po = 0;

	while (s[b])
	{
		if (s[b] == 45)
		{
			qw *= -1;
		}
		while (s[b] >= 48 && s[b] <= 57)
		{
			po = 1;
			vw = (vw * 10) + (s[b] - '0');
			b++;
		}
		if (po == 1)
		{
			break;
		}
		b++;
	}
	vw *= qw;
	return (vw);
}
