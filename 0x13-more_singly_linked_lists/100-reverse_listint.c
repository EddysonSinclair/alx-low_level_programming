#include "lists.h"
/**
 * reverse_listint - this function is to reverse a list
 * @head: head pointer
 * Return: a pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *nextnode;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	nextnode = NULL;
	prev = NULL;

	while (*head != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nextnode;
	}
	*head = prev;
	return (*head);
}
