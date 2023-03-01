#include "main.h"

/**
*_strlen - returns the length of a string.
* @s: Pointer to string to measure
* Return: Lenght of the string
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
* _strcpy - copies the string pointed to by src, including the terminating
* null byte (\0), to the buffer pointed to by dest.
* @dest: Pointer to destiny
* @src: Pointer to source
*C function named _strcpy that takes two arguments: a pointer to a destination
*character array 'dest'(used to specify the memory
*location where the copied string will be stored. This pointer
*allows the function to modify the contents of the destination array).
*and a pointer to a source character array
*(used to specify the memory location of the string to be copied. This pointer
*allows the function to read the contents of the source array.)
*the function copies the contents of the source array
*into the destination array and returns a pointer to the destination array.
*int len: Declare an integer variable len to
*store the length of the source array.
*int i: Declare an integer variable i to use as a loop counter.
*len = _strlen(src): Calculate the length of the source array using
*the _strlen function
*for (i = 0; i <= len; i++):Loop
*through the source array and copy each character
*to the destination array.
*'*(dest + i)' = *(src + i): Copy the character at the current position
*in the source array to the corresponding position
*in the destination array. The * operator
*is used to access the values pointed to by
*the dest and src pointers. return (dest): Return a pointer to the desti
*nation
*array.
*Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int len;
int i;
len = _strlen(src);
for (i = 0; i <= len; i++)
*(dest + i) = *(src + i);
return (dest);
}
