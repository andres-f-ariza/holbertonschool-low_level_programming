#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to head pointer of list_t
 * @str: String to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux, *ret;
	char *copy;

	// Copy the string to a new memory location
	copy = strdup(str);
	if (copy == NULL)
		return (NULL);

	// Set the aux pointer to the head of the list.
/**
	*This is done so that we can traverse the list without modifying the original head pointer.
	*/
		aux = *head;

	// Traverse the list until the last node is reached,
	//which is determined by checking if aux is not NULL and aux->next is NULL.
							while (aux && aux->next)
								aux = aux->next;

	// Allocate memory for a new list_t node.
	//Once it reaches the end of the list, it creates a new list_t struct called ret
		*using malloc, and assigns the str argument to ret->str.
		ret = (list_t *)malloc(sizeof(list_t));
		//If the ret pointer is NULL, it means there was an error allocating memory,
		*so the function returns NULL.
		if (ret == NULL)
			return (NULL);

	// If aux is NULL, it means the list was empty, so we need to update the value
		//of head to point to ret, and also update the value of aux to point to ret.
		if (aux == NULL)
		{
			aux = ret;
			*head = ret;
		}

	// If aux is not NULL, it means the list was not empty,
	//so we update aux->next to point to ret.
		*ret is the new node that will be added at the end of the list.
		*and is in here that it will be added.
		aux->next = ret;

	// Set the new node's string and length values
	ret->len = strlen(str);
	ret->str = copy;
	ret->next = NULL;

	// Return the address of the new node
	return (ret);
}
