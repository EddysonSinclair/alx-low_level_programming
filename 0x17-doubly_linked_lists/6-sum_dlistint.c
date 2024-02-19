#include "lists.h"
/**
 * sum_dlistint - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	int data;

	sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		data = head->n;
		sum += data;
		head = head->next;
	}
	return (sum);
}
