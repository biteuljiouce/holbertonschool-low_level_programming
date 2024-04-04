#include <string.h>
#include <stdio.h>

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
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i = i + 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
