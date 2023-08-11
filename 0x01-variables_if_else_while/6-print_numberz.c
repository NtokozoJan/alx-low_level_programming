#include <stdio.h>
/**
 * main - main function
 *Return: always 0
 */
int main(void)
{
	int m;

	for (m = 0 ; m < 10 ; m++)
		putchar(m + '0');
	putchar('\n');
	return (0);
}
