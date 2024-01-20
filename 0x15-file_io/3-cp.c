#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * error_checker - checks if there is an error in any of the files.
 * @file1: source file.
 * @file2: destination file.
 * @argv: argument vector.
 * Return: void.
 */
void error_checker(int file1, int file2, char *argv[])
{
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

}

/**
 * error_cases - its job is to close the files open in cases of no errors.
 * @file: this is the file that is to be closed.
 * Return: void.
 */
void error_cases(int file)
{
	int a;

	a = close(file);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
}


/**
 * create_buff - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buff(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}


/**
 * main - main function.
 * @argc: arg count.
 * @argv: arg vector.
 * Return: integer.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t nchars, nwr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_checker(file_from, file_to, argv);

	buffer = create_buff(argv[2]);
	nchars = 1;
	while (nchars > 0)
	{
		nchars = read(file_from, buffer, 1024);
		if (nchars == -1)
		{
			error_checker(-1, file_to, argv);
			free(buffer);
		}
		nwr = write(file_to, buffer, nchars);
		if (nwr == -1)
		{
			error_checker(file_from, -1, argv);
			free(buffer);
		}
	}
	free(buffer);
	error_cases(file_from);
	error_cases(file_to);
	return (0);
}
