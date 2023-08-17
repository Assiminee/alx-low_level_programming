#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node in doubly linked list at idx
 * @h: pointer to the first element of the list
 * @idx: index where node should be inserted
 * @n: data to put in node
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *curr;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	curr = *h;
	while (curr != NULL && i < idx - 1)
	{
		curr = curr->next;
		i++;
	}
	if (i == idx - 1)
	{
		if (curr->next == NULL)
			return (add_dnodeint_end(h, n));
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = curr->next;
		new_node->prev = curr;
		curr->next->prev = new_node;
		curr->next = new_node;
		return (new_node);
	}
	return (NULL);
}
