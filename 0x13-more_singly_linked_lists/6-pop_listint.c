#include "lists.h"
/**
 * pop_listint - deletes the first node of a list
 * @head: head of list
 *
 * Return: the deleted node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int num = tmp->n;

	if (*head == NULL)
		return (0);
	free(*head);
	*head = tmp->next;
	return (num);
}
