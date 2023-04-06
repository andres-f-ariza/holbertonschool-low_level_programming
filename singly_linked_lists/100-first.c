#include <stdio.h>

/**
 * first - Print something before main
 */

/**
 *This code defines a function called first using the __attribute__ GCC
 *extension to mark it as a constructor function. A constructor function
 *is a special type of function that is automatically called when the
*program starts, before main() is executed.
 */
void __attribute__ ((constructor)) first()
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
