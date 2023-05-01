#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: head
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t newnd;

	if (head != NULL)
	{
		newnd->next = head->next;
		newnd->n = head->n;
		newnd = head;
		free(head);
		return (newnd->n);
	}
	else
		return (0);
}
