#include "lists.h"
/**
 * get_nodeint_at_index - looks for the node at a given index
 * @head: head of list
 * @index: index of node
 *
 * Return: adress of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (ptr != NULL)
	{
		if (i == index)
		{
			return (ptr);
		}
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
