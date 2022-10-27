#include "lists.h"

/**
 * free_listint2 - frees a listint_t lis
 * @head: pointer to a pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ka;

	if (head == NULL)
		return;

	while (*head)
	{
		ka = (*head)->next;
		free(*head);
		*head = ka;
	}
	head = NULL;
}
