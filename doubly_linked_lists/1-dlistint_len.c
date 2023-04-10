#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to head node of list
 * Return: Lenght of the list
 */

/**
 *It takes a pointer to the head node of the list as its argument.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t lenght = 0;

	/**
	 *The function initializes a variable called length to zero and loops through the 
	 *list using a while loop. During each iteration, it increments the length variable 
	 *and updates the current node to the next node. When the end of the list is reached 
	 *(i.e., h is NULL), the function returns the final value of length.
	 */

	while (h)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}#include "lists.h"

 /**
  * dlistint_len - returns the number of elements in a linked dlistint_t list.
  * @h: pointer to head node of list
  * Return: Lenght of the list
  */

 /**
  *It takes a pointer to the head node of the list as its argument.
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t lenght = 0;

	/**
	 *The function initializes a variable called length to zero and loops through the 
	 *list using a while loop. During each iteration, it increments the length variable 
	 *and updates the current node to the next node. When the end of the list is reached 
	 *(i.e., h is NULL), the function returns the final value of length.
	 */

	while (h)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
