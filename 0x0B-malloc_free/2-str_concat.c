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
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	unsigned int length1;
	unsigned int length2;
	unsigned int total_length;
	unsigned int i;
	char *ptr;

	 length1 = strlen(s1);
	 length2 = strlen(s2);
	 total_length = length1 + length2;

	ptr = (char *) malloc(sizeof(char) * (total_length + 2));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		ptr[i] = s1[i];
	for (i = length1; i < total_length; i++)
		ptr[length1 + i] = s2[i];
	ptr[total_length] = '\0';
	return (ptr);
}
