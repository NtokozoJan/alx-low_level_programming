#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *Return: always 0
 */
int main(void)
{
	int u, e;

	for (u = 0; u < 100; u++)
	{
		for (e = 0; e < 100; e++)
		{
			if (u < e)
			{
				putchar((u / 10) + 48);
				putchar((u % 10) + 48);
				putchar(' ');
				putchar((e / 10) + 48);
				putchar((e % 10) + 48);
				if (u != 98 || e != 99)
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
