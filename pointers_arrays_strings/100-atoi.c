#include "main.h"

/**
* _atoi - convert a string to an integer.
* @s: the string to be converted.
*This code defines a function called _atoi which
*takes a character pointer s as input and returns an integer.
*The function starts by initializing two
*variables: sign and num. sign is set to 1,
*and num is set to 0.The function then enters a do-while loop.
*The loop continues until the value pointed to by s is null (\0).
*Inside the loop, the function checks the value pointed to
*by s.If the value is a minus sign (-), sign
*is multiplied by -1 to toggle between positive and negative numbers.
*If the value is a digit (0-9),
*the value is added to num by first multiplying num
*by 10 and then adding the numeric value of the character.
*If the value is not a digit and num is greater than 0,
*the loop breaks.After the loop, the function
*returns the product of num and sign.Overall, the _atoi
*function attempts to convert a string of characters to an integer.
*It takes into account a leading negative sign
*and ignores non-numeric characters after the
*first numeric character is encountered.
*Return: The integer value of the comverted string.
*/

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
} while
(*s++);
return (num *sign);
}
