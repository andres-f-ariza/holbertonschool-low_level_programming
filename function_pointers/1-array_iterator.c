#include "function_pointers.h"


/**

 * array_iterator - executes a function given as a

 * parameter on each element of an array.

 * @array: Array of function arguments

 * @size: Size of the array

 * @action: Function to execute

 */

void array_iterator(int *array, size_t size, void (*action)(int)) {
	
	size_t i; // Declare a counter variable.
	

	
	// Check that the array, function pointer, and size are all valid.
	
	if (array != NULL && action != NULL && size > 0) {
		
		// Loop over each element in the array.
		
		for (i = 0; i < size; i++) {
			
			// Call the provided function on the current element of the array.
			
			action(array[i]);
			
		}
		
	}

}
