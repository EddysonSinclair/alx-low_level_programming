#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: pointer to the head of list
 * @n: number
 * Return: address.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head =  newnode;
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}
	return (newnode);
}
