#include "main.h"
#include <stdio.h>

/**
 * main - prints the Fizz Buzz test.
 *
 * Return: returns 0
 */

int main(void)
{
	int i = 1;
	int c = 1;
	int fb_c = 0;

	while (i >= 1 && i <= 100)
	{
		if ((i % 3)  == 0)
		{
			if ((i % 5) == 0)
			{
				printf("FizzBuzz");
				fb_c++;
			}
			else
			{
				printf("Fizz");
			}
			c--;
		}
		if ((i % 5) == 0 && fb_c != 1)
		{
			printf("Buzz");
			c--;
		}
		if (c == 1)
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		i++;
		c = 1;
		fb_c = 0;
	}
	printf("\n");
	return (0);
}
