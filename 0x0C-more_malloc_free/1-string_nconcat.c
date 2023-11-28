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
	unsigned int length1, length2, total;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n > length2)
		n = length2;
	total = length1 + n;

	ptr = malloc(total + 1);

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);
	if (n >= length2)
		strncat(ptr, s2, length2);
	else
		strncat(ptr, s2, n);

	return (ptr);
}
