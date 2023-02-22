/**
* main - Prints hex digits
*base 16 (also known as hexadecimal) is a numbering system
*that uses 16 digits, which are
*typically the digits 0-9 (first while loop)
*and the letters A-F (second while loop)
*to represent the values 10-15. Hexadecimal is
*often used in programming to represent binary data
*in a more compact and readable form.
*Return: 0
*/
#include<stdio.h>
int main(void)
{
char c;
c = '0';
while (c <= '9')
{
putchar(c);
c++;
}
c = 97;
while (c < 103)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
