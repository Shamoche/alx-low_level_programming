#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to the list_t list to print
 *
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *h)
{
    size_t s = 0;  /* Initialize a counter for the number of nodes */

    while (h)
    {
        if (!h->str)
            printf("[0] (nil)\n");  /* Print when the string is NULL */
        else
            printf("[%u] %s\n", h->len, h->str);  /* Print string length and string */
        
        h = h->next;  /* Move to the next node */
        s++;  /* Increment the counter */
    }

    return (s);  /* Return the total number of nodes printed */
}

