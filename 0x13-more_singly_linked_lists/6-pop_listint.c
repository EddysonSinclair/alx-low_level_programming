#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the head.
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int tmp;

	if (*head == NULL)
		return (0);
	while (*head != NULL)
	{
		listint_t *temp = *head;
		tmp = (*head)->n;
		*head = (*head)->next;
		free(temp);
	}
	return (tmp);
}
