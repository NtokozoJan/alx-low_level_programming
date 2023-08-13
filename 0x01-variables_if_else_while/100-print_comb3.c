#include <stdio.h>
/**
 * main - main function
 *Return: 0
 */
int main(void)
{
	int h = '0';
	int r = '0';

	for (r = '0'; r <= '9'; r++)
	{
		for (h = '0'; h <= '9'; h++)
		{
			if (!((h == r) || (r > h)))
			{
				putchar(r);
				putchar(h);
				if (!(h == '9' && r == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
