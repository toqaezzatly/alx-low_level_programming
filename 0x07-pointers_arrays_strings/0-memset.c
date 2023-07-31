#include "main.h"

/**
 * _memset - fn used to allocate specific block in mem
 * @s: 1st location
 * @b: value to stored
 *
 *@n: number of memory location
 *
 * Return: adrs of 1st location
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*s++ = b;
	return (s);
}
