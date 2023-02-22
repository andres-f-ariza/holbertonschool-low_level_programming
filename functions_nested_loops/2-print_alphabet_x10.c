/**
* print_alphabet_x10 - prints lowercase alphabet 10 times
*The function contains a nested while loop, the second
*loop runs inside the first loop Return: 0
*/


#include "main.h"
void print_alphabet_x10(void)
{
int c = 97;
int t = 0;
while (t < 10)
{
do {
_putchar(c);
c++;
} while (c < 123)
;
c = 97;
t++;
_putchar('\n');
}
}
