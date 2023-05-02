#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nd = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nd++;
		h = h->next;
	}
	return (nd);
}
