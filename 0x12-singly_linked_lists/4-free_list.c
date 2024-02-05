#include "lists.h"
/**
 * free_list - frees the list_t list.
 * @head: head of file.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;

	}
	free(head->str);
	free(head);
}
