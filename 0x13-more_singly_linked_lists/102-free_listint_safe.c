#include "lists.h"
/**
 * mem - allocate memorry for an array
 * of pointers to nodes in linked list
 * @l: old list
 * @size: size of new list
 * @newnd: new node to add
 * Return: pointer to the new list
 */
const listint_t **mem(const listint **l, size_t size, const listint_t *newnd)
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
	listint_t **l = NULL;
	listint_t *nextnd;

	if (head == NULL || *head == NULL)
		return (n);
	while (*head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (*head == l[i])
			{
				*head = NULL;
				free(l);
				return (n);
			}
		}
		n++;
		l = mem(l, n, *head);
		nextnd = (*head)->next;
		free(*head);
		*head = nextnd;
	}
	free(l);
	return (n);

}
