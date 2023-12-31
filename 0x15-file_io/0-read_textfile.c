#include "main.h"
/**
 * read_textfile -function that reads a text file.
 * and prints it to the POSIX standard output.
 *
 * @filename: name of the file.
 * @letters: number of letters to be printed.
 * Return: write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t w, r;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (w == -1 || w < 0)
		return (0);

	close(fd);
	free(buff);

	return (w);

}
