/**
*print_alphabet - prints lowercase alphabet
*While loop to print out ASCII values from
*97 to 122, which correspond to lowercase letters in English
*Return: 0
*/

#include "main.h"
void print_alphabet(void)
{
int c;
c = 97;
while (c < 123)
{
_putchar(c);
c++;
}
_putchar('\n');
}
