#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list.
* @h: pointer to doubly linked list
*
* Return: number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nb++;
	}
	return (nb);
}
