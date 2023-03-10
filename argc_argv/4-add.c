#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		sum = 0;
/**
 *i starts in 1 in order to not include the name of the program
 */
		for (i = 1; i < argc; i++)

	       {
/**
 *this for loop checks if the argument is a number that goes from 0 to 9
 *The loop variable i represents the index of the current argument being
 *processed, while j represents the index of the current character within
 *the argument.
 *The *(argv[i] + j) syntax is used to access the j-th character
 *of the i-th argument.
 */
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (*(argv[i] + j) >= 48 && *(argv[i] + j) <= 57)
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
