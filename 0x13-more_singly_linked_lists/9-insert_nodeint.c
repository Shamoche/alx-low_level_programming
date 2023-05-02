listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev, *curr;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	prev = *head;
	curr = (*head)->next;
	for (i = 1; curr && i < idx; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (i != idx || !curr)
	{
		free(new_node);
		return (NULL);
	}

	prev->next = new_node;
	new_node->next = curr;
	return (new_node);
}

