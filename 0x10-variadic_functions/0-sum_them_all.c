#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 * @n: first integer.
 * @... : variadic integers.
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list args;
	va_start(args, n);

	unsigned int i;
	int x;
	int s = 0;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		s += x;

	}
	va_end(args);
	return (s);
}
