#include "main.h"
/**
 * _strchr  - searches for first occurance for a charcter
 * @s: pointer to first to location
 * @c: required charcter
 *
 * Return: first occurance
*/

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (s[i] != c)
			i++;
	}
	return (&s[i]);
}
