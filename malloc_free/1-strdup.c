#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Pointer to string to copy
 *This is a C function called _strdup that takes a string str as input and
 *returns a duplicate of the string on the heap.
* Return: Pointer to copied string
 */
char *_strdup(char *str)
{
	int i;
	/**
	 *Declare a loop counter.
	 */
	int len;
	/**
	 *Declare a variable to store the length of the input string.
	 */

	char *ret;
	/**
	 *Declare a pointer to store the new duplicated string.
	 */

	len = 0;
	/**
	 *Initialize the length of the input string to zero.
	 */

	if (str == NULL)
		/**
		 *Check if the input string is NULL.
		 */
		return (NULL);
	/**
	 *If it is, return NULL to indicate that no duplication was possible.
	 */
	/**
	 * If the input string is not NULL, iterate over it to determine its length.
	 */
	for (i = 0; str[i] != '\0'; i++)
		len += 1;

/**
 *Allocate memory on the heap for the new duplicated string.
 *The amount of memory allocated is len + 1, where the extra +1
 *is to account for the null terminator character at the end of the string.
 */
	ret = malloc(len + 1);
/**
 *Check if the malloc call was successful.
 */
	if (ret == NULL)
		return (NULL);
/**
*If it failed, return NULL to indicate that no duplication was possible.
*/
/**
 *If the malloc call was successful, iterate over the input string
 *again and copy each character to the new duplicated string.
 */
	for (i = 0; i < len; i++)
		ret[i] = str[i];

/**
 *Return the pointer to the new duplicated string.
 */
	return (ret);
}
