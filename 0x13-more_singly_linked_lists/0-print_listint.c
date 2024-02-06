#include "lists.h"
/**
 * print_listint - prints all the elments in a list.
 * @h: this is the head.
 * Return: integer.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		if (h->n == 0)
			return (0);
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
