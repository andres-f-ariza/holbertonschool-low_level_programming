#include "main.h"

/**
 * binary_to_uint - converts a binary number represented as a string to
 * an unsigned int.
 * @b: Pointer to a string which contains the binary number
 * Return: Converted number or 0 if the string is NULL or if there is
 * a character different of 0 and 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret;
	int i, j;

	ret = 0;
	i = 0;
	j = 0;
	if (b == NULL)
		return (0);
/**
 *If the input string b is NULL, the function returns 0.
 */
	while (b[i] != '\0')
		i++;
	i--;
/**
 *This loop finds the length of the input string by iterating through
 *it until it reaches the null character ('\0') and then decrementing
 *the index i by one to point to the last non-null character in the string.
 */
	while (i >= 0)
    {
        if (b[i] == '0' || b[i] == '1')
        {
            ret += (b[i] - '0') << j;
            i--;
            j++;
        }
        else
            return (0);
    }

/**
 *This loop iterates through the string from the last character to the first,
 *and for each character it checks if it's a 0 or a 1. If it's a 0, it doesn't
 *contribute to the final result. If it's a 1, it adds the value 2^j to the
 *result, where j is the index of the 1 in the string, starting from 0 for the
 *rightmost bit. The << operator is a left bit shift, which effectively
 *multiplies the value of (b[i] - '0') by 2^j. The loop also increments the j
 *index and decrements the i index. If any character in the input string is
 *not a 0 or a 1, the function returns 0.
 */
	return (ret);
}
/**
 *Finally, the function returns the result of the conversion as an unsigned
 *integer.
 */
