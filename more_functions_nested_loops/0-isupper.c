#include "main.h"

/**
 * _isupper - checks if the int c is uppercase
 * @c: stdio for function
 * Return: Returns a 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
