#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_linked list
 * @head: pointer to a pointer
 *
 * Return: head nodes data(n), and 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *rm;
	int tmp;

	if (*head == NULL)
		return (0);

	rm = *head;
	tmp = (*head)->n;
	*head = (*head)->next;

	free(rm);

	return (tmp);
}
