#include "holberton.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: char pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int half;

	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)
		half = len / 2;
	else
		half = (len + 1) / 2;

	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
