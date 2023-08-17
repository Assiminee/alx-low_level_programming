#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of doubly linked list
 * @head: pointer to first element of list
 * @n: data to put in node
 *
 * Return: pointer to the added element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if ((*head) != NULL)
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		(*head)->next = new_node;
		new_node->prev = *head;
	}
	*head = new_node;
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	return (new_node);
}
