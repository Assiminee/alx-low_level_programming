#include "lists.h"
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
