#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index 
 * @head: pointer to head pointer of linked list
 * @index: index to delete node
 * Return: 1 if succeeded, or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int node= 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (node < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		node++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
