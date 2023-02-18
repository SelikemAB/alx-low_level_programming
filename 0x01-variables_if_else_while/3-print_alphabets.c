#include<stdio.h>

/**
 * main - entry block
 * void: no argument assigned
 * Return: 0 -->  (Sucess)
 **/
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
