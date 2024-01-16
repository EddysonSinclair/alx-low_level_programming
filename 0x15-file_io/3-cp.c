#include "main.h"
#include <stdio.h>
/**
 * error_checker - checks if there is an error in any of the files
 * @file_from: source file
 * @file_to: destination file
 * @argv: argument vector.
 * Return: void
 */
void error_checker(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

}


/**
 * main - main function.
 * @argc: arg count
 * @argv: arg vector
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, error_case;
	ssize_t nchars, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_checker(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buff, 1024);
		if (nchars == -1)
			error_checker(-1, 0, argv);
		nwr = write(file_to, buff, 1024);
		if (nwr == -1)
			error_checker(0, -1, argv);
	}

	error_case = close(file_from);
	if (error_case == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_case = close(file_to);
	if (error_case == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);

}