#include "lists.h"
#include<string.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the list_t list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
