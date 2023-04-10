#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list.
 * @head: Pointer to pointer to list's head
 * @index: Index to node to delete
 * Return: 1 on succeed, -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

/**
 *This is the function signature that takes a pointer to the pointer of the
 *head of the doubly linked list and an index.
 */

	dlistint_t *curr;
unsigned int actual_idx = 0;

/**
 *Declares a pointer to a doubly linked list node called curr and an
 *unsigned int variable called actual_idx that will be used to keep 
 *track of the current index.
 */
curr = *head;
while (curr)
	/**
	 *Set the curr pointer to the current node pointed to by the head and then loop over
	 *the list while curr is not NULL.
	 */
	if (index == actual_idx && index > 0)
	{
		if (curr->next)
			(curr->next)->prev = curr->prev;
		(curr->prev)->next = curr->next;
		free(curr);
		return (1);
	}
/**
 *If the current node is the one to be deleted, and the index is greater than 0,
 *adjust the next and previous pointers of the nodes around curr to remove it from
 *the list, free the memory allocated to curr, and return 1 indicating success.
 */
if (index == 0)
{
	if (curr && curr->next)
	{
		*head = curr->next;
		(curr->next)->prev = NULL;
		free(curr);
	}
	else
	{
		*head = NULL;
		free(curr);
	}
	return (1);
}
/**
 *If the index is 0, adjust the head pointer to point to the next node after curr
 *and adjust the previous pointer of the new head to NULL, free the memory allocated
 *to curr, and return 1 indicating success.
 */
curr = curr->next;
actual_idx++;
/**
 *Move curr to the next node and increment actual_idx.
 */
return (-1);
/**
 *If the index is not found in the list, return -1 indicating failure.
 */
