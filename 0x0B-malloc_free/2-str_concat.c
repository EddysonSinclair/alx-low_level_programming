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
	unsigned int length1;
	unsigned int length2;
	unsigned int total_length;
	unsigned int i;
	char *ptr;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	 length1 = strlen(s1);
	 length2 = strlen(s2);
	 total_length = length1 + length2;

	ptr = (char *) malloc(sizeof(char) * (total_length + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < length2; i++)
		ptr[length1 + i] = s2[i];
	ptr[total_length] = '\0';
	return (ptr);
}
