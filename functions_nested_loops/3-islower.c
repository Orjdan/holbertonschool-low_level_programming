#include "main.h"

/**
 * _islower - checks an int is 'c'
 * @c: a character integer
 * Return: returns 1 or 0 based on comparison
 *-------------------
 * WHEN YOU GET HOME
 *--------------------
 * You're supposed to check if c, THE VARIABLE
 * is lowercase, not if a lowercase 'c' is c
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
