#include "lists.h"
#include <string.h>
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: double pointer to the head pointer
 * @idx: index of the value.
 * @n: value to be stored.
 * Return: a pointer to the value.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *tmp;
	unsigned int count;

	if (idx == 0)
	{
		add_dnodeint(&newnode, 0);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->n = n;

	tmp = *h;
	count = 0;

	if (tmp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	while (count < idx - 1)
	{
		count++;
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
	{
		add_dnodeint_end(&newnode, n);
	}
	newnode->prev = tmp;
	newnode->next = tmp->next;
	tmp->next = newnode;
	newnode->next->prev = newnode;
	return (newnode);
}
