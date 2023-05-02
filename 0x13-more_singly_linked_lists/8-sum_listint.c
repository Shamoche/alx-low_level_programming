#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data (n) in a list.
 * @head: Address of the first node of the list.
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	for (; head != NULL; head = head->next)
		total += head->n;

	return total;
}

