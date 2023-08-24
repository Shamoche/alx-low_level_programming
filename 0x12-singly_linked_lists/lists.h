#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Structure for a singly linked list
 * @str: Pointer to a dynamically allocated string
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: Defines the structure for a singly linked list node,
 *              used in the context of the Holberton project.
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - Prints all elements of a linked list
 * @h: Pointer to the head node of the list
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h);

/**
 * list_len - Counts the number of nodes in a linked list
 * @h: Pointer to the head node of the list
 * Return: Number of nodes in the list
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to a pointer to the head node of the list
 * @str: String to be added in the new node
 * Return: Address of the new head node
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Pointer to a pointer to the head node of the list
 * @str: String to be added in the new node
 * Return: Address of the new end node
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees all nodes of a linked list
 * @head: Pointer to the head node of the list to be freed
 */
void free_list(list_t *head);

#endif /* LISTS_H */

