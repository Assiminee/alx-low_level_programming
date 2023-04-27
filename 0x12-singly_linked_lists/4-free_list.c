#include "lists.h"
/**
 * free_list - frees linked list
 * @head: head of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *new;

	while (current != NULL)
	{
		new = current->next;
		free(current->str);
		free(current);
		current = new;
	}
}
