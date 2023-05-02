#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *tmp;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
