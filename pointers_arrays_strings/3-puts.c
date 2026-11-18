#include "main.h"

/**
 * _puts - prints string & new line to stdout
 * @str: pointer to string
 *
 * Return: ??
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
