#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *curnode;

	if (head == NULL)
		return;
	while (head)
	{
		curnode = head;
		head = head->next;
		free(curnode);
	}
	head = NULL;
}
