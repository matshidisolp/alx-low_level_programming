#include "lists.h"

/**
 * print_list - prints all the elements of the list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	for (; h; h = h->next, count++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else if (h->str[0] == '%')
			printf("[-1] %s\n", h->str);
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	return (count);
}
