#include "lists.h"

/**
 * dlistint_len - counts number of nodes in a doubly linked list
 * @h: first node of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *curr;

	if (h == NULL)
		return (0);

	curr = h;

	while (curr != NULL)
	{
		count++;
		curr = curr -> next;
	}
	return (count);
}
