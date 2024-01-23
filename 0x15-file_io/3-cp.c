#include "main.h"
#define BUF_SIZE 1024
/**
 * error98_checker - checks if there is an error in any of the files.
 * @file1: source file.
 * @buffer: buffer size.
 * @argv: argument vector.
 * Return: void.
 */
void error98_checker(int file1, char *buffer, char *argv)
{
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
 * error99_checker - checks if there is an error in any of the files.
 * @file2: source file.
 * @buffer: buffer size.
 * @argv: argument vector.
 * Return: void.
 */


void error99_checker(int file2, char *buffer, char *argv)
{
	if (file2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv);
		free(buffer);
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

	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t nchars, nwr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = (char *) malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", buffer);
		exit(99);
	}

	file_from = open(argv[1], O_RDONLY);
	error98_checker(file_from, buffer, argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error99_checker(file_to, buffer, argv[2]);

	while (nwr >= BUF_SIZE)
	{
		nchars = read(file_from, buffer, BUF_SIZE);
		if (nchars == 0)
			break;
		error98_checker(nchars, buffer, argv[1]);
		nwr = write(file_to, buffer, nchars);
		error99_checker(file_to, buffer, argv[2]);
	}
	error_cases(file_from);
	error_cases(file_to);
	free(buffer);
	return (0);
}
