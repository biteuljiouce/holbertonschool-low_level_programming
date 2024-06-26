#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: pointer to buffer
 * @src: pointer to char (string)
 *
 * Description: copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
