#include "lists.h"
/**
 * m - allocate memorry for an array
 * of pointers to nodes in linked list
 * @l: old list
 * @size: size of new list
 * @newnd: new node to add
 * Return: pointer to the new list
 */
const listint_t **m(const listint_t **l, size_t size, const listint_t *newnd)
{
	const listint_t **newl;
	size_t i = 0;

	newl = malloc(size * sizeof(listint_t *));
	if (newl == NULL)
	{
		free(l);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newl[i] = l[i];
	newl[i] = newnd;
	free(l);
	return (newl);
}
/**
 * free_listint_safe - free list
 * @h: head
 * Return: number of node in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, n = 0;
	const listint_t **l = NULL;
	listint_t *nextnd;

	if (h == NULL || *h == NULL)
		return (n);
	while (*h != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (*h == l[i])
			{
				*h = NULL;
				free(l);
				return (n);
			}
		}
		n++;
		l = m(l, n, *h);
		nextnd = (*h)->next;
		free(*h);
		*h = nextnd;
	}
	free(l);
	return (n);

}
