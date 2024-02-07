#include "lists.h"
/**
 * free_listint2 - frees a list.
 * @head: head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *freenode;

	while (*head != NULL)
	{
		freenode = *head;
		*head = (*head)->next;
		free(freenode);
	}
	*head = NULL;
}
