#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list..
 * @head: A pointer to the Head of the listint_t list..
 * @index: The Index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL..
 *         Otherwise - the located node..
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int Node;

	for (Node = 0; Node < index; Node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
