#include "lists.h"
/**
 * reverse_listint - this function is to reverse a list
 * @head: head pointer
 * Return: a pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;
	listint_t *nextnode;

	prev = NULL;

	if (*head == NULL)
		return (NULL);
	current = *head;
	nextnode = NULL;

	while (current != NULL)
	{
		nextnode = current->next;
		current->next = prev;

		prev = current;
		current = nextnode;
	}
	*head = prev;
	return (*head);
}
