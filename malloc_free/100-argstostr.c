#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: Argument counter
 * @av: Argument vector
 * Return: Pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i; // declare integer variable i for loop iteration
	int j; // declare integer variable j for loop iteration
	int k; // declare integer variable k for loop iteration
	int len; // declare integer variable len for the total length of strings
	char *ret; // declare a pointer to a character for the concatenated string

	len = 0; // initialize len to 0
	if (ac == 0 || av == NULL) // check if the number of arguments is 0 or av is NULL
		return (NULL); // return NULL if either case is true

	/* calculate the length of the strings */
	for (i = 0; i < ac; i++) // iterate through the number of arguments
	{
		for (j = 0; av[i][j] != '\0'; j++) // iterate through the characters in the string
			len += 1; // increment len for each character in the string
	}

	/* allocate memory for the concatenated string */
	ret = (char *)malloc((len + ac + 1) * sizeof(char)); // allocate memory for concatenated string
	if (ret == NULL) // check if memory allocation is unsuccessful
		return (NULL); // return NULL if memory allocation fails

	/* concatenate the strings */
	for (k = 0; k < (len + ac - 1);) // iterate through concatenated string
	{
		for (i = 0; i < ac; i++) // iterate through the number of arguments
		{
			for (j = 0; av[i][j] != '\0'; j++) // iterate through the characters in the string
				ret[k + j] = av[i][j]; // concatenate characters to the string
			k += j; // update index
			ret[k] = '\n'; // add a new line character after each string
			k += 1; // update index
		}
	}
	return (ret); // return pointer to concatenated string
}
