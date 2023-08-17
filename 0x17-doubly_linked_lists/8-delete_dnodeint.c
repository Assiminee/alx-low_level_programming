#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node from linked list at index
 * @head: pointer to the first node of the list
 * @index: index of node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *previous, *following;
	unsigned int i = 0;

	if (head == NULL || (*head) == NULL)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	while (curr != NULL && i < index)
	{
		curr = curr->next;
		i++;
	}
	if (curr != NULL)
	{
		previous = curr->prev;
		if (curr->next == NULL)
			previous->next = NULL;
		else
		{
			following = curr->next;
			previous->next = following;
			following->prev = previous;
		}
		free(curr);
		return (1);
	}
	return (-1);
}

