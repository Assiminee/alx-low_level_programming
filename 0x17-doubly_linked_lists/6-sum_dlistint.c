#include "lists.h"

/**
 * sum_dlistint - counts the sum of doubly linked list elements
 * @head: first element of the list
 *
 * Return: sum of elements of list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
