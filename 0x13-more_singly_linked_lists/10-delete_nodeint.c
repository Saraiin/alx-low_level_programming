#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node
 * @head: pointer to the head
 * @index: index
 * Return: 1 if succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nxt;
	listint_t *cur;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		nxt = (*head)->nxt;
		free(*head);
		*head = nxt;
		return (1);
	}
	cur = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (cur->next == NULL)
			return (-1);
		cur = cur->next;
	}
	nxt = cur->next;
	cur->next = nxt->next;
	free(nxt);
	return (1);
}
