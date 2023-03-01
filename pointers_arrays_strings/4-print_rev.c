#include "main.h"

/**
* _strlen - returns the length of a string.
*@s: Pointer to string to measure
*Return: Lenght of the string
*This dunction declares two variable of integer type i, len and
*initializes both of them to 0, it enters a while loop
*that continues until i = null(\0),
*which marks the end of any string.
*Inside the loop, the length 'len' is incremented by 1 for
*each character of the string is encountered, the index (i)
*is also incremented in each iteration
*when the loop finishes it returns the value of len
*/

int _strlen(char *s)
{
int i;
int len;
i = 0;
len = 0;
while (*(s + i) != '\0')
{
len = len + 1;
i++;
}
return (len);
}

/**
* print_rev - reverses a string.
* @s: Pointer to string to reverse
*This function declares an integer variable i and
*initializes it to the length of the string minus 1.
*The _strlen function returns the length of the string.
*It enters a for loop that starts with the value of
*i and continues as long as i is greater than or equal to 0.
*Inside the loop, the function calls the _putchar
*function to print the character pointed to by the pointers
*plus the value of i. This character is the last character
*of the string on the first iteration, the second-to-last
*character on the second iteration, and so on,
*until the first character is printed.
*The index i is decremented by 1 in each iteration of the loop.
*After the loop has finished, the function calls _putchar again
*to print a newline character, so that the next
*line of output will start on a new line.
*Return: Always 0
*/



void print_rev(char *s)
{
int i;
i = _strlen(s) - 1;
for (; i >= 0; i = i - 1)
{
_putchar(*(s + i));
}
_putchar('\n');
}
