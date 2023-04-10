#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to list's head
 * @index: Index of required node
 * Return: Address of required node or NULL if node is not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
/**
 *head is a pointer to the head of the list, and index is the index of the required node.
 */
{
	unsigned int actual_idx = 0;
	/**
	 *The function uses a loop to traverse the list until the index of the current node
	 *is equal to the required index.
	 */
	 while (head)
	 {
	 if (index == actual_idx)
	 return (head);
	 head = head->next;
	 actual_idx++;
	 }
	 /**
	 *If the required node is found, the function returns a pointer to it. Otherwise,
	 *the function returns NULL.
	 */
	return (NULL);
}
