#include "lists.h"
/**
 * _strlen - returns the le,ght of string
 * @str: given tring
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int ln = 0, i = 0;

	while (str[i++])
		ln++;
	return (ln);
}
/**
 * add_node_end - adds a new node at the beginning of a list
 * @head: head
 * @str: string
 * Return: adress of new head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnd;
	char *newstr;
	list_t *last = *head

	if (str == NULL)
		return (NULL);
	newnd = malloc(sizeof(list_t));
	if (!newnd)
		return (NULL);
	newstr = strdup(str);
	if (!newstr)
	{
		free(newnd);
		return (NULL);
	}
	newnd->len = _strlen(newstr);
	newnd->str = newstr;
	newnd->next = NULL;
	if (!*head)
	{
		*head = newnd;
		return (newnd);
	}
	while (last->next)
		last = last->next;
	last->next = newnd;
	return (last);
}
