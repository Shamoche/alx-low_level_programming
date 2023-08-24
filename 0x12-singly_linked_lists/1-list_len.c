#include <stdio.h>
#include "lists.h"

/**
 * print_list - all the elements in the linked lists are printed
 * @g: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *g)
{
	size_t s = 0;

	while (g)
	{
		if (!g->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", g->len, g->str);
		g = g->next;
		s++;
	}

	return (s);
}
