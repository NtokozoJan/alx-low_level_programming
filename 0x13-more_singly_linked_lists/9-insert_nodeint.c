#include <stdlib.h>
#include "lists.h"

/**
 * create_node - Creates a new node with the given value.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *create_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = create_node(n);

		if (new_node == NULL)
			return (NULL);

		new_node->next = *head;

		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (idx > 1 && current != NULL)
	{
		current = current->next;

		idx--;
	}

	if (current == NULL)
		return (NULL);

	new_node = create_node(n);

	if (new_node == NULL)
		return (NULL);

	new_node->next = current->next;

	current->next = new_node;

	return (new_node);
}
