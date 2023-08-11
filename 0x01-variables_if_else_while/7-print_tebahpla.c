#include <stdio.h>
/**
 * main - main function
 *Return: always 0
 */
int main(void)
{
	char f;

	for (f = 'z' ; f >= 'a' ; f++)
		putchar(f);
	putchar('\n');
	return (0);
}

