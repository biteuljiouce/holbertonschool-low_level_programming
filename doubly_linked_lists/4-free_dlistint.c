#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
* @head: pointer to doubly linked list
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	free(head);
}
