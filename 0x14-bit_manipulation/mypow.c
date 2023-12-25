#include "main.h"
/**
 * mypower - prints a number raised to power.
 * @base: this represents the base of num.
 * @exponent: this represents the exponential.
 * Return: integer
 */
int mypower(int base, int exponent)
{
	unsigned int result = 1;

	if (exponent < 0)
	{
		base = 1 / base;
		exponent = -exponent;
	}

	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}
