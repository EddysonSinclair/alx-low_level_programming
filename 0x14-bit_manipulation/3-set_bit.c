#include "main.h"
/**
 * set_bit - sets bits to 1.
 * @n: integer n.
 * @index: index.
 * Return: integer.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	i = 1;
	i = i << index;
	*n = ((*n) | i);
	return (1);
}
