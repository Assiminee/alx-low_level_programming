#include "lists.h"
/**
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
