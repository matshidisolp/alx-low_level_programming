#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list
 * @h: pointer to list (list_t)
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
