#include "lists.h"

/**
 * print_list - prints all the elements of the list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of printed nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *temp;

	temp = h;

	while (temp != 0)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
