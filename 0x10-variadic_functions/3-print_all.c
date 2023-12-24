#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all numbers.
 * @format: format specifiers.
 * Description: variadic function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *s;
	int a;
	int k;

	va_start(args, format);
	i = 0;
	k = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 's')
		{
			if (s == NULL)
				printf("(nil)");
			while (s[k] != '\0')
			{
				s = va_arg(args, char*);
				printf("%s", s);
				k++;
			}
		}
		a = va_arg(args, int);
		printf("%d", a);
		i++;
	}
	va_end(args);
	printf("\n");

}
