#include "main.h"
#include <string.h>
/**
 * create_file - this is a function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: integer.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int textlength;
	int w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	textlength = strlen(text_content);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	w = write(fd, text_content, textlength);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);


}
