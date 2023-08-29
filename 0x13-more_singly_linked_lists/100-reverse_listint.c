#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list..
 * @head: A pointer to the address of
 *        the head of the list_t list..
 *
 * Return: A pointer to the first node of the reversed list..
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	if (head == NULL || *head == NULL)
		return (NULL);

	n = NULL;

	while ((*head)->next != NULL)
	{
		p = (*head)->next;
		(*head)->next = n;
		n = *head;
		*head = p;
	}

	(*head)->next = n;

	return (*head);
}
