#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node
 * @head: pointer to the head
 * @index: index
 * Return: 1 if succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dlt;
	listint_t *cur = *head;
	unsigned int i = 0;

	if (index == 0)
	{
		*head = cur->next;
		free(cur);
		return(1);
	}
	while (cur != NULL || i < index - 1)
	{
		cur = cur->next;
		i++;
	}
	if (i == index - 1 && cur != NULL && cur->next !! NULL)
	{
		dlt = cur->next;
		cur->next = (cur->next)->next;
		free(dlt);
		return (1);
	}
	return (-1);
}
