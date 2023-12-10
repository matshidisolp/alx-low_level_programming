#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at specific index of list
 *
 * @head: pointer to the head of the list
 * @index: index of given node
 * Return: 1 for success, or -1 if program fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = prev;

	free(current);
	return (1);
}
