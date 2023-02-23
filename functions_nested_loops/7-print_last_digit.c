/**
*print_last_digit - Prints last digit of n
* @n: To be evaluated
*The given code is a C function named print_last_digit
*that takes an integer parameter n and returns an integer value.
*The purpose of this function is to print the last digit of
*the input integer n and return it as an absolute value.
*The function first computes the absolute value of n using the
*abs() function from the standard library, and then
*calculates the remainder when it is divided by
*10 using the modulus operator(%).
*This gives the last digit of the input integer.
*The function then converts the last digit to a character
*by adding it to the ASCII code of the character '0'
*(which has an ASCII code of 48). The resulting character is printed
*using the _putchar() function. Finally, the absolute value
*of the last digit is returned. The function assumes that the input
*parameter n is an integer. If the input is not an integer or is
*outside the range of representable integers, the behavior of
*this function is undefined.
* Return: last digit of
*/
#include "main.h"
#include <stdlib.h>
int print_last_digit(int n)
{
char t;
t = ((abs(n % 10)) + '0');
_putchar(t);
return (abs(n % 10));
}
