#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node
 * @head: head
 * @idx: index
 * @n: n
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnd;
	listint_t *curnd;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		curnd = *head;
		for (i = 0; i < idx - 1 && curnd != NULL; i++)
		{
			curnd = curnd->next;
		}
		if (curnd == NULL)
			return (NULL);
	}
	newnd = malloc(sizeof(listint_t *));
	if (newnd == NULL)
		return (NULL);
	newnd->n = n;
	if (idx == 0)
	{
		newnd->next = *head;
		*head = newnd;
		return (newnd);
	}
	newnd->next = curnd->next;
	curnd->next = newnd;
	return (NULL);
}
