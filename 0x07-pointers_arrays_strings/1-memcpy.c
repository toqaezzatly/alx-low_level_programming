#include "main.h"
/**
 * _memcpy - fun copies n bytes from memory area src to dest
 * @dest: new memory a0rea
 * @src: old memory area
 * @n: number of memory locations
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
