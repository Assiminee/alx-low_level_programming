#include "lists.h"
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
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
	size_t len;

	len = listint_len(*head);
	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}
	if (idx == len - 1)
	{
		return (add_nodeint_end(head, n));
	}
	if (idx > len)
	{
		return (NULL);
	}
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
/**
 * listint_len - counts the number of elements of a linked list
 * @h: the head of the linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                count++;
                h = h->next;
        }
        return (count);
}
/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: the head of the list
 * @n: number to be added to the list
 *
 * Return: adress of the new node
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
