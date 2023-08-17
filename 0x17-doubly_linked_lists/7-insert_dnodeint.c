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
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if ((*h) == NULL)
		return (add_dnodeint_end(h, n));
	while ((*h) != NULL && i < idx - 1)
	{
		*h = (*h)->next;
		i++;
	}
	if (i == idx - 1)
	{
		if ((*h)->next == NULL)
			return (add_dnodeint_end(h, n));
		else
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = (*h)->next;
			new_node->prev = *h;

			(*h)->next->prev = new_node;
			(*h)->next = new_node;

			*h = new_node;
			while ((*h)->prev != NULL)
				*h = (*h)->prev;
			return (new_node);
		}
	}
	return (NULL);
}
