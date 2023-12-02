#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers.
 * @separator: string.
 * @n: int.
 * @...: variadic function.
 * Return - noting.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argo;
	unsigned int i;
	unsigned int y;

	va_start(argo, n);

	for (i = 0; i < n; i++)
	{
		y = va_arg(argo, int);

		printf("%d", y);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(argo);
	printf("\n");


}
