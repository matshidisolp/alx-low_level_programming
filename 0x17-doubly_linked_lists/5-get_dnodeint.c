#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t list
  *@head: pointer to the head of a dlintint_t
  * @index: index of the node in question, start from 0
  * Return: nth node or NULL
  **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}
