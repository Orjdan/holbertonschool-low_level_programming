#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting from 1st char.
 * @str: string input
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str != '\0')
		{
			str++;
		}
	}
	_putchar('\n');

}
