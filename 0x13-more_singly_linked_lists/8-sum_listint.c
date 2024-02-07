#include "lists.h"
/**
 * sum_listint - returns sum of all data
 * @head: pointer to head.
 * Return: integer.
 */
int sum_listint(listint_t *head)
{
	int sum;
	sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);

}
