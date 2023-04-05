#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to list to print
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)

/**
 *function declaration in C that takes a pointer to the head(h)
 *of a linked list and returns the number of nodes in the list.
 *The const keyword, makes a variable read-only so it is before the list_t type indicates that the function will not modify the contents of the linked list.
 */
{
	size_t ret;
	/* Set the variable to zero */
	ret = 0;

	/* Loop through the list until the end is reached (h == NULL) */
	while (h != NULL)
	{
		/* If the current node's string is NULL, print "(nil)" */
		if (h->str == NULL)

	       {
/**
 *              The [0] part of the printed string is used to indicate the length of the string, which is 0 in this case.
 *The reason for including [0] in the printed string is to maintain a consistent format for printing out the contents of linked list nodes.
 */
		       
		       printf("[0] (nil)\n");
			h = h->next;
			ret += 1;
			continue;
		}

		/* Otherwise, print the length of the string and the string itself */
		printf("[%i] %s\n", h->len, h->str);

		/* Increment the node count */
		ret += 1;

		/* Move on to the next node */
		h = h->next;
	}

	/* Return the number of nodes in the list */
	return (ret);
}
