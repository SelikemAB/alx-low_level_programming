#include<stdio.h>

/**
 * main - entry block
 * void: no argument assigned
 * Return: 0 -->  (Sucess)
 **/
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar(i / 10 % 10 + '0');
		putchar(i % 10 + '0');
		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
