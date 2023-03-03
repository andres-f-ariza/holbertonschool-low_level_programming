#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: Pointer to matrix
 * @size: Size of square matrix
 */

void print_diagsums(int *a, int size)
{

        int i;
	int ts;
	int sum1;
	int sum2;
	sum1 = 0;
	sum2 = 0;
/**
*ts - calculates the total number of elements
*/
	ts = size * size;
/**
 *this loop goes through all the elements of the square matrix
 *that belong to the diagonal, the loop contains a cummulative
 *variable that adds up every element in the first diagonal.
 */
	for (i = 0; i < ts; i += size + 1)
	{
		sum1 = sum1 + a[i];
	}
/**
 *this loop goes through all the elements of the square matrix
 *that belong to the second diagonal, in order to achieve this
 *it starts from the from the last column of the matrix, which
 *is n-1 (bcs indexes inside the matrix are 0-based), it
 *finishes in 'ts - size - 1'
 *the loop contains a cummulative
 *variable that adds up every element in the second diagonal.
 */
	for (i = (size - 1); i <= (ts - size - 1); i += size - 1)
	{
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
