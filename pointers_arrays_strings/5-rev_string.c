#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: Pointer to string to measure
*Return: Lenght of the string
*This dunction declares two variable of integer type i, len and
*initializes both of them to 0, it enters a while loop
*that continues until i = null(\0),
*which marks the end of any string.
*Inside the loop, the length 'len' is incremented by 1 for
*each character of the string is encountered, the index (i)
*is also incremented in each iteration
*when the loop finishes it returns the value of len
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
* rev_string - reverses a string.
* @s: Pointer to string to reverse
*This code defines a function named rev_string
*that takes a pointer to a character
*array (a string) as its argument and reverses the
*characters of the string in place.
*The function declares two integer variables i and j and initializes
*i to the length of the string minus 1, and j to 0. It enters
*a while loop that continues as long as i is greater than or equal to j.
*Inside the loop, the function uses a temporary character variable
*c to swap the characters pointed to by the pointers s plus j and s plus
*i. This is done by first storing the value pointed to by
*s plus j in c, then assigning
*the value pointed to by
*s plus i to the location pointed to by s
*plus j, and finally assigning the value
*of c to the location pointed to by s plus i. This
*effectively swaps the two characters. The index
*i is decremented by 1 in each iteration of the loop,
*and j is incremented by 1. After the loop has finished,
*the function has effectively reversed the
*characters of the string in place. Overall, this function iterates
*over the characters of the string, swapping pairs of characters
*as it goes along until the entire string has been reversed in place.
*This is done by using a temporary variable to store one
*of the characters during the swap.
*Return: Always 0
*/

void rev_string(char *s)
{
int i;
int j;
char c;
i = _strlen(s) - 1;
j = 0;
while (i >= j)
{
c = *(s + j);
*(s + j) = *(s + i);
*(s + i) = c;
i--;
j++;
}
}
