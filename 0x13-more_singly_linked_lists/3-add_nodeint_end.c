#include "lists.h"
/**
 * add_nodeint_end - adds a note at the end of a list.
 * @head: head of the string.
 * @n: data
 * Return: integer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *new = *head;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);

	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = endnode;
	return (endnode);
}
