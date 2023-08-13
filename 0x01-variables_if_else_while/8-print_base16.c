#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int s;
	char m;

	for (s = 0 ; s < 10 ; s++)
		putchar(s + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
