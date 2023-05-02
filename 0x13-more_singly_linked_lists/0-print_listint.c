#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	unsigned int cntr = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		cntr++;
	}

	return (cntr);
}

