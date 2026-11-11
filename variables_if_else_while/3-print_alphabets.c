#include <stdio.h>

/**
 * main - prints alphabet in lowercase,
 * then in uppercase, then \n
 * Return: returns 0
 */

int main(void)
{
	int a = 97;

	while (a > 64)
	{
		if (a < 123 && a > 96)
		{
			putchar(a);
			a++;
		}
		else if (a == 123)
		{
			a = a - 58;
		}
		else if (a > 64 && a < 91)
		{
			putchar(a);
			a++;
		}
		else
		{
			break;
		}
	}
	putchar(10);
	return (0);
}
