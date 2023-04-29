#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: head
 * @n: n
 * Return: address of new elmt, NULL  if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnd;
	listint_t *lastnd;

	newnd = malloc(sizeof(listint_t));
	if (newnd == NULL || head == NULL)
		return (NULL);
	newnd->next = NULL;
	newnd->n = n;

	if (!*head)
		*head = newnd;
	else
	{
		lastnd = *head;
		while (lastnd->next != NULL)
			lastnd = lastnd->next;
		lastnd->next = newnd;
	}
	return (newnd);
}
