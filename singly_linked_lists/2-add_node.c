#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to head of the linked list
 * @str: String to add
 * Return: the address of the new element, or NULL if it failed
 */
/**
 **add_node is a pointer to a function that returns a pointer to list_t. 
 *This function takes two parameters, a pointer to a pointer to list_t 
 *and a pointer to constant character (a string).
 *
 *head is a pointer to a pointer to list_t, which allows us to modify 
 *the head of the linked list directly. If we just passed a pointer 
 *to list_t instead of a pointer to a pointer, we could still modify 
 *the nodes themselves, but we would not be able to modify the head of
 *the list. This would require returning the new head of the list from
 *the add_node function, which is less efficient and less clear than 
 *using a pointer to a pointer.
 */
list_t *add_node(list_t **head, const char *str)
{
	/* Allocate memory for a new list_t struct */
	list_t *ret;
	/**
	 *The (list_t *) part in ret = (list_t *)malloc(sizeof(list_t)); is a typecast.
	 *The malloc function returns a void pointer void * to the allocated block of 
	 *memory by default. In this case, we want to allocate memory for a list_t node, 
	 *so we need to cast the void pointer returned by malloc to a pointer of type list_t *.
	 *So (list_t *)malloc(sizeof(list_t)); allocates memory of size sizeof(list_t) 
	 *and returns a pointer of type list_t *, which is assigned to ret.
	 *REMEMBER: a pointer of type list_t * is a pointer to a list_t structure.

	 ret = (list_t *)malloc(sizeof(list_t));

	 /* If memory allocation failed, return NULL */
	if (ret == NULL)
		return (NULL);

	/* Get the length of the string */
	unsigned int len;
	len = strlen(str);

	/* Make a copy of the string */
	char *copy;
	copy = strdup(str);

	/* If string duplication failed, free memory and return NULL */
	if (copy == NULL)
	{
		free(ret);
		return (NULL);
	}

	/* Set the string, length, and next pointer for the new list_t */
	ret->str = copy;
	ret->len = len;
	ret->next = *head;

	/* Update the head to point to the new list_t. Before *head = ret;, 
	 *the content of *head would be the address of the previous head of the linked list. 
	 *In other words, *head would be a pointer to the first node of the linked list. 
	 *If the linked list was empty, *head would be NULL.*/
	*head = ret;

	/* Return the address of the new list_t */
	return (ret);
}
