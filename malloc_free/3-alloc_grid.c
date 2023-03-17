#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate memory for a 2D array of integers
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: pointer to 2D array of integers (Success), NULL (Failure)
 */
int **alloc_grid(int width, int height)
{
	int i; // declare integer variable "i"
	int j; // declare integer variable "j"
	int **ret; // declare pointer variable "ret"

	/* allocate memory for array of pointers to int */
	ret = (int **)malloc(sizeof(int *) * height);

	/* check if memory allocation was successful or if width and height are invalid */
	if (ret == NULL || (width * height) <= 0)
		return (NULL);

	/* allocate memory for each row of the 2D array */
	for (i = 0; i < height; i++)
	{
		ret[i] = (int *)malloc(sizeof(int) * width);
		/* check if memory allocation was successful */
		if (ret[i] == NULL)
		{
			/* free memory for previous rows that were allocated */
			while (i >= 0)
			{
				free(ret[i]);
				i--;
			}
			/* free memory for array of pointers to int */
			free(ret);
			return (NULL);
		}
		/* initialize values of each element in the row to 0 */
		for (j = 0; j < width; j++)
			ret[i][j] = 0;
	}

	return (ret); // return pointer to 2D array of integers
}

