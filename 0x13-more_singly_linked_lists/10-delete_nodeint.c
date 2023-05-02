#include "lists.h"
int pop_listint(listint_t **head);
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: head of list
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev;
	unsigned int i = 0;

	if (index == 0 || *head == NULL)
		return (-1);
	if (index == 1)
	{
		pop_listint(head);
		return (1);
	}
	while (current != NULL)
	{
		if (i == index - 1)
		{
			prev = current;
		}
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
/**
 * pop_listint - deletes the first node of a list
 * @head: head of list
 *
 * Return: the deleted node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int num = 0;

	if (*head == NULL || head == NULL)
		return (num);
	num = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (num);
}
