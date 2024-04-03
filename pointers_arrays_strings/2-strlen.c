/**
 * _strlen - Returns the length of a string.
 * @s: char pointer to swap
 *
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
