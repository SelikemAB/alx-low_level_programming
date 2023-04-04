#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Description: printing all the elements of a listint_t list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *s)
{
	size_t num = 0;

	while (s)
	{
		printf("%d\n", s->n);
		num++;
		s = s->next;
	}

	return (num);
}
