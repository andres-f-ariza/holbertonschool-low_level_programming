include "main.h"
#include <string.h>
char *_strncat(char *dest, char *src, int n)
{
	int lendest;
	int lensrc;
	int i;

	lendest = strlen(dest);
	lensrc = _strlen(src);
	i = 0;
	while (i < n && i < lensrc)
	{
		*(dest + lendest) = *(src + i);
		lendest++;
		i++;
	}
	return (dest);
}
