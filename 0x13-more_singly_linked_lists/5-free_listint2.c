#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - Free a listint_t list and set the head to NULL
* @head: A pointer to a pointer to the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
