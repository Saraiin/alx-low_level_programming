#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: head
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *newnd;

	if (!(*head) || !head)
		return (0);

	newnd = *head;
	*head = (*head)->next;
	free(newnd);
	return (newnd->n);
}
