#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: points to the head of the list.
 * @n: value.
 * Return: address.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *tail;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (!(*head))
		*head = newnode;
	return (newnode);


	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = newnode;
	newnode->prev = tail;
	return (newnode);
}
