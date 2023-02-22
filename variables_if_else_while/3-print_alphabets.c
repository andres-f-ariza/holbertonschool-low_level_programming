/**
*main - Prints lowercase alphabet
*Return: 0
*first while loop prints out characters ASCII, 
*from 97 to 122. These values correspond to
*lowercase "a" to "z".
*second while loop prints out characters ASCII, 
*from 65 to 90. These values correspond to
*lowercase "A" to "Z".
*/
#include <stdio.h>
int main(void){
char c;
c = 97;
while (c < 123)
{
putchar(c);
c++;
}
c = 65;
while (c < 91)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
