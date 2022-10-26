#include "main.h"
/**
 * puts2 - Swaps integers wih pointers.
 * @str: is a pointer to a char
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
