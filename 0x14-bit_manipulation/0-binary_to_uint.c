#include "main.h"
/**
 * binary_to_uint - converts a binary to unsigned int.
 * @b: cont character variable.
 * Return: integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int c, length;

	length = 0;
	c = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		length++;
	for (i = 0; i < length; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		c += (b[i] - '0') * mypower(2, length - i - 1);

	}
	return (c);


}

/**
 * mypower - prints a number raised to power.
 * @base: this represents the base of num.
 * @exponent: this represents the exponential.
 * Return: integer
 */

int mypower(int base, int exponent)
{
	unsigned int result = 1;
	int i;

	if (exponent < 0)
	{
		base = 1 / base;
		exponent = -exponent;
	}

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}
