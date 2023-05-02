#include "lists.h"
/**
 * find_listint_loop - find loop
 * @head: headd
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nd1;
	listint_t *nd2;

	if (head == NULL)
		return(NULL);

	nd1 = head;
	nd2 = head;

	if (nd1 == NULL || nd2 == NULL || nd2->next == NULL)
		return (NULL);
	while (nd1 && nd2 && nd2->next)
	{
		nd1 = nd1->next;
		nd2 = (nd->next)->next;

		if (nd1 == nd2)
		{
			nd1 = head;
			break;
		}
	}
	while (nd1 != nd2)
	{
		nd1 = nd1->next;
		nd2 = nd2->next;
	}
	return (nd2);
}

