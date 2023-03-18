#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * strtow - splits a string into words.
 * @str: String to split
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int i, j, k, l, words, wlen;
	char **ret;

	/* Initialize variables */
	words = wlen = l = 0;
	if (str[0] == '\0' || str == NULL) /* If input string is empty or NULL, return NULL */
		return (NULL);

	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words += 1;
	}

	/* Allocate memory for an array of pointers to store words */
	ret = (char **)malloc((words + 1) * sizeof(char *));
	if (ret == NULL || words == 0)
		return (NULL);

	/* Loop through string to extract each word */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ') /* If character is not space, start extracting word */
		{
			/* Count the length of the word */
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				wlen += 1;

			/* Allocate memory for the word */
			ret[l] = (char *)malloc((wlen + 1) * sizeof(char));
			if (ret[l] == NULL) /* If allocation fails, free previous allocations and return NULL */
			{
				for (; l >= 0; l--)
					free(ret[l]);
				free(ret);
				return (NULL);
			}

			/* Copy the word from the string to the allocated memory */
			for (j = i, k = 0; str[j] != ' ' && str[j] != '\0'; j++, k++)
				ret[l][k] = str[j];
			ret[l][k] = '\0';

			/* Reset word length and increment word count and index */
			wlen = 0;
			l++;
			i = j - 1;
		}
	}

	/* Set the last pointer in the array to NULL */
	ret[l] = NULL;

	return (ret);
}
/**
 *You can print the pointer to an array of strings (words) by iterating through
 *the array and printing each individual string using a loop.
 */
#include <stdio.h>

void print_words(char **words)
{
	int i = 0;
	while (words[i] != NULL) {
		printf("%s\n", words[i]);
		i++;
	}
}
