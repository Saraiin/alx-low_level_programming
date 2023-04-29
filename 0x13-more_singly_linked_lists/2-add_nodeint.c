#include "lists.h"
/**
 * add_nodeint - adds a new node at the begining of list
 * @head: head
 * @n: n
 * Return: address of new elmt , NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnd;

	newnd = malloc(sizeof(listint_t));
	if (newnd == NULL || head == NULL)
		return (NULL);
	newnd->n = n;
	newnd->next = NULL;
	if (head != NULL)
		newnd->next = *head;
	*head = newnd;
	return (newnd);
}
