#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of doubly linked list
 * @head: pointer to the first node of the list
 * @n: data to put in node
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
