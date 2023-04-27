#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
