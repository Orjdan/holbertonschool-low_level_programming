#include "main.h"

/**
 * puts_half - prints half the string, followed by a new line.
 * @str: stdin for string
 */
void puts_half(char *str)
{
	char *start = str;
	int i = 0;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}

	start = start + i;

	while (*start != '\0')
	{
		_putchar(*start);
		start++;
	}
	_putchar('\n');
}
