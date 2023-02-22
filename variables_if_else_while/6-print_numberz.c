/**
*main - Prints numbers
* Return: 0
*while loop
*prints out characters from 0
*to 9, with an increase of 1, as soon as it finishes,
*it makes a new line
*/

#include <stdio.h>
int main(void)
{
int c;
c = '0';
while (c <= '9')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
