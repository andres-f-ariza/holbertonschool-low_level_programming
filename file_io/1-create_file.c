#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: Number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int aux;
	int power;

	aux = n;
	power = 0;
	/**
	 *The function definition starts by declaring and initializing a few
	 *variables that will be used in the conversion process. aux is a copy
	 *of the input number, and power will keep track of the highest power of
	 *2 that is less than or equal to n.*/

	if (n == 0)
		_putchar('0');
	/**
	 *If the input number n is zero, the function prints a 0 and returns.
	 */
	while (aux > 0)
	{
		power++;
		aux = aux >> 1;
	}
	/**
	 *This loop finds the highest power of 2 that is less than or equal to n
	 *by repeatedly shifting aux to the right by one bit (equivalent to
	 *dividing it by 2) until it becomes zero. The power variable keeps
	 *track of the number of times aux was shifted.
	 */
    while (power > 0)
    {
        aux = n >> (power - 1);
        _putchar((aux & 1) + '0');
        aux = n;
        power--;
    }
/**
 *This loop prints the binary representation of the input number by iterating
 *through each power of 2 from highest to lowest. The aux = n >> (power - 1)
 *line shifts n to the right by power - 1 bits, which aligns the highest bit of
 *n with the first bit position. The _putchar((aux & 1) + '0') line prints the
 *value of the lowest bit of aux, which is equivalent to the value of the
 *power-th bit of n. The + '0' part is necessary to convert the numerical value
 *of the bit to its ASCII representation, so that it can be printed. Finally,
 *aux = n resets aux to n for the next iteration of the loop, and power--
 *decrements the power of 2.
 */
