#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: string
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int length;
	int i;
	char *s;

	length = strlen(str);

	if (str == NULL)
		return (NULL);
	s = (char *) malloc(sizeof(char) * (length + 1));

	for (i = 0; i < length; i++)
		s[i] = str[i];
	return (s);

}
