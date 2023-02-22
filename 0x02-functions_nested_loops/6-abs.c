#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * Function takes 1 int argument
 *
 * @n: the integer number
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else if (n == 0)
		return (0);
	return (0);
}
