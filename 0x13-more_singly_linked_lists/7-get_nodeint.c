#include "lists.h"
/**
 * get_nodeint_at_index - retyrn the nth node
 * @head: head
 * @index: index of the node
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listnt_t *curnd;

	curnd = head;
	if (i == index)
		return (curnd);
	while (curnd && i < index)
	{
		i++;
		curnd = curnd->next;
	}
	return (NULL);
}
