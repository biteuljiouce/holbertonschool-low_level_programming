#include "holberton.h"

/**
 * puts2 - prints every other character of a string.
 * @str: char pointer
 *
 * Description: prints every other character of a string,
 * starting with the first character, followed by a new line.
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
