#include "lists.h"
/**
 * strln - returns the le,ght of string
 * @str: given tring
 * Return: length of string
 */
unsigned int strln(char *str)
{
	unsigned int ln = 0, i = 0;

	while (str[i++])
		ln++;
	return (ln);
}
/**
 * add_node - adds a new node at the beginning of a list
 * @head: head
 * @str: string
 * Return: adress of new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnd;
	char *newstr;

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
	newnd->len = strlen(newstr);
	newnd->str = newstr;
	newnd->next = *head;
	*head = newnd;
	return (*head);
}
