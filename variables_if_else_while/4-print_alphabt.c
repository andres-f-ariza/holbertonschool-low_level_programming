/**
* main - Prints lowercase alphabet
* Return: 0
*for loop prints out the values
*97 to 122 in the ASCII table that correspond
*to the lowercase English alphabet
*from "a" to "z".inside
*the for loop we find an
*if conditional statement which
*commands to not print out
*ASCII values when the for
*loop reaches 101
*"e" or 113 "q"
*/
#include <stdio.h>
int main(void)
{
char c;
for (c = 97; c < 123; c++)
{
if (c == 101)
{
}
else if (c == 113)
{
}
else
{
putchar(c);
}
}
putchar('\n');
return (0);
}
