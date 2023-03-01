#include "main.h"

/**
*_strlen - returns length of string.
*@s: Pointer to string to measure
*1.The function declares two integer variables i and len and
*initializes them to 0.
*2.It enters a while loop that continues as long as the
*character pointed to by the pointer s plus the value of i
*is not equal to the null character ('\0'), which marks the
*end of the string.
*3.Inside the loop, the length len is incremented by 1 for each
*character of the string that is encountered.
*4.The index i is also incremented by 1 in each iteration of the
*loop.
*5.When the end of the string is reached, the function returns the
*value of len.
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
