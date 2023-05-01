#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head
 */
void free_listint(listint_t *head)
{
        listint_t *curnode;
        listint_t *nextnd;

        curnode = head;
        if (curnode != NULL)
        {
                nextnd = curnode->next;
		free(curnode->next);
		curnode = nextnd;
	}
	head = NULL;
}
