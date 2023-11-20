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
 *is_palindrome - fills memory with constant byte
 *@s: first bytes of the memory
 *Return: -
 */
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
if (length == 0 || length == 1)
{
return (1);
}
else
{
return (is_palindrome_wrapper(s, 0, length - 1));
}
}
