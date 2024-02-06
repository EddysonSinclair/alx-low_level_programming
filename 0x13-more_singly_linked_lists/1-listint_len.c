#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: header
 * Return: integer
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		if (h->n == 0)
			return (0);
		count++;
		h = h->next;
	}
	return (count);

}
