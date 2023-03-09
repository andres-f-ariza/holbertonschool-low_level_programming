#include <stdio.h>

/**
 * main - program that prints its name, and if renamed, it'll print the new name without having to compile it again.
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
