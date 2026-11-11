#include <stdio.h>

/**
 * main - initializes function
 * prints all possible combination of
 *	single-digit numbers
 *	seperated by ', ' in asc order
 *	putchar only, max 4 times
 *	no char
 * Return: returns 0
 */
int main(void)
{
	int a = 48;

	while
		(a < 58)
	{
		putchar (a);
		a++;
		if (a > 48 && a <= 57)
		{
			putchar (44);
			putchar (32);
		}
	}
	putchar(10);
	return (0);
}
