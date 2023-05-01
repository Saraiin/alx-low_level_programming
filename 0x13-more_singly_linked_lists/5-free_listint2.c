#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *curnode;
	listint_t *nextnode;

	if (head == NULL)
		return;

	curnode = *head;
	while (curnode != NULL)
	{
		nextnode = curnode;
		curnode = nextnode->next;
		free(curnode);
	}
	*head = NULL;
	head = NULL;
}
