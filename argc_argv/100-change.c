#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: the number of arguments passed to the program.
 * @argv: an array of strings containing the arguments passed to the program.
 *
 * Return: 0 if successful, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/* Check for correct number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Parse the argument as an integer */
	cents = atoi(argv[1]);

	/* Check for negative input */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate minimum number of coins */
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}

	/* Print result */
	printf("%d\n", coins);

	return (0);
}
