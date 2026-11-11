#include <stdio.h>

/**
 * main - prints alphabet in
 * lowercase, then \n
 * if/else: avoids q & e
 * Return: returns 0
 */

int main(void)
{
	int a = 97;

	while (a > 96)
	{
		if (a == 113 || a == 101)
		{
			a++;
		}
		else if (a == 123)
		{
			break;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar(10);
	return (0);
}
