#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to be returned, starting from 0
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	/* Traverse the list to the specified index */
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	/* Return NULL if the index is out of bounds */
	if (head == NULL)
		return (NULL);

	return (head);
}
