#include "main.h"

/**
 * rev_string - Swaps integers wih pointers.
 * @s: is a pointer to a char
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (i = len - 1; i >= 0; j--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
