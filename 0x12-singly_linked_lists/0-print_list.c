#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: this is the header of the function.
 * Return: integer.
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}

		else
		{
			printf("[%d] %s \n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
