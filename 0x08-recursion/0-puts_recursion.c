#include "main.h"
/**
 * _puts_recursion - fills memory with a constant byte.
 * @s: first bytes of the memory
 * Return: -
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
{
	_putchar('\n');
}
else
_putchar(*s);
_puts_recursion(s + 1);
}
