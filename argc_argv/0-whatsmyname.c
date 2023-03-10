#include <stdio.h>

/**
 * main - program that prints its name, and if renamed,
 *it'll print the new name without having to compile it again.
 * @argc: Argument counter
 * @argv: Argument vector
 *In this program, the argc argument is annotated with the
 *attribute __attribute__((unused)), which indicates to the
 *compiler that this variable may be unused and can be ignored.
 *This is because the program does not actually use the argc variable.
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
/**
 *argv[0] always contains the name of the program
 *"%s\n" expects a string
 */
	printf("%s\n", argv[0]);
	return (0);
}
