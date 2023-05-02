#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: head
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *newnd = *head;

	if (head != NULL)
	{
		*head = (*head)->next;
		free(newnd);
	}
	return (newnd->n);
}
