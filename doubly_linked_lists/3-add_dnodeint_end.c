#include "lists.h"

/**

add_dnodeint_end - adds a new node at the end of a dlistint_t list.
@head: Pointer to pointer to head of the list
@n: Integer to add
Return: Address of new element or NULL if fail
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *new;

	curr = NULL; // Initialize the curr pointer to NULL
	if (*head) // Check if the head pointer is not NULL
		curr = (*head); // if the head pointer is not NULL set the curr pointer to head pointer

	while (curr && curr->next) // Check if the curr pointer is not NULL and the next pointer of the curr pointer is not NULL
		curr = curr->next; // Traverse the list till the last node and set the curr pointer to the last node

	new = malloc(sizeof(*new)); // Allocate memory for new node
	if (new == NULL) // Check if new node allocation is failed
		return (NULL); // If the new node allocation is failed return NULL

	new->n = n; // Set the integer value to the new node
	new->next = NULL; // Set the next pointer of the new node to NULL

	if (curr) // Check if the curr pointer is not NULL
	{
		new->prev = curr; // Set the previous pointer of the new node to the curr pointer
		curr->next = new; // Set the next pointer of the last node to the new node
	}
	else
		(*head) = new; // If the curr pointer is NULL, set the head pointer to the new node

	return (new); // Return the address of the new node
	
