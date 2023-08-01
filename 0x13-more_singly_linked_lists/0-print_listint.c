#include "lists.h"

/**
 *print_listint - prints all the elements of a list
 *@h: linked list of type listint_t to print
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		num += 1;
		h = h->next;
	}

	return (num);
}
