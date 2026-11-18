#include "main.h"

/**
 * _strlen - Takes in a string and counts the length.
 * @s: string input
 *
 * Return: Returns the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
