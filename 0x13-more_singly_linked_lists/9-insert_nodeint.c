#include "lists.h"
/**
 * insert_nodeint_at_index - used to insert a node at a particular index.
 * @head: pointer to the head.
 * @idx: index.
 * @n: number
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *node;
	listint_t *tmp;

	count = 0;
	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	if (count == 0)
	{
		*head = node;
		return (node);
	}
	node->n = n;
	node->next = *head;

	tmp = *head;
	while (tmp != NULL)
	{
		if (count == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);

		}
		count++;
		tmp = tmp->next;
	}
	free(node);
	return (NULL);
}
