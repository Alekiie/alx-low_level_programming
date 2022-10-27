#include "lists.h"

/**
 * sum_listint - prints the sum of all data(n) of a listint_t linked list
 * @head: pointer to the head of listint_t list
 *
 * Return: sum, otherwise 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
