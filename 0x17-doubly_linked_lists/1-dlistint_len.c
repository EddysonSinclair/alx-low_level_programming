#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements in a linked list.
 * @h: pointer to the header of the file
 * Return: integer.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
