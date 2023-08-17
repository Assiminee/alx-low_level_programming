#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: first element of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *following;

	if (head == NULL)
		return;

	current = head;
	following = head->next;
	while (following != NULL)
	{
		following->prev = NULL;
		current->next = NULL;
		if (current->prev != NULL)
			current->prev = NULL;
		free(current);
		current = following;
		following = following->next;
	}
	free(current);
}
