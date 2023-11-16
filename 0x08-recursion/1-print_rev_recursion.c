#include "main.h"
/**
 * _print_rev_recursion - fills memory with a constant byte.
 * @s: first bytes of the memory
 * Return: -
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
_print_rev_recursion(s + 1);
_putchar(*s);
}
