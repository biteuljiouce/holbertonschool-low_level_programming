#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* of a dlistint_t linked list.
* @h: double pointer to doubly linked list
* @idx: index where to insert the new node
* @n: value of the new node
*
* Return: pointer to the new node or NULL if insertion failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;
	unsigned int i = 0;

	tmp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	while ((tmp != NULL) || (i < idx + 1))
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->next = tmp;
			if (tmp->prev != NULL)
			{
				new_node->prev = tmp->prev;
				tmp->prev->next = new_node;
				tmp->prev = new_node;
			}
			else
			{
				*h = new_node;
				new_node->prev = NULL;
			}
			return (new_node);
		}
		if (tmp->next != NULL)
			tmp = tmp->next;
		else
		{
			new_node->n = n;
			new_node->next = NULL;
			new_node->prev = tmp;
			tmp->next = new_node;
			return (new_node);
		}
		i++;
	}
	return (NULL);
}
