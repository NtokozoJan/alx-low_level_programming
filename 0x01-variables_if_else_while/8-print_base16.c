#include <stdio.h>
/**
 *main  - main function
 *Return: always 0
 */
int main(void)
{
	char s;

	for (s = 'z' ; s >= 'a' ; s--)
		putchar(s);
	putchar('\n');
	return (0);
}
