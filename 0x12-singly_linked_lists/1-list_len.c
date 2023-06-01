/*
 * File: 1-list_len.c
 * Auth: Lilian
 */

#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @y: The linked list_t list.
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *y)
{
	size_t elements = 0;

	while (y)
	{
		elements++;
		y = y->next;
	}

	return (elements);
}
