#include <unistd.h>

/**
 * _putchar - Write/print a character to the stdout
 *
 * Functions takes 1 char argument and returns character.
 *
 * @c: The character of interest
 * Return: char c on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
