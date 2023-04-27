#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *currentnode = head;
	lisr_t *nextnode;

	while (currentnode != NULL)
	{
		nextnode = currentnode->next;
		free(currentnode->str);
		free(currentnode);
		currentnode = nextnode;
	}
	head = NULL;
}
