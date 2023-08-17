#include <stdio.h>

/**
 * main - Comment out code that is causing output to go into an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*
	 * while (i < 10)
	 *{
	 *	putchar(a);
	 *}
	 */

	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
