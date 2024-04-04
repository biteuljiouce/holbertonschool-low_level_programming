#include <stdio.h>

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: char pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	for (i = len; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
