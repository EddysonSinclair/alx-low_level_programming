#include "lists.h"
/**
 * add_node_end - appends a node to the end of a list.
 * @head: points to the head of the node.
 * @str: string.
 * Return: int
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newelement;
	list_t *tmp;
	unsigned int count, i;

	count = 0;
	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);
	newelement->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	newelement->next = NULL;
	newelement->len = count;
	tmp = *head;
	if (tmp == NULL)
	{
		*head = newelement;
		return(*head);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newelement;
	return (*head);
}
