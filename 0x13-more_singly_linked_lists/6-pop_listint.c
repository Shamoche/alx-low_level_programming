#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	listint_t *tp = *head;
	*head = tp->next;
	int my_data = tp->n;
	free(tp);

	return (my_data);
}

