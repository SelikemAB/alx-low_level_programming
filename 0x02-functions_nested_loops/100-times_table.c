#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * Function takes 1 int argument
 *
 * @n: The int argument
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int row, col, prod;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = row * col;
				if (col ==  0)
					_putchar(prod + 48);
				else if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + 48);
				}
				else if (prod <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((prod / 100) % 10) + 48);
					_putchar(((prod / 10) % 10) + 48);
					_putchar((prod % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
