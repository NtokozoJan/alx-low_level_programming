#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to stderr
 * @message: The error message to be printed
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error("Can't read from file");
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		print_error("Can't write to file");
		dprintf(STDERR_FILENO, "Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Can't write to file");
			dprintf(STDERR_FILENO, "Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Can't read from file");
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) == -1)
	{
		print_error("Can't close fd");
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		print_error("Can't close fd");
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
