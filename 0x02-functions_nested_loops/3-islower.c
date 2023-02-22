#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Function takes 1 char argument
 *
 * @c: The character
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else if ((c >= 'A') && (c <= 'Z'))
		return (0);

	return (0);
}
