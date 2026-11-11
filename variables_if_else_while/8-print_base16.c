#include <stdio.h>

/**
 * main - initializes function
 * that prints hexadecimals
 * Return: returns 0
 */
int main(void)
{
	int a = 48;

	while (a < 103)
	{
		if (a > 96 && a < 103)
		{
			putchar(a);
			a++;
		}
		else if (a == 58)
		{
			a = 97;
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
