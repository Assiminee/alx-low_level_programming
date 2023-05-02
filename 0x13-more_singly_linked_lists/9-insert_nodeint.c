#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: head of list
 * @idx: index where node should be inserted
 * @n: data to put in node
 *
 * Return: adress of inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *prev;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;
	int num = n;

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			prev = current;
		}
		if (i == idx)
		{
			new->n = num;
			new->next = current;
			prev->next = new;
			return (new);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
