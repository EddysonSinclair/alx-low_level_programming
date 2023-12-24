#include "main.h"
/**
 * binary_to_uint - converts a binary to unsigned int.
 * @b: cont character variable.
 * Return: integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned long int i;
	unsigned long int c = 0;
	unsigned long int length = strlen(b);
	unsigned long int *array = malloc(length * sizeof(unsigned long int));

	if (b == NULL)
		return (0);

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			free(array);
			return (0);
		}

		array[i] = b[i] - '0';
	}

	for (i = 0; i < length; i++)
	{
		c = c * 2 + (b[i] - '0');
	}
	free(array);
	return ((unsigned int)c);


}
