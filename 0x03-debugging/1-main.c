#include <stdio.h>

/**
 * main - Comment out code that is causing output to go into an infinite loop
 * Return: 0
 */

int main(void)
{
	int a;

	printf("Infinite loop incoming :(\n");

	a = 0;
	/*
	 * while (a < 10)
	 *{
	 *	putchar(a);
	 *}
	 */
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
