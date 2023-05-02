#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		nd++;
	}
	return (nd);
}

