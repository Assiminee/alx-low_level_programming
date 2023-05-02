#include "lists.h"
/**
 * pop_listint - deletes the first node of a list
 * @head: head of list
 *
 * Return: the deleted node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num = 0;

	if (*head == NULL || head == NULL)
		return (num);
	tmp = *head;
	num = tmp->n;
	free(*head);
	*head = tmp->next;
	return (num);
}
