#include "function_pointers.h"
	
/**
 * int_index - searches for an integer using the cmp function
 * @array: array to look into
 * @size: Size of the array
 * @cmp: Pointer to function to compare
 * Return: Index of the first match, or -1 if there's no match
 * or if size is 0 or less.
 */
int int_index(int *array, int size, int (*cmp)(int)) {
	int i; // Declare a counter variable.

	// Check if the array size is 0 or less.
	if (size <= 0)
		return (-1);

	// Check that the array and function pointer are not NULL.
	if (array !=  NULL && cmp != NULL) {
		// Loop over each element in the array.
		for (i = 0; i < size; i++) {
			// Call the provided function on the current element of the array.
			// If the result is not 0, return the current index.
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	// If no match was found, or if the array or function pointer is NULL, return -1.
	return (-1);
}
