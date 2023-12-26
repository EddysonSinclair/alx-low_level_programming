#include "main.h"
/**
 * print_binary -prints the binary version of an integer.
 * @n: integer.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	recursion(n);
}


/**
 * recursion - convert to bin.
 * @n: integer.
 * Return: void.
 */
void recursion(unsigned long int n)
{
        if (n == 0)
                return;
        recursion(n >> 1);
        if ((n & 1) == 1)
                _putchar('1');
        if ((n & 1) == 0)
                _putchar('0');
}
