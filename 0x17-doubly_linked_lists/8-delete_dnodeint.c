#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index index of a list.
 *@head: linked list.
 *@index: indx to delete.
 *Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *prev = NULL;
	unsigned int idx = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	prev = tmp;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp != NULL && idx != index)
	{
		prev = tmp;
		tmp = tmp->next;
		idx++;
	}
	if (idx == index && tmp != NULL)
	{
		prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = prev;
		free(tmp);
		tmp = NULL;
		return (1);
	} else
		return (-1);
}
