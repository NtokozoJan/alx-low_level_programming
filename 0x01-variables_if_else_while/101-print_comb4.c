#include <stdio.h>

/**
 * main - main function
 *Return: always 0
 */

int main(void)
{
	int t = '0';
	int g = '0';
	int d = '0';

	for (d = '0'; d <= '9'; d++)
	{
		for (g = '0'; g <= '9'; g++)
		{
			for (t = '0'; t <= '9'; t++)
			{
				if (!((t == g) || (g == d) || (g > t) || (d > g)))
				{
					putchar(d);
					putchar(g);
					putchar(t);
					if (!(t == '9' && d == '7' && g == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
