#include<stdio.h>

/**
 * main - entry block
 * void: no argument assigned
 * Return: 0 -->  (Sucess)
 **/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
