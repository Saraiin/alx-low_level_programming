#include "lists.h"
/**
 * get_nodeint_at_index - retyrn the nth node
 * @head: head
 * @index: index of the node
 * Return: node or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listnt_t *curnd;

	curnd = head;
	while (curnd)
	{
		if (i == index)
			return curnd;
		i++;
		curnd = curnd->next;
	}
	return (curnd);
}
