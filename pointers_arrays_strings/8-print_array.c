#include "main.h"
#include <stdio.h>

/**
 * print_array - prints 'n' elements of an array, then new line
 * @a: pointers inputed to function
 * @n: number of elements of array printed
 */
void print_array(int *a, int n)
{
	int i = 0;
	int f = 0;

	while (n > i)
	{
		printf("%d", a[i]);

		if (n > f)
		{
			printf(", ");
		}

		i++;
		f = i + 1;
	}

	printf("\n");

}
