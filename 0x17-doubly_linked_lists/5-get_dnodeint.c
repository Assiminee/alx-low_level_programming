#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node of doubly linked list
 * @head: first element of the list
 * @index: index of the node to get
 *
 * Return: pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (head != NULL)
		return (head);
	return (NULL);
}

