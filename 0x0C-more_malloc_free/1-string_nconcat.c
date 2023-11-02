#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: des
 * @s2: src
 * @n: he length of s2
 * Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, newlen;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL || n == 0)
	{
		s2 = "";
	}
	if (n < 0)
	{
		return (s1);
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	newlen = len1 + (n < len2 ? n : len2) + 1;
	new_str = malloc(newlen);

	if (new_str ==  NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strncpy(new_str + len1, s2, n);
	new_str[newlen - 1] = '\0';
	return (new_str);
}
