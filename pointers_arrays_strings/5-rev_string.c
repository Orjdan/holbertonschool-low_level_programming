#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 */
void rev_string(char *s)
{

	char *start = s;
	char temp;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (start < end)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
