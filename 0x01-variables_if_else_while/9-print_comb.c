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
		if (w == 9)
			putchar(w + '0');
		else
		{
			putchar(w + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
