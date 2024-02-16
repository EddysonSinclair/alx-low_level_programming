#include "lists.h"
/**
 * print_dlistint - prints all the elements in the list.
 * @h: pointer to the first node of the list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count;
	int data;

	count = 0;
	if (h == NULL)
		return (count);
	while (h)
	{
		data = h->n;
		printf("%d\n", data);
		count++;
		h = h->next;
	}
	return (count);
}
