#include "main.h"  // includes header file "main.h"

#include <stddef.h> // includes standard library header file "stddef.h"
#include <stdlib.h> // includes standard library header file "stdlib.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to concatenated string (Success), NULL (Failure)
 */
char *str_concat(char *s1, char *s2)
{
	int i;  // declare integer variable "i"
	int len1; // declare integer variable "len1"
	int len2; // declare integer variable "len2"
	char *ret; // declare pointer variable "ret"

	len1 = 0; // set "len1" to 0
	len2 = 0; // set "len2" to 0

	/* check if s1 is NULL, if so, set s1 to "\0" */
	if (s1 == NULL)
		s1 = "\0";

	/* check if s2 is NULL, if so, set s2 to "\0" */
	if (s2 == NULL)
		s2 = "\0";

	/* calculate length of s1 */
	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;

	/* calculate length of s2 */
	for (i = 0; s2[i] != '\0'; i++)
		len2 += 1;

	/* allocate memory for concatenated string */
	ret = malloc(len1 + len2 + 1);

	/* check if memory allocation was successful */
	if (ret == NULL)
		return (NULL);

	/* copy characters from s1 to ret */
	for (i = 0; i < len1; i++)
		ret[i] = s1[i];

	/* copy characters from s2 to ret */
	for (i = len1; i < (len1 + len2); i++)
		ret[i] = s2[i - len1];

	return (ret); // return pointer to concatenated string
}
