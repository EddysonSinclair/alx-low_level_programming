#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of unsgined integer
 * @index: index
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (-1);
		if (i == index - 1)
		{
			prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		prev = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
