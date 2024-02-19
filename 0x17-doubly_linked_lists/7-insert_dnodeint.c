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
		*h = newnode;
		return (*h);
	}
	while (tmp != NULL)
	{
		if (idx == 0)
			*h = add_dnodeint(&tmp, n);
		else if (idx == count)
		{
			newnode->prev = tmp->prev;
			newnode->next = tmp;
			if (tmp->prev != NULL)
				(tmp->prev)->next = newnode;
			tmp->prev = newnode;
		}
		count++;
		tmp = tmp->next;

	}
	if (idx == count)
	{
		*h = add_dnodeint_end(h, n);
		return (*h);
	}
	return (NULL);
}
