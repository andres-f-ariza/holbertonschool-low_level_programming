#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to pointer of head node of the list
 * @n: Intiger to add
 * Return: The address of the new node, or NULL on fail
 */
/**
 *This line defines the function add_dnodeint that takes a double pointer to
 *the head of the list and an integer n to add to the list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
/**
 *These lines allocate memory for a new node of type dlistint_t and check if
 *memory allocation was successful. If not, the function returns NULL.
 */
	dlistint_t *new;

new = malloc(sizeof(*new));
if (new == NULL)
	return (NULL);
/**
 *These lines set the prev pointer of the new node to NULL and set its n field
 *to the input n. Then, it checks if the input head is not NULL and if the 
 **head is not NULL. If so, it sets the prev pointer of the original head node
 *to point to the new node, and sets the next pointer of the new node to point
 *to the original head node. Otherwise, it sets the next pointer of the new node
 *to NULL. Finally, it updates the *head to point to the new node.
 */

return (new);
/**
 *This line returns the address of the new node.
 */
