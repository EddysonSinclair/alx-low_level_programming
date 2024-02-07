#include "lists.h"
/**
 * free_listint - frees the memory in a list
 * @head: it is the head.
 * Return: integer.
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}

}
