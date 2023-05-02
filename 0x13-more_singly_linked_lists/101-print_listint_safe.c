#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *slow = head, *fast = head;

	while (fast && fast->next && fast->next < fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		num++;
		slow = slow->next;
		fast = fast->next->next;
	}

	if (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		num++;
		slow = slow->next;
		fast = fast->next;
		printf("-> [%p] %d\n", (void *)fast, fast->n);
		num++;
	}

	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		num++;
		slow = slow->next;
	}

	return (num);
}

