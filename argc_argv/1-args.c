#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: Counter of arguments
 * @argv: Vector of arguments
 *_attribute_((unused)) indicates to the compiler that this
 *variable may be unused and can be ignored.
 *the reason for substracting 1 is bcs the first element
 *of the 'argv'array always contains the name of the program.
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
