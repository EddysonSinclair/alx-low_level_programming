#include "main.h"
/**
 * _strlen_recursion - fills memory with a constant byte.
 * @s: first bytes of the memory
 * Return: -
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{return(0);
}
else
return (1 + _strlen_recursion(s + 1));
}
