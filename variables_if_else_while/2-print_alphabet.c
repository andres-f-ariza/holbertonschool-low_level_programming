/**
 * main - Prints lowercase alphabet
 * Return: 0
 */



#include <stdio.h>



int main(void)
{
char c;
/**
*while loop to print out all the ASCII characters with values from 97 to 122. T*he variable "c" is initialized to 97, and the loop continues to execute as lon*g as "c" is less than 123. Inside the loop, the putchar() function is used to *print the character corresponding to the current value of "c". The value of "c*" is then incremented by 1 at the end of each iteration. The values 97 to 122 *in the ASCII table correspond to the lowercase English alphabet from "a" to "z*".
 */
c = 97;
while (c < 123)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
