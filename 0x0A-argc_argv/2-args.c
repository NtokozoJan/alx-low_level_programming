#include "main.h"
#include <stdio.h>

/**
 * main - function that gets executed when the program starts running
 * @argc: number of command-line arguments passed to the program
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
