#include "lists.h"
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

	if (*h == NULL || h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free_dlistint(newnode);
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->n = n;

	count = 0;
	tmp = *h;

	if (idx == 0)
		add_dnodeint(&newnode, 0);

	while (count < idx && tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	if (idx > count)
		return (NULL);
	if (tmp->next == NULL)
	{
		newnode->prev = tmp;
		tmp->next = newnode;
	}
	newnode->prev = tmp;
	newnode->next = tmp->next;
	tmp->next = newnode;
	newnode->next->prev = newnode;
	return (newnode);
}
