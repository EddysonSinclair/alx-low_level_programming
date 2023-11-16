#include "main.h"
/**
 * _sqrt_recursion_subs - fills memory with a constant byte.
 * @n: first bytes of the memory
 * @root: first bytes of the memory
 * Return: -
 */
int _sqrt_recursion_subs(int n, int root)
{
if (n == (root * root)
{
return (root);
}
else if ((root * root) > n)
{
return (-1);
}
else
{
root++;
return (_sqrt_recursion2(n, root));
}
}
/**
 * _sqrt_recursion - fills memory with a constant byte.
 * @n: first bytes of the memory
 * Return: -
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
return (_sqrt_recursion2(n, 0));
}
