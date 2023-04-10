#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to list's head
 */



void free_dlistint(dlistint_t *head)

/**
 *It declares two pointers to dlistint_t structs, head and curr.
 */
{
	dlistint_t *curr;

	/**
	 *It enters a loop that continues while head is not NULL.
	 *Inside the loop, it sets curr to the next node after head.
	 *It frees head using free().
	 *Finally, it sets head to curr, which moves on to the next node in the list.
	 *When the loop is done, all the nodes in the list have been freed, 
	 *and the function returns.
	 */

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
