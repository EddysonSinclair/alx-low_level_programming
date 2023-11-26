#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars.
 * @size: size of the array
 * @c: storage char
 *
 * return - a pointer to the array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
