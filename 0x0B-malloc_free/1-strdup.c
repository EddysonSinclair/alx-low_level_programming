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

	if (str == NULL)
		return (NULL);
	 length = strlen(str);
	s = (char *) malloc(sizeof(char) * (length + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < length + 1; i++)
		s[i] = str[i];
	return (s);

}
