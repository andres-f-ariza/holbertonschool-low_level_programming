#include "main.h"

/**
 *_print_rev_recursion - prints a string reversed, followed by a new line.
 *@s: String to print
 */

void print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		print_rev_recursion(s+1);
_putchar(*s);
	}
}

