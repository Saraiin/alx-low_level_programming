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
	int i = 0;
	listint_t *newnd;
	listint_t *curnd;

	curnd = *head;
	newnd = malloc(sizeof(listint_t *));
	if (newnd == NULL)
		return;
	if (idx == 0)
	{
		newnd->next = *head;
		*head = newnd;
		return (newnd);
	}
	while (curnd != NULL && i < idx)
	{
		curnd = curnd->next;
		i++;
	}
	if (i == idx)
	{
		newnd->next = curnd->next;
		curnd->next = newnd;
		return (newnd);
	}
	return (NULL);
}
