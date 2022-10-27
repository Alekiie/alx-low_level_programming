#include "lists.h"

/**
 * add_nodeint_end - adds anew node at the end of a listint_t list
 * @head: pointer to pointer
 * @n: integer
 *
 * Return: address of a new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *last;

	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_end;
	}
	return (*head);
}
