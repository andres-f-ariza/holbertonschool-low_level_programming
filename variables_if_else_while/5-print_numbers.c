/** 
* main - Prints digits
* Return: 0
*while loop to print the numbers from
*0 to 9 to the console. The program
*initializes an unsigned short integer variable
*"d" to 0, and then enters a while loop that continues
*to execute as long as "d" is less than
*10. When the program is executed,
*it will print the numbers from 0 to 9 to the console,
*each on a separate line.The format specifier
*"%hu" is used with printf() to specify that
*the value of "d" should be printed as
*an unsigned short integer. The putchar()
*function is also used to print a newline character
*('\n') at the end of the output to move
*the cursor to the next line. Finally,
*the program returns 0 to indicate
*that it has finished executing without errors.
*/
#include <stdio.h>
int main(void)
{
unsigned short d;
d = 0;
while (d < 10)
{
printf("%hu", d);
d++;
}
putchar('\n');
return (0);
}
