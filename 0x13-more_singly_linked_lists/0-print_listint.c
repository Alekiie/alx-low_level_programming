#include "lists.h"

/**
 * print_listint - prints all elements of a listsint_t list
 * @listint_t - list containing elements
 * @h: pointer to the header file
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
