#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * Function takes 1 argument
 *
 * @n: the integer number
 * Return: 1 and print + if positive, 0 and print 0 if zero
 * and -1 and - if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
