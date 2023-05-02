#include "lists.h"
/**
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	int num = n;

	if (new == NULL)
		return (NULL);
	new->n = num;
	new->next = *head;
	*head = new;
	return (*head);
}
