#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_s list
 * @list_t: holds the elements
 * @h: header pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		h = h->next;
		total++;
	}
	return (total);
}
