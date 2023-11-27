#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int length1, length2, total_length;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	 length1 = strlen(s1);
	 length2 = strlen(s2);
	 total_length = length1 + length2;

	ptr = (char *) malloc(sizeof(char) * (total_length + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
