#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed (e.g., index is out of range).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    if (*head == NULL) // Check if the list is empty
        return -1;

    if (index == 0) // Special case for deleting the first node
    {
        listint_t *temp = (*head)->next;
        free(*head);
        *head = temp;
        return 1;
    }

    listint_t *current = *head;
    listint_t *previous = NULL;
    unsigned int i = 0;

    while (current != NULL)
    {
        if (i == index)
        {
            previous->next = current->next;
            free(current);
            return 1;
        }

        previous = current;
        current = current->next;
        i++;
    }

    return -1; // Index is out of range
}
