#include "lists.h"

/**
 * dlistint_len - this will return the number of
 * elements in a double linked list.
 *
 * @h: head of list.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
