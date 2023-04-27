#include "lists.h"
/**
 * list_len - return number of elements in linked lists
 * @h: head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	register unsigned int nb = 0;
	
	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
