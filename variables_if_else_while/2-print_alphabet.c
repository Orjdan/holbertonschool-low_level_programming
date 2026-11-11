#include <stdio.h>

/**
 * main - prints the alphabet
 * in lowercase, then \n
 * while: defines the range of
 * putchar's stdout
 * Return: returns 0
 */

int main(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	printf("\n");
	return (0);
}
