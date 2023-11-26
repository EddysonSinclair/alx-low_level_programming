#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	 int length1 = strlen(s1);
	int length2 = strlen(s2);
	int total_length = length1 + length2;
	unsigned int i;
	char *ptr;

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
