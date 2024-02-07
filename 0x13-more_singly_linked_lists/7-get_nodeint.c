#include "lists.h"
/**
 * get_nodeint_at_index - prints a node at index.
 * @head: this pointer head.
 * @index: index.
 * Return: pointer.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

	count = 0;
	if (head == NULL)
		return (NULL);
	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);

}
