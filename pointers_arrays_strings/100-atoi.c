#include "main.h"

/**
 * _atoi - Function that converts a string into digits.
 * @s: pointer referencing the inputed string.
 * Return: returns r multiplied by it's relative '-' value.
 */
int _atoi(char *s)
{
	int i = 0;
	int r = 0;
	int sign = 1;
	int started = 0;

	while (s[i] != '\0' && started != 2)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			r = r * 10 + (s[i] - '0');
		}
		else if (started)
		{
			started++;
		}
		else if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	return (r * sign);
}
