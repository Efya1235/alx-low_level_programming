#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @p: Pointer to a list.
 * Return: Integer.
 **/
size_t print_listint(const listint_t *p)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = p;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);

}
