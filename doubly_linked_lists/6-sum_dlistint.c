#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer to list's head
 * Return: The sum of all data on list, or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		/**
		 *it adds the value of the n field (an integer) to the sum variable 
		 *and moves to the next node.
		 */
		sum += head->n;
		head = head->next;
		/**
		 * When the end of the list is reached (i.e., when head is NULL),
		 *the function returns the value of sum.
		 */
	}
	return (sum);

}
