#include "main.h"
/**
 *is_palindrome_wrapper - fills memory with constant byte
 * @s: first bytes of the memory
 * @left: first bytes of the memory
 * @right: first bytes of the memory
 * Return: -
 */
int is_palindrome_wrapper(char *s, int left, int right)
{
if (left >= right)
{
return (1);
}
else if (s[left] == s[right])
{
return (is_palindrome_wrapper(s, left + 1, right - 1));
}
else
{
return (0);
}
}
/**
 * _strlen_recursion2 - fills memory with a constant byte.
 * @s: first bytes of the memory
 * Return: -
 */
int _strlen_recursion2(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion2(s + 1) + 1);
}
/**
 *is_palindrome - fills memory with constant byte
 *@s: first bytes of the memory
 *Return: -
 */
int is_palindrome(char *s)
{
int length = _strlen_recursion2(s);
if (length == 0 || length == 1)
{
return (1);
}
else
{
return (is_palindrome_wrapper(s, 0, length - 1));
}
}
