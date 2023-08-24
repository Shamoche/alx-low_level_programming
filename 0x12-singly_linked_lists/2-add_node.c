#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Creates a new node and adds it to the beginning of a linked list.
 * @head: A double pointer to the list_t list.
 * @str: The string to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if memory allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    unsigned int len = 0;

    while (str[len])
        len++;

    new = malloc(sizeof(list_t));
    if (!new)
        return (NULL);

    new->str = strdup(str);
    new->len = len;
    new->next = (*head);
    (*head) = new;

    return (*head);
}

