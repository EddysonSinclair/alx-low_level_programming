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
	const list_t *current = h;
	int count;

	count = 0;
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}

		else
		{
			printf("[%d] %s \n", current->len, current->str);
		}
		count++;
		current = current->next;
	}
	return (count);
}
