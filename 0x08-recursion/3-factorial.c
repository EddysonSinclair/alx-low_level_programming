#include "main.h"
/**
 * factorial - fills memory with a constant byte.
 * @n: first bytes of the memory
 * Return: -
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}
else
return (n * factorial(n - 1));
}
