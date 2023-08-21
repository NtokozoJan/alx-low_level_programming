#include <unistd.h>

/**
 * _putchar - character c
 * @c: print
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
