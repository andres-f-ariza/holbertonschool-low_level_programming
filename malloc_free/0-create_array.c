#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - dynamically allocates memory for an array of chars
 * and initializes all its elements with a specific char
 *
 * @size: unsigned integer representing the size of the array to create
 * @c: character to initialize each element of the array with
 *
 * Return: pointer to the newly created and initialized array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *ar;  /* declare a pointer to a char array */
	unsigned int i;  /* declare an unsigned integer i for looping */

	/* dynamically allocate memory for the array of size bytes */
	ar = malloc(size);
	/* check if the allocation was successful or if size is 0 */
	if (size == 0 || ar == NULL)
		return (NULL);  /* return NULL to indicate an error */

	/* initialize each element of the array with the specified char */
	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);  /* return pointer to the initialized array */
}
