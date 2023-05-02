#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	unsigned int cnr = 0;

	for (; h != NULL; h = h->next)
	{
		cnr++;
	}

	return (cnr);
}

