#include <main.h>

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @s: char pointer
 *
 * Return: int
 */
int _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
