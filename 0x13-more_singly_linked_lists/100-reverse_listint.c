#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer of the address of head of listin_t list
 *
 * Return: pointer to the 1st node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *last;

	if (head == NULL || *head == NULL)
		return (NULL);

	last = NULL;

	while ((*head)->next != NULL)
	{
		first = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = first;
	}

	(*head)->next = last;

	return (*head);
}
