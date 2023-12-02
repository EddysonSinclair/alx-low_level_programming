#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings.
 * @separator: string.
 * @n: int.
 * @...: variadic function.
 * Return - nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argo;
	unsigned int i;
	char *s;

	va_start(argo, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(argo, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("nil");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(argo);
	printf("\n");
}
