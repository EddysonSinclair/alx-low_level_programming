#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length;

	length = strlen(s1) + n + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length = strlen(s1) + n + 1;
	ptr = malloc(length + 1);

	if (ptr == NULL)
		return (NULL);
	strncpy(ptr, s1);
	if (n >= strlen(s2))
		strncat(ptr, s2, strlen(s2));
	strncat(ptr, s2, n);

	return (ptr);
}
