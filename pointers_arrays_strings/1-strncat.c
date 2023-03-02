#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings, with at most n bytes from src
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Bytes to take from src
 * Return: Pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lendest;
	int lensrc;
	int i;

	lendest = strlen(dest);
	lensrc = strlen(src);
	i = 0;
	while (i < n && i < lensrc)
	{
		*(dest + lendest) = *(src + i);
		lendest++;
		i++;
	}
	return (dest);
}
