#include "main.h"
/**
 * _strspn - Entry point
 * @s:  input
 * @accept: input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	while (s[i] && _strchar(accept, s[i]))
		i++;
	return (i);
}
