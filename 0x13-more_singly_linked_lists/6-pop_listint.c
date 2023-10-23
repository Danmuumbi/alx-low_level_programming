#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Delete the head node of a listint_t list and return its data.
* @head: A pointer to a pointer to the head of the list
*
* Return: The data of the head node, or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		data = temp->n;
		*head = temp->next;
		free(temp);
	}

	return (data);
}
