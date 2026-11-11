#include <stdio.h>

/**
 * main - Initializes function
 * that uses putchar to print 0 - 9
 * Return: returns 0
 */

int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar (a);
		a++;
	}
	putchar (10);
	return (0);
}
