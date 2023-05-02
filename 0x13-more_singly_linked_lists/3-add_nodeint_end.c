#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: the head of the list
 * @n: the number to be added
 *
 * Return: the adress of the node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr;
	int num = n;

	if (new == NULL)
		return (NULL);
	new->n = num;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (new);
}
