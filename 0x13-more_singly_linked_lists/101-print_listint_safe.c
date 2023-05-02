#include "lists.h"
/**
 * mem - allocate memorry for an array
 * of pointers to nodes in linked list
 * @l: old list
 * @size: size of new list
 * @newnd: new node to add
 * Return: pointer to the new list
 */
const listint_t **mem(const listint_t **l, size_t size, const listint_t *newnd)
{
	const listint_t **newl;
	size_t i;

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
 * print_listint_safe - print list
 * @head: head
 * Return: number of node in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == l[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (n);
			}
		}
		n++;
		l = mem(l, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);
	return (n);
}
