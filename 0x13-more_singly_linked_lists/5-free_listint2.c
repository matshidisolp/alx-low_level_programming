#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: double pointer to the listint_t head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head && *head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
