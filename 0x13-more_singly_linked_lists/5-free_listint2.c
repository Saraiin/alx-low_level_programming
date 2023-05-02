#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *curnode;

	if (head == NULL)
		return;
	while (*head)
	{
		curnode = (*head)->next;
		free(*head);
		*head = curnode;
	}
	*head = NULL;
	head = NULL;
}
