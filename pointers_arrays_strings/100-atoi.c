#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: string to convert
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int i;
	int len = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
		else if (num > 0)
			break;
	}

	return (num * sign);
}
