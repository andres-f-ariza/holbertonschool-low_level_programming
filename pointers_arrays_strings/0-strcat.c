#include "main.h"
/**
*_strcat - concatenate two strings
*@src: source pointer
*@dest: destiny pointer
*Return:void
*/
char *_strcat(char *src, char *dest)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
