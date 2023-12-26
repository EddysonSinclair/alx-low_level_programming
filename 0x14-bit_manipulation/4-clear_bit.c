#include "main.h"
/**
 * clear_bit - changes a bit in an index to 0.
 * @index: integer index.
 * @n: index.
 * Return: 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;
	return (1);
}
