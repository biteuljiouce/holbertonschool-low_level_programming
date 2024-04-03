/**
 * swap_int - Swaps the values of two integers.
 * @a: integer pointer to swap
 * @b: integer pointer to swap
 *
 * Return: always void
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
