#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: Pointer to head node of list to print
 * Return: number of nodes on list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t lenght = 0;

	// Iterate over the linked list and print n (each node's value)
	while (h)
	{
		printf("%d\n", h->n);
		lenght++;
		h = h->next;
	}

	// Return the number of nodes in the list
	return (lenght);
}
