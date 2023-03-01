#include "main.h"

/**
*_strlen - returns the length of a string.
* @s: Pointer to string to measure
*Return: Lenght of the string
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
* puts2 - prints every other character of a string, starting
* with the first character, followed by a new line.
* @str: Pointer to string to print
*This code defines a function named puts2 that takes a pointer
*to a character array (a string) as its argument and prints
*every other character of the string, starting with the first character,
*followed by a newline character. The function declares two
*integer variables i and j and initializes i to the length of the string minus 1,
*and j to 0. t enters a while loop that continues as long as j is less
*than or equal to i.Inside the loop, the function checks if j is an even number
*by using the modulo operator % to test if j is divisible
*by 2. If it is, the function calls _putchar to print
*the character pointed to by the pointer str plus j. The index
*j is incremented by 1 in each iteration of the loop.
*After the loop has finished, the function calls _putchar again to print a
*newline character, so that the next line of output will start on a new
*line. Overall,
*this function iterates over the characters of the string,
*printing every other character (the ones with even indices)
*using _putchar, and then prints a newline character at the end.
*This results in every other character of the string being printed,
*starting with the first character.Return: Always 0
*Return: Always 0
*/

void puts2(char *str)
{
int i;
int j;
i = _strlen(str) - 1;
j = 0;
while (j <= i)
{
if (j % 2 == 0)
_putchar(*(str + j));
j++;
}
_putchar('\n');
}
