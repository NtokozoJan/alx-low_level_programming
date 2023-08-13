#include <stdio.h>
/**
 * main - main function
 *Return: always 0
 */
int main(void)
{
	int w;

	for (w = 0 ; w < 10 ; w++)
	{
		putchar(w + '0');
		if (w != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
