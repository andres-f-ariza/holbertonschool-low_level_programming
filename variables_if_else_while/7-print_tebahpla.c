/**
* main - Prints lowercase alphabet in reverse
*while loop that prints out values from initialized c
*in 122 to 97, decrasing by step 1. These
*values correspond to the lowercase letters
*in English
*Return: 0
*/

#include <stdio.h>
int main(void)
{
char c;
c = 122;
while (c > 96)
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
