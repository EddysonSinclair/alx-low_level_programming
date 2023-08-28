#include "main.h"

/**
 * string_toupper - change lowercase string to uppercase string
 * written by cod-emminex
 * @s: string
 * Return: char
 */

char *string_toupper(char *s)
{

	int i;

i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}

