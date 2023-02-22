/**
* main - Prints digits separated by commas and spaces
*for loop used to print out values of c
*from 0 to 9, each value passes through
*the conditional if statement, so if the
*value is less than 9 it will
*be printed out in console, folowed by a comma and a space
*if it is 9, it will be followed by nothing
*Return: 0
*/

#include <stdio.h>
int main(void)
{
int c;
for (c = '0';
c <= '9';
c = c + 1)
{
putchar(c);
if (c < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
