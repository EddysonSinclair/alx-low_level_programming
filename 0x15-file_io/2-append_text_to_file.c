#include "main.h"
/**
 *  append_text_to_file - it appends a text at the end of the file.
 *  @filename: name of the file.
 *  @text_content: terminated string to add at the end of the file.
 *  Return: integer.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int txtlenght;
	int w;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (txtlenght = 0; text_content[txtlenght]; txtlenght++)
			;
		w = write(fd, text_content, txtlenght);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);

}
