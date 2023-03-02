#include "main.h"

/**
 * _strncpy - copies a string, with at most n bytes from src
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Bytes to take from src
 * Return: Pointer to resulting string dest
 */

strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	i++;
	}
	return dest;
}
