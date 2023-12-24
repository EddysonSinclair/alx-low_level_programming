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
	unsigned long int length;

	if (b == NULL)
		return (0);

	length = strlen(b);

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (i = 0; i < length; i++)
	{
		c = c * 2 + (b[i] - '0');
	}
	return ((unsigned int)c);


}
