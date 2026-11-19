#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: 1st integer to swap
 * @b: 2nd integer to swap
 */
void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
