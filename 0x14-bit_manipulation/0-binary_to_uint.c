#include "main.h"
/**
 * binary_to_uint - converts a binary to unsigned int.
 * @b: cont character variable.
 * Return: integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int c, j, power;
	unsigned int length;

	c = 0;
	power = 1;
	if (b == NULL)
		return (0);
	c = 0;
	length = 0;
	if (b == NULL)
		return (0);
	for (length = 0; b[len] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = length - 1; j > 0; j--)
		{
			power = power * 2;
			c = c + (power * (b[i] - 48));
			length--;
			power = 1;
		}
	}
	return (c);


}
