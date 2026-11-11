#include <stdio.h>

/**
 * main - initializes function
 * that prints hexadecimals
 * Return: returns 0
 */
int main(void)
{
	int a = 48;

	while (a < 71)
	{
		if (a > 47 && a < 58)
		{
			putchar(a);
			a++;
		}
		else if (a == 58)
		{
			a = 65;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar (10);
	return (0);
}
