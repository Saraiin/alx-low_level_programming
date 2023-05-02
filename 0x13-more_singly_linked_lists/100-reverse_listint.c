#include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: pointer to head
 * Return: pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *apres;
	listint_t *avant = NULL;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		apres = (*head)->next;
		(*head)->next = avant;
		avant = *head;
		*head = apres;
	}
	*head = avant;
	return (*head);
}
