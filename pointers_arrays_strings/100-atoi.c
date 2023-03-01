#include "main.h"

/**
*_strlen - returns the length of a string.
* @s: Pointer to string to measure
* Return: Lenght of the string
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
* _atoi - convert a string to an integer.
* @s: Pointer to string to translate
*The code you provided is a C function named _atoi that takes
*a single argument: a pointer to a character array s.
*unsigned int i: Declare an unsigned integer
*variable i to use as a loop counter.
*unsigned int len: Declare an unsigned integer variable
*len to store the length of the input string s.
*int ret: Declare an integer variable ret to store
*the result of the conversion from string to integer.
*int sign: Declare an integer variable sign to
*keep track of the sign of the integer value.sign = 0:
*Initialize the sign variable to zero.
*ret = 0: Initialize the result variable to zero.
*len = _strlen(s): Calculate the length of the input
*string s using the _strlen function
*for (i = 0; i < len; i++): Loop through each character in the input string.
*if (*(s + i) == 45): Check if the current character*is a minus sign (ASCII code 45). If it is,
*increment the sign variable to indicate a negative value.
*else if (*(s + i) >= 48 && 
*(s + i) <= 57): Check if the current
*character is a digit (ASCII codes 48 to 57). If it is, convert the
*character to its corresponding integer value using the '0'
*character as a reference, and add it to the ret variable.
*else if (ret > 0): If the current character is not
*a digit and the ret variable is already greater than zero, exit the
*loop. This is to handle cases where the input string
*contains non-digit characters after the digits that should
*be used in the integer conversion.
*else if (ret > 0): If the current character is not a digit
*and the ret variable is already greater than zero,
*exit the loop. This is to handle cases where the input string contains
*non-digit characters after the digits that should be used
*in the integer conversion.
*Return: Int from string*/

int _atoi(char *s)
{
unsigned int i;
unsigned int len;
int ret;
int sign;
sign = 0;
ret = 0;
len = _strlen(s);
for (i = 0; i < len; i++)
{
if (*(s + i) == 45)sign = sign + 1;
else if (*(s + i) >= 48 && *(s + i) <= 57)ret = (ret * 10) + (*(s + i) - '0');
else if (ret > 0)
break;
}
if(sign % 2 != 0)ret = ret * -1;
return (ret);
}
