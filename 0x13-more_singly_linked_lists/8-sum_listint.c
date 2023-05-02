#include "lists.h"
/**
 * sum_listint - does the sum of all the data in a list
 * @head: head of list
 *
 * Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
