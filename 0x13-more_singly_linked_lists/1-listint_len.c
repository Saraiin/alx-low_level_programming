#include "lists.h"
/**
 * listint_len - returns number of elements in a linkedlist
 * @h: head
 * Return: number of elements in a linked lists
 */
size_t listint_len(const listint_t *h)
{
	size_t nbnode = 0;

	while (h)
	{
		nbnode++;
		h = h->next;
	}
	return (nbnode);
}
