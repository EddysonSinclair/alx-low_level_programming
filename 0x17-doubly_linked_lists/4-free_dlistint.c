#include "lists.h"
/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: pointer to the head of the func.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;

		if (tmp)
			tmp->prev = NULL;

	}
}
