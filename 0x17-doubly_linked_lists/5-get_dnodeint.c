#include "lists.h"

/**
 * get_dnodeint_at_index - this will return the data of the nth node
 * of a dlistint_t list.
 *
 * @head: head of the list or node.
 * @index: index of the nth node.
 *
 * Return: nth node data.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}

	return (head);
}
