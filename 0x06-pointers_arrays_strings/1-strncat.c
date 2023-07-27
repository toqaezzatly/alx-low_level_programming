#include "main.h"
/**
 * _strcat - fn to overwrite '\0' of dest
 * with 1st char of src
 * Description: takes names of the arrays of strings aka
 * pointers to the 1st elements of strings
 *
 *
 * @dest: pointer
 *
 * @src: ..
 *
 * @n: number of bytes
 *
 * Return: pointer to dest string
 *
*/
char *_strncat(char *dest, char *src, int n);
{
	int i;
	int dest_len;

	while (dest[i] != '\0')
		dest_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
