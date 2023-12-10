#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: pointer to the head of the list
 * @index: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int index, int n)
{
	dlistint_t *new, *head;
	unsigned int i;

	new = NULL;

	if (index == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	head = *h;

	for (i = 1; head != NULL && i < index; i++)
		head = head->next;

	if (head == NULL && i == index)
		new = add_dnodeint_end(h, n);

	else if (head != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new != NULL)
		{
			new->n = n;
			new->next = head->next;
			new->prev = head;

			if (head->next != NULL)
				head->next->prev = new;
			head->next = new;
		}
	}

	return (new);
}
