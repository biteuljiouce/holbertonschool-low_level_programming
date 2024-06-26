#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked dlistint_t list.
* @h: pointer to doubly linked list
*
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nb = 0;

	while (h != NULL)
	{
		h = h->next;
		nb++;
	}
	return (nb);
}
