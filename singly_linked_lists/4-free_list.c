#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to head of linked list
 */

void free_list(list_t *head)
{
	/* check if head exists and has a next node */
	if (head && head->next)
		/* recursively call free_list on the next node */
		free_list(head->next);
	/* check if head exists and has a string */
	if (head && head->str)
		/* free the string */
		free(head->str);
	/* check if head exists */
	if (head)
		/* free the head node */
		free(head);
}
