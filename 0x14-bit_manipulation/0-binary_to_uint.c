#include "main.h"
/**
 * binary_to_uint - converts a binary to unsigned int.
 * @b: cont character variable.
 * Return: integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int c;
	unsigned int length;

	if (b == NULL)
		return (0);
	c = 0;
	length = 0;

	for (; b[length] != '\0'; length++)
		;

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
	return (c);


}
