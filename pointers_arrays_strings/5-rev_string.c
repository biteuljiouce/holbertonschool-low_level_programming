#include <string.h>

/**
 * rev_string - Reverses a string.
 * @s: char pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char tmp;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
