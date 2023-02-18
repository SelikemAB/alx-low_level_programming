#include<stdio.h>

/**
 * main - entry block
 * void: no argument assigned
 * Return: 0 -->  (Sucess)
 **/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
