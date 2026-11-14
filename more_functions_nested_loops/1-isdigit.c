#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: stdin for function
 * Return: returns a 1 if c is digit, else a 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
