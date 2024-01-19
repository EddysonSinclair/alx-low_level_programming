#include "main.h"
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
