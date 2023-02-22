#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase followed by new line
 *
 * Function takes no arguments
 *
 * Return: alphabets in lowercase
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
