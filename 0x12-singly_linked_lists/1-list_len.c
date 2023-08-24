#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list.
 * @h: Pointer to the beginning of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t num_nodes = 0;  // Counter for the number of nodes in the list

    while (h)
    {
        if (!h->str)
            printf("[0] (nil)\n");  // Print when the string is NULL
        else
            printf("[%u] %s\n", h->len, h->str);  // Print string length and string
        
        h = h->next;  // Move to the next node
        num_nodes++;  // Increment the node counter
    }

    return (num_nodes);  // Return the total number of nodes printed
}

