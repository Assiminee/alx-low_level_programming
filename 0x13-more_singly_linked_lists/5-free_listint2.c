#include "lists.h"
/**
 * free_listint2 - frees linked list and sets head to NULL
 * @head: head of linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *tmp;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;
}
