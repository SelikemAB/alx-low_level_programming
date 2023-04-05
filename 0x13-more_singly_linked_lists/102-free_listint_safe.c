#include "lists.h"
#include<stddef.h>

/**
 * free_listint_safe - Frees a linked list
 *
 * @h: Pointer to the first node in the linked list
 *
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp = NULL;

	if (h == NULL || *h == NULL)
	{
		return (len);
	}

	while (*h != NULL)
	{
		/* Calculate the difference between the current node and the next node */
		ptrdiff_t diff = *h - (*h)->next;

		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

