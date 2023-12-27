#include "main.h"
/**
 * flip_bits - flips bits.
 * @n: an integer.
 * @m: integer.
 * Return: integer.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int result;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
