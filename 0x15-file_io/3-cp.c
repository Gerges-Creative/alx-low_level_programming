#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(int exit_code, const char *format, ...);

/**
 * main - Entry point of the file copy program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on successful execution, appropriate exit code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to\n");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n",
				     argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
		       | S_IRGRP | S_IROTH);
	if (file_to == -1)
		print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			print_error_and_exit(99, "Error: Can't write to %s\n",
					     argv[2]);
	}

	if (bytes_read == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n",
				     argv[1]);

	if (close(file_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n",
				     file_from);

	if (close(file_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n",
				     file_to);

	return (0);
}

/**
 * print_error_and_exit - Print formatted error messages and exit the program
 * @exit_code: Exit code to use when terminating the program
 * @format: Format string for the error message
 * @...: Additional arguments for formatting the error message
 */
void print_error_and_exit(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}
