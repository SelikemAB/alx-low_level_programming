#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_pointer;
	listint_t *next_node;

	next_pointer = NULL;
	next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = next_pointer;
		next_pointer = *head;
		*head = next_node;
	}

	*head = *next_pointer;
	return (*head);
}
