#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the head.
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int tmp;

	if (*head == NULL)
		return (0);
	temp = *head;

	tmp = (*head)->n;
		*head = (*head)->next;
		free(temp);
	return (tmp);
}
