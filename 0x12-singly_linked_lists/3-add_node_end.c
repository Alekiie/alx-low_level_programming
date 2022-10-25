#include "lists.h"
#include<string.h>

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: pointer to the pointer of the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	s = malloc(sizeof(list_t));
	if (!s)
		return (NULL);

	s->str = strdup(str);
	s->len = len;
	s->next = NULL;

	if (*head == NULL)
	{
		*head = s;
		return (s);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = s;

	return (s);
}
