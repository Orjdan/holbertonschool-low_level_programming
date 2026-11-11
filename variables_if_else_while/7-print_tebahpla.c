#include <stdio.h>

/**
 * main - prints the alphabet
 * in lowercase in reverse, then \n
 * while: defines the range of
 * putchar's stdout
 * Return: returns 0
 */

int main(void)
{
	int a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
