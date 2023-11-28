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
	char *ptr, int i, int length;

	length = strlen(s1) + n + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(length + 1);
	if (ptr == NULL)
		return (NULL);
	strncat(ptr, s1);
	if (n >= s2)
		strcpy(ptr, s2);
	for (i = 0; i < n; i++)
	{
		ptr[i] = s2[i];
	}

	return (ptr);
}
