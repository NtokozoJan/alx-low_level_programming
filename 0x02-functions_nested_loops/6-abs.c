#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: number
 * Return: absolute value of an integer
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
