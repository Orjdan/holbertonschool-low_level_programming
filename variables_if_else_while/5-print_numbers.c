#include <stdio.h>

/**
 * main - Initializes function
 * that prints 0 - 10
 * Return: returns 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%i", a);
		a++;
	}
	printf("\n");
	return (0);
}
