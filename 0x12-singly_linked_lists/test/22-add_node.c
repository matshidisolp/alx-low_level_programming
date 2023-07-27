#include "lists.h"

/**
  *add_node- adds a new node to the beginning of the list
  *@head: double pointer to the linked list list_t
  *@str: the new string to be added to the new node
  *
  *Return: the address of the new element/NULL if fails
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = strlen(str);
	list_t *new = calloc(1, sizeof(list_t));

	if (!str)
		return (NULL);
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
