#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
	int lendest;
	int lensrc;
	int i;

	lendest = _strlen(dest);
	lensrc = _strlen(src);
	i = 0;
	while (i < n && i < lensrc)
	{
		*(dest + lendest) = *(src + i);
		lendest++;
		i++;
	}
	return (dest);
}
