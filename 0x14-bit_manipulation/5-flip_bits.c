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
	count = count_bit(result);
	return (count);
}

/**
 * count_bit - returns numbers of flipped bits required.
 * @number: integer number.
 * Return: integer.
 */

unsigned int count_bit(unsigned long int number)
{
	unsigned int count = 0;
	while (number != 0)
	{
		if ((number & 1) == 1)
			count++;
		number = number >> 1;
	}
	return (count);
}
