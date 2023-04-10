#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to pointer of list's head
 * @idx: Index to insert new node
 * @n: int to insert
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

/**
 *The function takes in a pointer to the head of the list, an index at which
 *to insert the new node, and the integer value for the new node.
 */
	dlistint_t *curr, *new;
unsigned int actual_idx = 1;
/**
 *We declare two pointers curr and new of type dlistint_t, curr will be used
 *to traverse the list and new will hold the newly created node. We also declare
 *an integer variable actual_idx that will be used to keep track of the current
 *index as we traverse the list.
 */
if (idx == 0)
	return (add_dnodeint(h, n));
/**
 *If the index is 0, we simply add the new node to the beginning of the list using
 *the add_dnodeint() function and return the newly created node.
 */
curr = (*h)->next;
while (curr)
	/**
	 *We start traversing the list from the second node, since we have already checked
	 *the case where the index is 0. We traverse the list until we either find the index
	 *where we want to insert the new node or we reach the end of the list.
	 */
{
	if (actual_idx == idx)
	{
		/**
		 *If we find the index where we want to insert the new node, we allocate memory for
		 *the new node, set its data to the input value, and update the pointers of the
		 *adjacent nodes to properly link the new node.
		 */
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		/*sets the value of the n member of the new node to the value passed as the
		 *parameter n to the function.
		 */
		new->n = n;
		/* 
		 *The (curr->prev) expression accesses the node that comes before the curr node,
		 *and the next member of that node is updated to point to the new node, which 
		 *effectively inserts the new node into the list.
		 */
		(curr->prev)->next = new;
		new->prev = curr->prev;
		curr->prev = new;
		new->next = curr;
		return (new);
	}
	curr = curr->next;
	actual_idx++;
}
if (idx == (actual_idx))
	return (add_dnodeint_end(h, n));
/**
 *If we reach the end of the list without finding the desired index, we check if the
 *desired index is equal to the length of the list. If it is, we add the new node to
 *the end of the list using the add_dnodeint_end() function and return the newly
 *created node.
 */
return (NULL);
/**
 *If we reach this point in the code, it means the index provided is out of range,
 *and we return NULL to indicate failure.
 */
