#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int c, i, j, size;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	arg = (char *) malloc((c + 1) * sizeof(char));

	if (arg == NULL)
	{
		free(arg);
		return (NULL);
	}

	for (i = j = size = 0; size < c; j++, size++)
	{
		if (av[i][j] == '\0')
		{
			arg[size] = '\n';
			i++;
			size++;
			j = 0;
		}
		if (size < c - 1)
			arg[size] = av[i][j];
	}
	arg[size] = '\0';

	return (arg);
