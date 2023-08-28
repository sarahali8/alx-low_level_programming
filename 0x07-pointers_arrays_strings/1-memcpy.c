#include"main.h"

/**
 * _memcoy - copies memory area
 * @dest: destination location
 * @src: source location
 * @n: number of bytes is copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
