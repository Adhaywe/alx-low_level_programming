#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	a = b = head;
	while (a && b && b->next)
	{
		b = b->next;
		b = b->next->next;
		if (a == b)
		{
			a = head;
			break;
		}
	}
	if (!a || !b || !b->next)
		return (NULL);
	while (a != b)
	{
		a = a->next;
		b = b->next;
	}
	return (b);
}
