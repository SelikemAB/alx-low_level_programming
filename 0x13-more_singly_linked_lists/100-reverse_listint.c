#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *nd;

	ptr = NULL;
	nd = NULL;

	while (*head != NULL)
	{
		nd = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = nd;
	}

	*head = ptr;
	return (*head);
}
