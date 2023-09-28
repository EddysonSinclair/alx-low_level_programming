#include "main.h"

/**
 * _sqrt_recursion2 - fills memory with a constant byte.
 * @n: first bytes of the memory
 * @sqrt: first bytes of the memory
 * @res: first bytes of the memory
 * Return: -
 */
float _sqrt_recursion2(int n, float sqrt, float res)
{
	if (sqrt == res)
	{
		if ((int)sqrt == sqrt)
		{
			return (sqrt);
		}
		else
		{
			return (-1);
		}
	}
	res = sqrt;
	sqrt = (n / res + res) / 2;
	return (_sqrt_recursion2(n, sqrt, res));
}

/**
 * _sqrt_recursion - fills memory with a constant byte.
 * @n: first bytes of the memory
 * Return: -
 */
int _sqrt_recursion(int n)
{
	float res, sqrt;
