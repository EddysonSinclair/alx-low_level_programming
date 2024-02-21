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

	if (idx == 0)
		newnode = add_dnodeint(h, n);

	count = 1;
	newnode = NULL;
	tmp = *h;
	if (tmp != NULL && tmp->prev != NULL)
		tmp = tmp->prev;
	while (tmp != NULL)
	{
		if (count == idx)
		{
			if (tmp->next == NULL)
				newnode = add_dnodeint_end(h, n);
			newnode = malloc(sizeof(dlistint_t));
			if (newnode == NULL)
			{
				newnode->prev = tmp;
				newnode->next = tmp->next;
				newnode->n = n;
				tmp->next->prev = newnode;
				tmp->next = newnode;
			}



		}
		tmp = tmp->next;
		count++;
	}
	return (newnode);
}
